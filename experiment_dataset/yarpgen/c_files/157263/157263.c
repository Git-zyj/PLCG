/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_11;
    var_15 = (((((var_5 ? ((var_1 ? var_9 : var_10)) : -var_1))) ? 31 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 += (((max((((arr_0 [i_0]) + (arr_0 [i_0]))), var_11)) * (arr_4 [i_1])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, (arr_6 [i_0] [i_1] [i_1] [1])));
                    var_18 = (~34);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 *= ((!(arr_10 [i_1] [i_4] [8] [i_3] [i_1] [i_1])));
                                var_20 = (min(var_20, ((((arr_1 [i_4]) ? (arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_0]) : -4953421632722894409)))));
                                arr_15 [i_0] [i_0] [i_3] [1] [i_0] [i_0] = var_9;
                                arr_16 [i_0] = (((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) >= (arr_14 [i_0] [i_1] [i_3] [i_1] [i_1] [i_0])));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_21 [i_0] [4] [i_7] [i_0] [i_0] = (arr_12 [21] [1] [1] [i_7]);
                            var_21 = arr_7 [i_0] [i_1] [i_6] [i_7];
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1] = (((arr_6 [i_0] [i_6] [i_0] [i_0]) ? (arr_6 [13] [i_1] [i_3] [i_6]) : (arr_6 [i_8] [5] [i_1] [i_0])));
                            var_22 = -35;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_23 = var_3;
                            var_24 = var_2;
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_25 = 34;
                            var_26 = 50;
                            arr_30 [i_10] [i_0] [i_3] [i_0] [i_0] = arr_7 [i_0] [i_0] [i_3] [i_0];
                        }
                        arr_31 [i_0] [i_6] [i_0] [i_6] = ((((((arr_11 [i_0] [11]) ? 54 : var_2))) ? -12288 : (var_10 - -1)));
                        var_27 = (arr_18 [i_0] [i_3] [i_3] [i_6]);
                        var_28 = arr_3 [i_0] [i_0] [i_3];
                        arr_32 [10] [i_0] [i_3] [i_6] = (arr_13 [i_3] [i_3] [i_1] [i_1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_35 [i_0] = ((2843388596 ? 1 : -16));
                        var_29 *= (((arr_14 [i_0] [i_0] [i_3] [i_3] [i_11] [i_11]) | (arr_9 [i_0] [i_1] [i_0])));
                        var_30 = (arr_5 [i_3] [i_11]);

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_31 = (min(var_31, (arr_33 [i_0] [i_1] [i_1])));
                            var_32 = (arr_14 [i_0] [i_0] [i_0] [10] [i_0] [i_0]);
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_33 = (min(var_33, (((-(arr_4 [i_3]))))));
                            var_34 = (arr_1 [i_11]);
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_44 [i_14] [i_0] [i_3] [i_0] [16] = (~-1374920324);
                            arr_45 [i_14] [i_0] [i_3] [i_0] [i_0] = (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])));
                            var_35 = 1;
                        }
                        var_36 = (((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_37 = (min(var_37, 0));
                    var_38 = ((((min(var_8, (((215 ? 215 : 130)))))) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_36 [i_0] [i_0] [i_15] [i_1] [i_15] [i_1] [i_1])));
                }
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_39 = (max(var_39, (min((((((((arr_8 [i_0] [i_1] [i_16] [i_16]) == var_5)))) / (arr_40 [i_0] [i_0] [i_16]))), (min((arr_3 [12] [i_16] [12]), var_2))))));

                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        arr_55 [i_0] [i_0] [i_0] = ((+(min((arr_6 [i_0] [i_1] [i_16] [i_17]), var_6))));
                        var_40 = ((!((!(!1)))));
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {
                        var_41 = (arr_23 [i_0] [5]);
                        arr_60 [i_0] [1] [i_1] [i_18] = (min((max((~15), var_1)), ((-8 ? -35 : 1))));
                    }
                    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                    {
                        var_42 += ((((((!var_2) ? (arr_33 [i_0] [i_1] [i_0]) : (max(-699639425, (arr_5 [i_1] [19])))))) * (arr_61 [i_16] [i_1] [i_16] [i_19])));
                        arr_63 [i_0] [i_0] = ((((((arr_26 [i_19] [i_16] [i_16] [i_1] [i_1] [i_0]) ? (arr_36 [i_19] [i_16] [10] [i_1] [i_0] [i_0] [i_0]) : (arr_36 [i_19] [i_16] [i_16] [3] [i_0] [i_0] [i_0])))) ? (arr_23 [i_16] [7]) : (arr_10 [i_0] [i_1] [i_0] [i_19] [i_19] [i_0])));
                        var_43 = ((~(~var_7)));
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 24;i_22 += 1)
                        {
                            {
                                var_44 = 13;
                                arr_71 [i_0] = (arr_43 [i_22] [i_0] [i_0] [i_0] [i_0] [i_22]);
                                var_45 *= (54 >= -7715791885871867426);
                                var_46 = (min(var_46, (((!(((var_11 ? (arr_20 [i_22] [i_22] [i_22] [i_22] [i_1] [16]) : var_7))))))));
                            }
                        }
                    }
                }
                var_47 = ((+(((arr_1 [i_1]) ? (arr_26 [i_0] [9] [i_1] [i_0] [i_1] [i_1]) : var_5))));

                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {
                    var_48 ^= (max(1, (!4)));
                    var_49 = var_0;
                    var_50 = (min(var_50, ((((arr_47 [i_1]) ? ((min(var_6, var_2))) : (((var_0 >= var_5) | (arr_8 [i_0] [i_0] [19] [i_23]))))))));
                    var_51 = ((((((max(35, (arr_9 [i_0] [i_1] [i_23])))))) && var_1));
                }
                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        arr_79 [i_0] [i_0] [i_0] [i_0] = max(((var_6 + ((((arr_7 [i_25] [i_24] [i_1] [11]) < (arr_58 [i_0] [i_0] [i_0] [i_24] [i_25])))))), ((~(1 < 121))));
                        arr_80 [13] [i_0] [i_0] [i_0] [i_0] = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 24;i_27 += 1)
                        {
                            {
                                var_52 = var_2;
                                var_53 = (arr_41 [i_24] [i_24]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_28 = 0; i_28 < 24;i_28 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 24;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 24;i_30 += 1)
                        {
                            {
                                arr_93 [i_0] [i_1] [i_28] [i_29] [i_30] = ((((1889147304 ? var_0 : var_10))) != ((var_8 % (arr_39 [i_0] [i_1] [i_1] [i_29]))));
                                var_54 = var_8;
                            }
                        }
                    }

                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        arr_96 [i_0] [i_0] [i_28] [i_31] = 81;
                        var_55 = var_6;
                    }
                    for (int i_32 = 0; i_32 < 24;i_32 += 1)
                    {
                        arr_99 [i_0] = (((arr_94 [i_0] [i_1]) ? var_5 : 1));
                        var_56 = (((!var_11) >> (var_4 < var_6)));
                        arr_100 [i_0] [i_0] [i_0] [i_28] [i_32] [i_32] = (((arr_3 [i_32] [i_0] [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_28] [i_0] [i_0])));
                    }
                    for (int i_33 = 0; i_33 < 24;i_33 += 1)
                    {
                        arr_104 [i_0] [i_1] [i_0] = (((arr_39 [i_1] [i_1] [i_1] [i_1]) ? var_11 : ((var_10 ? var_3 : var_7))));
                        var_57 ^= 57;
                    }
                    var_58 = (min(var_58, (arr_68 [i_0] [i_0] [i_0] [i_0])));
                    var_59 = ((arr_57 [i_28] [i_28] [i_1] [i_0] [i_0]) * -var_4);
                }
            }
        }
    }
    #pragma endscop
}
