/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((8247681310731744571 ? ((var_6 ? var_0 : var_13)) : ((1 ? 1 : (~1)))));
    var_17 = ((~(((max(var_6, var_14))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((var_14 / 1) ? (((arr_1 [i_0] [i_0]) * ((min(var_9, 1))))) : (((((var_4 * (arr_4 [21] [11] [i_2])))) ? (arr_4 [i_0] [i_1] [i_2]) : (var_9 * 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = var_4;
                                var_19 *= (((((~(2304717109306851328 < 1)))) & (((((13 / (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? (((arr_10 [i_0]) - var_3)) : ((((arr_6 [i_0] [i_0] [i_3] [i_4]) ? -823483718 : var_0)))))));
                                var_20 = (max(var_7, (~var_10)));
                                var_21 = (((~1795317278) ? (arr_12 [7]) : var_10));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 *= (((arr_16 [i_0]) | ((1 ? (-2147483647 - 1) : 1097364144128))));
                                arr_20 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0] = (min(-118, 28));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_28 [i_8] [i_7] = (arr_3 [i_8]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_23 *= ((((var_7 ? var_12 : (-2147483637 & var_1))) << ((((+(((arr_29 [i_7] [i_7] [i_8]) ? (arr_32 [i_0] [i_7] [i_8] [i_9] [i_9]) : var_12)))) - 51))));
                                var_24 *= var_12;
                                arr_34 [i_8] [i_8] [i_8] = (max(((51316 ? 1 : 496)), ((var_8 ? 1795317286 : (arr_5 [i_7 - 1] [i_7 + 2] [i_10])))));
                            }
                        }
                    }
                    var_25 = (arr_31 [i_0] [21] [21] [i_0] [i_0]);
                    arr_35 [i_8] [i_8] = (arr_32 [i_0] [i_7] [i_8] [i_8] [i_8]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_38 [5] = (arr_30 [i_11] [i_11] [i_11]);
        arr_39 [10] = 1;
    }
    #pragma endscop
}
