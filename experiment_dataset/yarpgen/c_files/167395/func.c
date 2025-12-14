/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167395
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
    var_18 |= ((/* implicit */signed char) (unsigned char)1);
    var_19 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2] = arr_0 [i_0] [i_1];
                    var_20 = ((/* implicit */short) max((var_20), (max(((short)32767), ((short)32767)))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [(unsigned short)13] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_3 [i_2] [i_3 - 1])))));
                        arr_13 [i_0] [(signed char)3] [(signed char)3] [i_3] [(signed char)3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                        arr_14 [(short)1] = ((/* implicit */unsigned char) ((short) arr_11 [i_3] [i_3] [i_3 + 1] [(unsigned short)4] [i_3]));
                    }
                }
                /* vectorizable */
                for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (arr_11 [i_5 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_0])));
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5 - 1] [i_4 - 4]))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_4] = var_0;
                        var_23 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                        var_24 = arr_0 [i_0] [i_1];
                        arr_22 [i_0] [i_4] [i_4 + 2] [i_4] = ((/* implicit */unsigned short) ((short) arr_19 [i_4 + 2] [i_4 - 3] [i_6 + 1] [i_6 + 1]));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) (short)-32767);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((short) arr_20 [i_4 - 3] [i_4 + 2] [i_4 - 2] [(unsigned short)0] [(unsigned short)0] [i_4 - 1])))));
                        arr_25 [i_4] = ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_4 + 2] [i_0]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_1] [i_4] [i_8] [i_9] [i_1] [i_1] &= ((/* implicit */unsigned int) var_12);
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) (unsigned short)1048)))))));
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 - 1]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)54)))))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_5 [i_4 + 2] [i_4 - 3]))));
                        }
                        var_31 = ((/* implicit */unsigned short) 33538048U);
                        arr_36 [(unsigned char)2] [i_0] [i_4] [i_4] [i_0] [i_0] = arr_32 [(unsigned short)10] [(unsigned short)10] [i_4 - 3] [i_4 + 2] [i_4 + 1];
                    }
                    var_32 += ((/* implicit */signed char) arr_32 [i_1] [i_1] [i_1] [i_1] [i_0]);
                }
                arr_37 [i_0] [i_0] = min((arr_32 [i_0] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) min(((short)-32758), (((/* implicit */short) var_16))))));
            }
        } 
    } 
}
