/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 += -3;
                            var_15 = (((((((((arr_9 [i_3 + 1] [i_2] [i_1] [i_1] [i_0]) + 9223372036854775807)) >> var_13)) % 1)) == ((((!(arr_11 [i_3 + 2] [i_3 - 1] [0] [i_3])))))));
                            var_16 = (arr_0 [i_0] [i_0]);
                            var_17 = (arr_11 [i_3 + 2] [i_3] [i_3 + 3] [i_3]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_18 |= (((arr_10 [i_0] [i_1] [i_1]) ? (max(0, 3039083161)) : (((arr_7 [i_0] [0] [i_4]) & (var_2 < var_1)))));
                    arr_15 [i_0] [i_4] [i_4] [i_4] = var_3;
                    var_19 = (arr_9 [11] [i_1] [11] [i_4] [11]);
                }

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_0] [i_5] [i_5] [i_0] = ((!((max(((max(1255884144, (arr_17 [i_5 - 1])))), var_11)))));
                    var_20 = (((arr_11 [i_0] [i_1] [6] [i_5]) | (((max(var_7, (arr_11 [i_0] [i_0] [i_1] [i_5])))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_0] [i_6] = ((1255884144 * (((-((var_9 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_1] [i_6]))))))));
                    var_21 = (arr_3 [i_0]);
                    var_22 = ((!(arr_2 [i_6] [i_0])));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_23 = ((~(arr_23 [i_7])));
        var_24 = 1;
        var_25 = (arr_23 [i_7]);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_26 = ((~(arr_10 [i_8] [i_8] [i_8])));
        var_27 = ((-((max((arr_6 [i_8] [i_8]), (arr_6 [i_8] [i_8]))))));
        var_28 = (((((((var_1 ? (arr_1 [i_8] [i_8]) : 25327)) * (((-(arr_16 [i_8] [6] [i_8] [i_8]))))))) ? -18446744073709551615 : (((max(1, 7922384935136381330)) | ((((arr_17 [i_8]) / (arr_5 [i_8] [1]))))))));
        var_29 = (((~((~(arr_21 [i_8] [i_8] [i_8]))))) & (max((arr_17 [i_8]), -1)));
        arr_28 [i_8] = (min((((arr_12 [i_8]) ? var_4 : (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]))), (arr_12 [i_8])));
    }
    #pragma endscop
}
