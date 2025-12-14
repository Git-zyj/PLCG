/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_10 = arr_0 [i_0];
    }

    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_11 = (arr_5 [i_1 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    {
                        var_12 = -549755813887;
                        var_13 = arr_8 [i_1] [i_1] [i_1];
                        var_14 = (((-9223372036854775807 - 1) ? 65535 : 9223372036854775807));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_1] [i_2] = (arr_17 [i_1 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1]);
                            var_15 = (min(var_15, 23));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_15 [i_1] [i_1] [i_3] [i_1] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_22 [i_6] [i_4] [i_1] = (arr_14 [i_1] [i_1]);
                            var_16 = (((((max((arr_10 [i_1] [i_3] [i_1] [i_1]), (arr_12 [i_2] [i_3] [i_4] [i_6])))) ? var_0 : (((arr_9 [i_3] [i_3]) ? var_3 : 16)))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_17 -= (arr_12 [i_1] [i_2] [i_1] [i_1]);
                            var_18 = (min(var_18, (((((max(((28 ? var_1 : 8481)), ((max((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]))))))) ? (arr_8 [i_1] [i_3] [i_7]) : (arr_17 [i_3] [i_3] [i_3] [i_3]))))));
                            var_19 = ((~(max((arr_12 [i_1 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 2]), (max(909783534, (arr_10 [i_1] [i_1] [i_1] [i_1])))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_20 = (arr_7 [i_1 - 2]);
                        var_21 = (((((max(var_5, (arr_16 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1]))))) ? (max(1, var_8)) : var_2));
                        var_22 = (arr_32 [i_8] [i_9]);
                        arr_33 [i_1] [i_8] [i_8] [i_1] = (arr_28 [i_1]);
                        arr_34 [i_1] [i_1] = (arr_4 [i_1]);
                    }
                }
            }
        }
        arr_35 [i_1] [i_1] = (((max(549755813887, 1957099951))) ? (arr_28 [i_1 - 2]) : (max((arr_29 [i_1 - 2]), (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    var_23 = ((!(((((max(18446744073709551615, var_6))) ? -var_8 : ((var_1 ? var_8 : 2)))))));
    var_24 = var_2;
    var_25 &= (8324198164763344002 ? 3385183762 : 0);
    #pragma endscop
}
