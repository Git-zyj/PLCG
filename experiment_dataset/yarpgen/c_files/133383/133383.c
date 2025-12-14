/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_11, (max(((var_1 ? var_9 : var_12)), ((max(var_0, var_14))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_17 = (((max((var_1 / 25442), var_7)) >= (((!((((arr_2 [i_0] [i_0]) ? var_11 : var_14))))))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] = ((-(max(var_0, var_9))));
                            arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((((~(arr_1 [i_1 + 2]))) < (((25442 > 1824372150) ^ 0))));
                            var_18 = ((var_7 ? (-391005978 || 10920649776007346819) : (((!var_3) ? var_6 : (3912277094 || var_3)))));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_1] [i_2] = arr_9 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1];
                            var_19 = (max(var_19, -26723));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_20 = (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) | var_14));
                            arr_20 [i_1] [i_6] [i_2] [i_1 + 1] [i_6] = ((((((!(((-32321 ? 57382 : 391005978))))))) - var_8));
                            arr_21 [i_1] [i_1] [i_2] [i_2] [i_2] = (((((var_6 && (arr_3 [i_0] [i_0] [i_1]))))));
                        }
                    }
                }
                arr_22 [i_2] [i_1] [i_1] [i_0] = ((391005977 ? 25446 : 2251799813685240));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                arr_26 [i_0] [i_0] [i_1] = (22 / -22423);
                var_21 = (max(var_21, (~-1449493030)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_22 = (((((var_11 ? var_13 : var_7))) ? 25520 : var_14));
                            var_23 = (max(var_23, var_14));
                            var_24 = (min(var_24, (!var_9)));
                            var_25 = 0;
                        }
                    }
                }
                var_26 = var_3;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_27 = (arr_6 [i_0] [i_0] [i_1]);
                arr_33 [i_1] = var_0;
                var_28 = (((-6361850375960623898 / var_3) > ((var_7 ? var_13 : var_15))));
            }
            var_29 = var_3;
            arr_34 [i_1] = var_11;
        }
        var_30 -= var_8;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_31 = ((3816308500 - (!-1)));
        var_32 = (min(var_32, (~var_4)));
        var_33 = (((var_12 / (arr_35 [i_11] [i_11]))));
        var_34 = ((((arr_35 [i_11] [i_11]) - 53)));
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        arr_39 [i_12] [i_12] = (-684088839 & 647619179);
        arr_40 [i_12] [i_12] = var_10;
        arr_41 [i_12] = (max(((max(var_10, ((var_9 ? var_1 : var_0))))), ((+((var_14 ? (arr_35 [i_12] [i_12]) : var_4))))));
        var_35 -= (arr_36 [i_12]);
        var_36 = ((((25450 ? 3517427231319340779 : -1)) < (((((arr_36 [i_12]) >= -15)) ? (((arr_35 [i_12] [i_12]) / (arr_35 [i_12] [i_12]))) : (~var_15)))));
    }
    var_37 = (max(((((-14982 ? -32762 : 1)) ^ (~-25442))), 44377));
    var_38 += (((var_14 << ((((((var_13 ? var_13 : var_15) + 5185470077189039839)) - 25))))));
    var_39 = (min(var_8, ((var_6 ? (min(var_2, var_3)) : (18883 / 1824372150)))));
    #pragma endscop
}
