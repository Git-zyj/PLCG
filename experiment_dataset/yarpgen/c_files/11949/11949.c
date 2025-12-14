/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] [i_0] |= ((-(arr_3 [i_2] [i_1 + 1] [i_0])));
                    var_11 = (max(var_11, 24421));
                    var_12 = ((1 ? 18446744073709551595 : 1236709348));
                    var_13 -= (((-2147483647 - 1) || 4095));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 += -var_3;
                        arr_11 [i_0] [i_1] [5] [i_3] [i_2] [i_3] = (arr_3 [i_0] [i_0] [i_2]);
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [7] [i_1 + 2] [i_1] [i_1 + 1] = (((((var_6 ? 2147483647 : var_7))) ? -var_2 : (arr_7 [i_0] [i_1])));
                        var_15 = -2147483642;
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_16 = (min(var_16, (((arr_7 [i_1 + 1] [i_5 - 1]) ? (arr_7 [i_1 + 2] [i_5 + 1]) : -1409049152))));
                            var_17 = (2147483647 - 14182);
                            var_18 = ((-(arr_14 [i_5 - 2] [i_5 - 1])));
                            arr_21 [i_0] [1] [i_1] [i_2] [i_5 - 2] [i_6] = (((arr_19 [i_5 - 2] [i_2] [i_2] [i_2] [i_1 - 1]) ? (arr_19 [i_5 - 2] [19] [i_5] [i_2] [i_1 - 1]) : var_1));
                        }

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_25 [i_1 + 1] [i_2] [i_5] = (arr_3 [i_0] [i_1 - 1] [i_2]);
                            var_19 = ((14192 * (arr_22 [i_2] [1] [i_2] [i_7 + 1] [i_7 - 1])));
                            var_20 = (arr_4 [i_0] [i_0] [i_0]);
                        }
                        var_21 = var_4;
                        var_22 = -1236709357;
                    }
                }
            }
        }
        var_23 = (-((539379497897852097 ? -2147483642 : (-2147483647 - 1))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_24 -= (-(min((arr_28 [i_8] [i_9]), (arr_6 [i_9] [i_9]))));
                arr_32 [3] = ((var_1 ? ((min((arr_29 [i_9] [i_9] [i_8]), var_10))) : ((-(arr_29 [i_8] [i_8] [i_9])))));
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_25 += -149959253;
                                var_26 -= (min(1, 0));
                                arr_41 [i_8] [i_8] [i_8] [i_8] [3] = ((arr_0 [i_8]) ? (min((arr_30 [i_12]), 4763330487244554021)) : -2147483647);
                                var_27 = (max(var_27, (((-(min((arr_38 [i_8] [i_12]), (arr_38 [i_8] [i_12]))))))));
                                var_28 = (min(var_0, (min(14192, -4224))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (max(var_2, -var_9));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                var_30 *= 2147483628;
                var_31 = (((arr_44 [i_13]) > 4685003039373778388));
            }
        }
    }
    var_32 -= 10788;
    #pragma endscop
}
