/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_17 = (((arr_1 [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1]) : ((1 ? 1 : 1))));
            arr_6 [i_0] = (arr_2 [i_0] [i_0]);
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            var_18 = (((arr_0 [i_0]) < (arr_0 [i_0])));
            arr_9 [i_0] [i_0] = var_8;
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_0] = var_7;
            var_19 += var_12;
            var_20 |= (arr_8 [i_3 - 1] [1] [i_0]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [19] [i_0] = (arr_7 [i_0] [i_3] [i_5 - 1]);
                        var_21 = var_5;
                        arr_19 [i_0] = (arr_2 [i_0] [i_3]);
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_24 [19] [i_0] [2] = (arr_0 [1]);
            var_22 = (min(var_22, (((((((arr_23 [14] [14]) ? (arr_5 [0]) : var_10))) ? (((-2147483647 - 1) ? 2583827457 : 2657048671)) : var_8)))));
            var_23 = (max(var_23, ((((((arr_14 [8]) ? var_8 : var_8)) & (arr_22 [1] [1]))))));
        }

        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_24 += (arr_29 [8] [8] [i_7] [8]);
                var_25 = ((127 ? (0 | 127) : (arr_26 [i_7] [i_7 + 4])));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                arr_32 [8] [i_0] [i_9] = (arr_4 [i_0] [23]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_38 [i_0] [i_7] [i_9] [i_10] [i_0] = var_6;
                            arr_39 [i_0] [i_0] [i_0] [9] [i_0] [i_0] = (((arr_23 [i_0] [i_0]) ? var_6 : (arr_23 [i_0] [i_0])));
                            var_26 = (arr_14 [i_10]);
                            var_27 = arr_26 [1] [i_0];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_48 [i_13] [i_0] [i_9] [i_0] [1] = (((((var_5 ? (arr_40 [i_0] [i_7 + 3]) : var_12))) ? var_9 : ((var_10 ? (arr_5 [i_0]) : var_11))));
                            var_28 = arr_10 [i_0];
                            var_29 = (arr_36 [i_0] [i_7] [i_9] [i_0] [i_0]);
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
            {
                var_30 = var_11;
                var_31 |= ((var_7 ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_14])));
                var_32 = var_3;
                arr_51 [i_0] = arr_50 [i_0] [i_0] [i_0];
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    {
                        var_33 = (((arr_11 [8] [i_7] [i_0]) ? var_7 : var_9));
                        var_34 *= var_13;
                        var_35 += var_9;
                        var_36 = var_5;
                        var_37 = (arr_54 [i_0] [7] [i_15] [14]);
                    }
                }
            }

            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                var_38 = (((arr_1 [i_0] [i_0]) ? ((var_1 ? (arr_12 [i_0] [i_7]) : var_4)) : (arr_30 [i_0] [i_7] [i_17 - 1] [i_7 + 4])));
                var_39 += ((var_14 ? ((var_12 ? var_12 : var_3)) : var_11));
                arr_60 [1] [i_0] [i_7] = (arr_47 [i_0] [i_0]);
            }
        }

        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_40 = (((arr_26 [i_18 - 1] [i_18 - 1]) ? (arr_26 [i_18 - 1] [i_18 - 1]) : (arr_26 [i_18 - 1] [i_18 - 1])));
            arr_63 [i_0] = var_12;
        }

        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_41 = (var_14 ? (((arr_0 [9]) ? var_1 : (arr_5 [10]))) : var_4);
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 21;i_21 += 1)
                {
                    {
                        var_42 = ((0 ? (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_56 [i_0])));
                        arr_73 [i_0] [i_19] [i_0] [i_21 + 1] [i_21] = (arr_21 [i_0] [i_19]);
                        var_43 = (((((var_15 ? var_3 : var_15))) ? ((var_5 ? var_8 : (arr_27 [i_0] [i_20] [i_0]))) : var_8));
                        var_44 = (arr_45 [18] [18] [i_21] [20] [i_21 + 3]);
                    }
                }
            }

            for (int i_22 = 2; i_22 < 21;i_22 += 1)
            {
                var_45 = (((arr_58 [9] [2] [2]) ? (var_9 - var_2) : (arr_4 [i_0] [i_19])));
                arr_76 [6] [i_0] [4] = (((arr_71 [i_22] [i_22 + 3] [i_22] [i_0]) ? var_14 : (arr_27 [i_0] [i_22 + 3] [i_22 + 3])));
                arr_77 [i_22] [i_0] [i_0] = ((((var_9 ? (arr_66 [8]) : (arr_27 [i_0] [i_22 - 2] [i_19])))) ? (arr_50 [i_0] [i_19] [i_0]) : var_8);
                var_46 = (((arr_26 [i_0] [i_0]) ? (arr_25 [i_0]) : (arr_37 [i_0] [i_19] [i_19] [i_22 - 1])));
            }
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                var_47 ^= (arr_5 [16]);

                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {
                    var_48 = ((((var_15 ? (arr_65 [5] [i_24]) : (arr_58 [i_0] [i_19] [i_23])))) ? ((var_0 ? var_2 : (arr_80 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))) : (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    arr_82 [i_0] [i_23] [i_0] = arr_41 [i_24] [i_23];
                    arr_83 [17] [i_19] [11] [i_0] = ((var_16 ? (arr_40 [i_23] [i_23]) : var_11));
                }
                for (int i_25 = 2; i_25 < 23;i_25 += 1)
                {
                    var_49 = (min(var_49, (arr_85 [i_0] [i_19] [1] [i_25])));
                    var_50 |= var_15;
                    var_51 = (min(var_51, (arr_66 [i_0])));
                }
            }
        }
    }
    var_52 = (max(var_2, var_15));
    #pragma endscop
}
