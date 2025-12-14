/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11063
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
    var_10 = (~(max((var_1), (((/* implicit */long long int) var_6)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */int) var_6))))));
        arr_4 [i_0] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((780305902U) + (3241060750U))))))));
        arr_5 [i_0] = var_0;
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_14 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_12 [i_3 - 4] [i_3] [i_3] [i_3 + 2]);
                    /* LoopNest 2 */
                    for (short i_4 = 4; i_4 < 16; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_21 [i_5] [4U] [i_5] [i_3] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3 + 3] [i_3 - 1] [i_4 - 3])) ? (var_1) : (((/* implicit */long long int) arr_12 [i_4 - 4] [i_4 - 2] [i_4 - 2] [i_4]))));
                                arr_22 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5] [i_5] = (+(((((/* implicit */_Bool) 780305916U)) ? (((/* implicit */unsigned int) arr_10 [i_4] [i_2])) : (var_0))));
                                arr_23 [(short)2] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */short) 2162342468U);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_1] |= (+((-(arr_7 [i_1] [i_1]))));
        arr_25 [i_1] &= ((/* implicit */short) ((((((-1861731974) ^ (((/* implicit */int) var_2)))) + (2147483647))) << (((((/* implicit */int) arr_13 [i_1])) - (28866)))));
        arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1]);
    }
}
