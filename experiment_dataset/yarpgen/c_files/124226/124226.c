/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (-32767 - 1);

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_17 = ((-((-(1 - var_2)))));
                            var_18 = (arr_11 [i_0] [i_1 + 2] [i_1] [i_0] [i_3] [i_4 + 1]);
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_19 = 127;
                            var_20 = (83 >= 3705913010);
                            var_21 = (min(var_21, 1223044043));
                        }
                    }
                    arr_16 [i_2 + 3] [i_0] = (((1048576 > -127) == (arr_9 [i_0] [i_0] [i_1] [i_1 + 2] [i_0] [i_2])));

                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_22 = ((((((125 * 9) ? (2147483647 / var_9) : (arr_18 [4] [i_0 - 1] [i_2 + 2] [i_2])))) ? (((((var_7 ? 250 : 63))) * (255 * 0))) : -247));
                        arr_19 [8] [8] [i_0] [i_1] = (((arr_2 [i_0] [i_1] [i_0]) ? (max((234 | var_9), (max(var_2, var_2)))) : (((min((arr_12 [i_0] [i_0] [i_2] [i_1 + 1] [i_0]), 117))))));
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [2] [i_7] [i_7 - 1] = ((~(min((arr_20 [i_0] [i_0 + 1] [i_0 - 1] [i_7 - 1]), (arr_20 [i_0] [i_0 - 1] [i_0] [i_7])))));
                        arr_23 [0] [2] [i_2] [i_0] |= ((((((var_13 ? var_13 : (arr_2 [8] [8] [8]))))) ? ((((arr_6 [4] [4]) ? (arr_17 [i_7 - 2] [i_1]) : (76 || 16384)))) : (((-2147483647 - 1) ? ((1 ? 8190 : (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_7] [2] [i_0]))) : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1])))));
                        var_23 = (min(var_23, (((((min(var_13, (arr_9 [i_0] [i_1] [i_0 + 1] [i_2 + 2] [10] [i_7 + 1])))) ? 0 : ((((arr_20 [4] [i_0] [i_0 - 1] [i_0 - 1]) ? (((!(arr_20 [0] [i_1] [i_2] [i_7])))) : (!3)))))))));
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_7 - 2] = ((8388607 ? (arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0]) : 1435662423));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_24 = (~-9223372036854775806);
                                var_25 = (max((!var_5), (min(1, 1))));
                                var_26 = ((27374 ? ((-(-8186404250562764470 - 18446744073709551615))) : 140728898420736));
                                var_27 ^= ((((!(arr_28 [i_9] [i_0 + 1] [i_1 + 2] [i_8] [i_8] [i_2 + 2]))) ? (max((arr_28 [i_9] [i_0 - 1] [i_1 - 1] [i_8] [i_8] [i_8]), (arr_28 [i_9] [i_0 - 1] [i_1 + 2] [i_2] [8] [i_2 + 2]))) : (max((arr_28 [i_9] [i_0 - 1] [i_1 + 1] [4] [i_9] [i_9]), (arr_28 [i_9] [i_0 - 1] [i_1 + 2] [i_8] [i_9] [i_8])))));
                                var_28 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
