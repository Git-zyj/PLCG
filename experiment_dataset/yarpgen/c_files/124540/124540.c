/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_14 = ((var_0 ? (arr_2 [i_1] [i_0] [i_1]) : (arr_2 [i_1] [4] [i_1])));

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = (~var_12);
                            var_15 |= (arr_11 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4]);
                            arr_16 [8] [3] [i_1] [i_3] [i_1] = ((((var_10 ? (arr_12 [i_1] [i_1] [i_2] [i_1] [i_0]) : (arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] [i_1]))) ^ var_12));
                            arr_17 [i_1] = (arr_0 [i_0]);
                        }
                    }
                }
                var_16 = (min(var_16, var_12));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_17 = ((((arr_9 [i_0] [i_0] [i_1] [i_5]) + 2147483647)) >> var_12);
                arr_21 [i_1] = (((((var_6 | (arr_12 [i_0] [i_0] [10] [i_0] [i_0])))) ? (arr_14 [i_0] [i_0] [i_0] [2] [i_0] [i_1]) : (arr_20 [i_1] [i_1] [i_0])));
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_18 += ((!(arr_27 [7] [i_1] [i_6] [i_6] [i_6])));
                    var_19 = ((var_4 ? ((-(arr_24 [i_0] [8] [i_1] [i_0]))) : var_1));
                    var_20 = (arr_3 [i_7] [i_0] [i_0]);
                }
                var_21 = ((((!(arr_11 [i_0] [i_1] [10] [i_6] [i_1] [i_1])))) > var_2);
                var_22 = (arr_24 [i_0] [i_1] [i_1] [i_6]);
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_23 = (((arr_22 [i_1] [i_8]) ? (arr_18 [i_8]) : (arr_22 [i_0] [i_0])));
                arr_30 [i_0] [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
            var_24 = ((var_8 ? (arr_18 [i_1]) : var_10));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_25 = ((((var_0 ? (arr_10 [6]) : (arr_11 [i_0] [2] [2] [6] [i_0] [i_0]))) * (arr_20 [i_0] [i_0] [i_9])));

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_26 = var_2;
                arr_37 [i_0] [i_9] [6] [i_9] = (var_2 ? ((0 ? 70 : var_6)) : (arr_31 [10] [10]));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_27 = (((!var_4) ? -var_12 : var_11));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_28 = (min(var_28, var_8));
                            arr_44 [i_9] [i_13] &= ((var_0 ? var_2 : (arr_19 [i_12] [i_11])));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
            {
                arr_48 [4] [4] [i_14] = (arr_29 [4] [i_9] [4]);
                var_29 = var_10;
                arr_49 [i_0] [1] [i_14] [i_14] = arr_27 [i_0] [i_9] [i_9] [i_0] [i_0];
                var_30 = var_1;
                arr_50 [i_14] [i_0] [i_0] [i_0] = ((arr_40 [i_0] [i_9] [i_9] [2] [i_14] [i_14]) ? (arr_10 [6]) : (arr_39 [i_0] [i_0] [i_0]));
            }
            var_31 = var_5;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {
                        var_32 |= ((var_3 ? var_3 : ((-(arr_3 [i_15] [i_16] [i_15])))));
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                        var_33 |= var_7;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    {
                        arr_65 [i_19] [i_18] [i_15] [i_15] [i_15] [1] &= (arr_36 [i_0] [i_18] [i_18]);
                        arr_66 [i_0] [i_15] [i_18] [i_19] [i_19] |= (arr_47 [i_0] [i_18] [i_19]);
                        var_34 += (((arr_40 [i_0] [i_0] [i_15] [i_19] [i_15] [i_19]) ? (arr_9 [4] [4] [4] [i_19]) : var_6));
                        arr_67 [1] [i_18] [i_19] = (arr_55 [i_0] [1] [i_18] [i_19]);
                        var_35 = (max(var_35, (arr_59 [i_0] [i_15] [i_18] [i_0])));
                    }
                }
            }
        }
        var_36 = (min(var_36, (((~(arr_25 [i_0] [i_0] [i_0] [i_0]))))));
        var_37 = (min(var_37, (arr_46 [0] [i_0] [i_0] [i_0])));
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {
                        arr_79 [i_22] = ((~(arr_78 [i_22] [7] [i_21] [i_22])));
                        arr_80 [i_21] [i_21] [i_22] [i_21] = (arr_60 [i_20] [i_21] [i_20]);
                        var_38 = (((((arr_54 [i_21] [i_21] [i_21] [i_20]) ? (((var_3 < (arr_0 [i_22])))) : var_5)) & (arr_27 [i_20] [i_20] [i_20] [i_22] [6])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                {
                    arr_87 [i_20] [i_24] [i_20] = var_10;
                    var_39 = (min(var_39, (arr_13 [i_25] [i_25] [i_25] [i_25] [i_24] [i_25] [i_25])));
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 12;i_27 += 1)
                        {
                            {
                                arr_94 [i_20] [i_24] [i_20] [i_26] [2] = (~var_7);
                                var_40 = (~var_0);
                                var_41 *= (((((var_2 ? var_5 : ((min(var_12, var_7)))))) ^ (max(-var_9, var_3))));
                                var_42 |= arr_60 [i_20] [i_20] [i_20];
                            }
                        }
                    }
                    var_43 += arr_84 [10];
                }
            }
        }
        var_44 = (((((arr_63 [i_20] [i_20] [i_20]) ? (arr_84 [i_20]) : (min((arr_10 [8]), var_5)))) ^ var_4));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 12;i_28 += 1) /* same iter space */
    {
        var_45 = (min(var_45, var_5));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 12;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 12;i_30 += 1)
            {
                {
                    var_46 = (arr_41 [i_28] [i_30]);
                    var_47 = ((var_12 ? (arr_82 [i_30]) : var_12));
                }
            }
        }
        var_48 *= (arr_97 [i_28] [i_28] [i_28]);
        arr_101 [6] [6] &= (arr_91 [i_28] [0] [i_28]);
    }
    var_49 = (min(((~(var_2 | var_6))), var_5));
    #pragma endscop
}
