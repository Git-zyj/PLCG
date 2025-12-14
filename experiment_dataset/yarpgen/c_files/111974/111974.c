/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [13] = (max(((var_15 ? ((var_1 ? var_15 : var_12)) : var_0)), (((var_11 ? var_3 : var_13)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = ((((min(var_4, var_0))) ? (max(4194048, 262144)) : var_14));

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_18 = (max((~-var_2), ((-(max(var_10, var_15))))));
                arr_8 [i_0] [i_2] = ((((max(var_4, var_16))) ? ((var_6 ? (max(var_1, var_14)) : var_17)) : var_9));
                var_19 = ((var_10 ? var_8 : (min(var_17, var_9))));
                var_20 -= var_8;
                arr_9 [i_0] [i_2] [i_1] [i_2] = -var_15;
            }
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = ((min(((var_13 ? var_8 : var_11)), var_13)));
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_22 = (!((min(var_17, var_7))));
                            arr_19 [i_0] [i_3] [i_3] [i_5] [i_6] = (max((max((min(var_15, var_14)), (min(16376, 1769803680939287519)))), var_6));
                            var_23 = max((((var_9 ? var_12 : var_16))), ((var_14 ? var_17 : var_3)));
                            arr_20 [8] [i_3] = ((((((var_2 ? var_1 : var_0)))) ? var_1 : (((((var_16 ? var_17 : var_3))) ? var_0 : 8))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    {
                        var_24 -= (~((max(var_10, var_9))));
                        var_25 = (((max(var_9, var_6))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_33 [i_11] [i_11] = max(var_9, var_16);

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_26 = (((var_14 ? var_8 : var_17)));
                        var_27 = (((var_5 ? var_12 : var_12)));
                        var_28 = (max(var_28, var_11));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_29 = ((53 ? 65526 : 65526));
                        arr_40 [1] [1] [i_11] [i_11] [13] = ((~((var_6 ? var_11 : var_0))));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_43 [10] [5] [i_11] [i_11] [i_11] [i_11] = (min(0, ((var_11 ? var_6 : (max(var_8, var_11))))));
                        var_30 = var_9;
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_46 [i_15] [i_15] = ((((((((var_7 ? var_11 : var_8))) ? (((var_13 ? var_6 : var_12))) : ((var_15 ? var_5 : var_14))))) ? 34 : ((max(var_3, var_15)))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                {
                    var_31 = ((((var_12 ? var_9 : var_17))) ? var_14 : (max(1, 2047)));
                    var_32 = (((((var_15 ? var_10 : var_5))) ? (min(var_4, (~var_2))) : (max(var_8, ((var_16 ? var_4 : var_16))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 9;i_19 += 1)
                        {
                            {
                                arr_57 [i_17] = (((!var_12) ? ((min(var_10, var_11))) : (min(var_3, var_5))));
                                arr_58 [i_15] [1] [10] [i_18] [i_19] [i_17] [i_15] = (max(((max((max(var_13, var_5)), ((var_14 ? var_10 : var_3))))), var_14));
                                var_33 = (((var_0 ? var_7 : var_15)));
                                var_34 = (min(var_34, (~var_1)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                {
                    var_35 = ((~(min(var_1, var_15))));
                    arr_66 [i_21] [6] [i_15] [i_21] = ((((min(var_1, var_17))) ? var_6 : (max((min(15, 65526)), var_0))));
                }
            }
        }

        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            arr_69 [i_15] [i_22] [i_22] = ((-((((max(var_4, var_13))) ? ((var_12 ? var_9 : var_11)) : var_7))));

            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        {
                            var_36 = ((((min(var_1, var_0))) ? -var_8 : ((max(var_0, var_3)))));
                            var_37 = (max(var_37, var_9));
                            arr_77 [i_15] [i_15] [i_22] [i_23] [i_24] [i_25] [3] = ((var_13 ? ((~((-1 ? 14734531192570416814 : 32758)))) : ((min((min(var_8, var_13)), var_2)))));
                        }
                    }
                }
                var_38 = var_5;
            }
            var_39 = ((((max(var_12, var_7))) ? var_14 : (((max(var_9, var_10))))));
            var_40 = (max(var_3, (((var_11 ? var_1 : var_2)))));
        }
        for (int i_26 = 1; i_26 < 1;i_26 += 1)
        {
            var_41 = (max(var_41, var_8));
            arr_80 [i_26] = -2622048171725690024;
        }
    }
    var_42 = var_2;
    var_43 = (min(var_43, var_13));
    #pragma endscop
}
