/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((max(var_2, var_4)) + var_1))) ? var_4 : var_8));
    var_12 = -var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = var_7;

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_14 = (max(var_14, (((!(arr_1 [i_1] [i_0]))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_15 &= min((((((var_4 ? (arr_0 [i_0] [i_3]) : 46))) ? (arr_5 [6] [i_2] [i_2 + 2]) : (!92))), (117 == 6861));
                        var_16 = (max(var_16, (((6861 ? (min(((var_6 ? var_8 : 127)), ((min((arr_6 [i_1] [i_1] [i_3]), 6857))))) : (((arr_7 [i_2 + 1] [i_2 + 1]) ? var_9 : (6878 >= 36))))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_17 = ((1 - (max(-662223243, 1))));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = var_10;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_2] [i_5] = (arr_10 [i_0] [5] [i_2 - 1] [i_5] [i_5]);
                        arr_17 [5] [5] [i_2] [1] = var_9;

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_18 = (max(var_18, (((6864614 | (arr_18 [i_0] [i_1] [i_6]))))));
                            var_19 &= ((((((arr_14 [i_0] [i_0] [i_1] [i_0] [i_5] [i_6]) ? 117 : 120))) ? -6886 : 536805376));
                            var_20 = (+-67108863);
                        }
                        var_21 = (max(var_21, ((((arr_14 [i_0] [i_1] [i_0] [5] [i_2] [4]) * 0)))));
                        var_22 = var_1;
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_23 = -115;
                        arr_22 [i_0] [i_1] [i_2] = 13856812791000104459;
                        arr_23 [i_0] [i_0] [i_2 + 1] [i_1] = ((((var_2 + (-1 == 4294967295))) * var_0));
                    }
                    var_24 = (min((arr_7 [i_0] [i_0]), (((((arr_13 [i_0] [i_0] [i_1] [i_2]) ? (arr_9 [i_0] [i_0] [i_2] [i_2] [8] [i_2]) : var_6))))));
                }
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
