/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14480
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
    var_17 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))), (67108863)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((-67108863) == (((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (var_1)));
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (max((var_3), (1722674342U)))))) >= (-5117063591319392595LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) (+(((/* implicit */int) ((524287ULL) > (((/* implicit */unsigned long long int) 1869488825)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_1 - 1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_3 [i_1 - 1])))));
                                arr_13 [i_0] [13U] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_1 [0])))), (((/* implicit */int) arr_6 [i_1 - 1] [i_1]))));
                                var_21 = ((/* implicit */unsigned char) 1334241071U);
                                arr_14 [i_1] [(short)3] [i_3] [i_2] [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) max((((long long int) 2572292953U)), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)100)), (arr_5 [i_0] [i_0] [7])))) ? (arr_2 [(unsigned char)4]) : (1719002509))))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) max((((arr_5 [(short)0] [i_3] [(short)0]) / (((/* implicit */long long int) 1682245632)))), (((/* implicit */long long int) max(((short)0), ((short)-1))))))) ? (((unsigned int) ((unsigned char) (short)12268))) : ((~(((unsigned int) 12636255999606639333ULL)))))))));
                            }
                        } 
                    } 
                    var_23 = arr_4 [i_1] [i_2];
                }
                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [9U] [i_1 - 1]);
            }
        } 
    } 
}
