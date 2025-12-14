/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 -= var_4;
    var_14 = (max(var_2, (((!(var_0 && 255))))));
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 -= (max(((min((9223372036854775807 && var_0), 1))), 9223372036854775807));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 ^= (arr_6 [i_2]);
                        arr_11 [i_0] [i_1 - 1] [i_1] [i_2 - 1] [19] = (max((((((arr_6 [i_2]) * (arr_2 [5]))) + 18446744073709551615)), ((max((((arr_10 [20] [i_1] [i_2] [i_3] [i_3] [i_1 - 2]) ? 108 : (arr_4 [i_3] [i_2]))), (arr_4 [9] [i_0]))))));
                        arr_12 [i_1] [i_3] [i_3] [i_3] = arr_7 [i_3] [i_3] [i_1];
                        arr_13 [i_1 - 2] [i_2] [i_1] = 0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (max(var_18, (arr_7 [i_2 + 2] [i_2] [i_2])));

                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_19 = ((var_4 ? ((var_10 ? var_6 : (arr_19 [i_1]))) : (arr_16 [20] [20] [3] [i_1] [i_0])));
                            arr_20 [i_1] = ((~(arr_1 [i_2 - 3] [i_5])));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_20 ^= (arr_8 [i_0] [i_6]);
                            var_21 = ((-(arr_8 [i_0] [i_1])));
                        }
                        arr_23 [i_0] [i_1] [i_1] [i_0] = (arr_8 [i_0] [i_1]);

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_22 = ((0 ? (arr_8 [i_0] [i_1]) : (arr_8 [i_0] [i_1])));
                            var_23 = ((!(arr_22 [i_2] [i_2] [i_2] [15] [15])));
                            arr_27 [i_1] [i_4] [i_1] = (arr_24 [i_0] [i_4] [i_2] [i_4] [i_7] [i_7] [i_1 - 3]);
                            arr_28 [i_7] [i_4] [i_1] [i_1] [i_1] [i_0] = (((arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) ? ((var_2 ? (arr_8 [i_0] [i_1]) : var_6)) : var_8));
                        }
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_24 = (max(var_24, (((-(arr_0 [i_1 - 1]))))));
                            var_25 = (arr_15 [i_8 - 1] [i_4] [i_2] [i_1] [i_0] [i_0]);
                            var_26 |= (arr_7 [i_2 + 3] [i_1 + 1] [i_8 - 2]);
                            var_27 = var_1;
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_28 = (arr_6 [i_0]);
                            var_29 = arr_7 [i_0] [i_0] [i_0];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
