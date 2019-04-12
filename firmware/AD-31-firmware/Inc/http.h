/**
 * **********************************************************************
 *             Copyright (c) 2016 temp. All Rights Reserved.
 * @file http.h
 * @author 宋阳
 * @version V1.0
 * @date 2016.12.18
 * @brief http函数头文件.
 *
 * **********************************************************************
 * @note
 *
 * **********************************************************************
 */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _HTTP_H
#define _HTTP_H


/* Includes ------------------------------------------------------------------*/
#include "prjlib.h"

/* Exported define -----------------------------------------------------------*/
/*定义HTTP超时时间，单位秒*/
#define HTTP_TIMEOUT                         30

/*定义HTTP包的大小*/
#define HTTP_PACKET_SIZE                     512

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
void HTTP_Init(void);

char *HTTP_GetData(char *host, char *path);
BOOL HTTP_GetDataToFlash(char *host, char *path, uint32_t flashaddr);

BOOL HTTP_SendGET(char *host, char *path, uint32_t pos);
BOOL HTTP_SendHEAD(char *host, char *path);

#endif
