/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172828
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3641682488U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)19992)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18995))) : (653284808U));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3641682495U)) ? (max((35150012350464LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (725444347U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35150012350469LL)) ? (-1LL) : (((/* implicit */long long int) 653284808U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46648))))))))));
    var_14 = ((/* implicit */unsigned char) 653284808U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                arr_4 [i_0] = ((/* implicit */unsigned int) (-2147483647 - 1));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) 4445483286713765521LL);
                        var_16 = ((/* implicit */signed char) var_11);
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 35150012350487LL)) ? (arr_9 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        arr_14 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8176))) : (1807222208U)))) ? (6409173267403168198ULL) : (((/* implicit */unsigned long long int) 15))));
                    }
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                    var_17 ^= ((/* implicit */long long int) 12037570806306383425ULL);
                }
                for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)45569);
                    var_18 += ((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_5 - 1] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(unsigned short)4] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) 4294967295U))))))));
                }
                for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    arr_21 [i_0] = var_11;
                    arr_22 [i_0] [(unsigned char)12] [i_6] [i_0] = ((/* implicit */unsigned long long int) (short)19045);
                    var_19 = ((/* implicit */unsigned char) 3641682488U);
                }
                for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1195984737620467765LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))))));
                        arr_28 [i_0] [(unsigned char)3] [i_7] [i_1] [(unsigned char)11] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_1] [i_1] [i_0] [i_0])) ? (23LL) : (((/* implicit */long long int) -789500918)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
                        var_21 = ((/* implicit */unsigned int) (unsigned short)44612);
                        arr_29 [i_0] [(unsigned char)2] [i_1] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (186864727U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_7 - 1] [i_7])))));
                    }
                    var_22 ^= ((/* implicit */signed char) 2147483637);
                }
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((_Bool)0) ? (max((min((var_5), (6U))), (((/* implicit */unsigned int) (unsigned char)240)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
