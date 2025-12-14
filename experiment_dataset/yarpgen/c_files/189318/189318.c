/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -8195767987972020585;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = ((arr_3 [i_0]) / (arr_3 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = var_13;
                        var_18 = (((arr_3 [i_2 + 3]) * (arr_3 [i_2 - 1])));
                        arr_13 [i_3] [i_1] [i_2] [i_1] [0] |= (~1);
                    }
                }
            }
        }
        var_19 ^= ((((var_3 && (arr_9 [i_0] [i_0]))) && var_11));
        var_20 ^= ((var_10 ? (arr_0 [i_0] [i_0]) : var_6));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] &= ((-(((var_13 == (arr_14 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_7] [i_8] [i_7] [i_6] [i_7] [i_4] &= ((!(var_13 && var_14)));
                                arr_29 [i_6] [i_5] [i_6] [i_8] [i_7] = (!1);
                                var_21 &= ((((min((((arr_24 [i_4] [i_5] [i_6] [3]) << (((arr_19 [i_8] [i_5] [i_4]) - 12574)))), var_2))) ? ((((((-(arr_25 [i_8] [i_7] [i_6] [i_6] [i_5 + 2] [i_4] [i_4])))) ? var_13 : var_9))) : ((((max((arr_21 [i_5] [i_6] [i_7]), var_7))) ? (arr_27 [i_8] [23] [i_8] [i_7] [i_5 - 3] [i_5 + 2] [i_5 - 2]) : (max(var_10, var_7))))));
                                var_22 = (((arr_15 [i_6]) - (((max(var_0, var_3))))));
                            }
                        }
                    }
                    arr_30 [i_6] [i_4] [i_4] |= (arr_25 [i_4] [i_4] [i_5 - 3] [i_5] [1] [i_6] [i_6]);
                    arr_31 [i_4] &= (2194 & 2198);
                }
            }
        }
        arr_32 [i_4] = (((((34519 ? 1 : (arr_22 [i_4] [i_4] [i_4])))) ? ((var_4 | (arr_19 [i_4] [i_4] [i_4]))) : ((((arr_14 [i_4]) || (arr_22 [i_4] [9] [i_4]))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_23 += (max((((!(arr_20 [i_9] [i_9] [i_9])))), (((arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [8] [i_9]) + (arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_35 [1] = ((var_0 ^ (((((var_8 ? (arr_22 [i_9] [i_9] [i_9]) : var_4))) ? (arr_26 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_18 [i_9] [i_9])))));
        var_24 = ((~(max((arr_22 [i_9] [i_9] [i_9]), (arr_22 [i_9] [i_9] [i_9])))));
        arr_36 [i_9] [i_9] = (((var_1 / var_11) << (var_6 + 1308687071)));
    }
    var_25 |= var_10;
    #pragma endscop
}
