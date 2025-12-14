/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, ((((var_12 ? var_4 : var_11))))));
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_21 += var_5;
        var_22 = var_17;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_17 [i_2] = var_8;
                        arr_18 [i_2] [i_3] [i_2] [i_2] = (((-(arr_14 [10] [i_2]))));
                        var_23 = (max(var_23, var_4));
                        var_24 = (max(var_24, var_16));
                        arr_19 [i_1] [i_1] [i_4 + 2] [i_2] = (min(((((var_1 ? var_12 : var_7)))), ((((max((arr_2 [i_1]), (arr_16 [i_2] [i_3] [i_2] [i_2])))) ? ((var_18 ? var_15 : (arr_14 [i_1] [i_2]))) : (((var_10 ? var_7 : var_12)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_24 [i_1] [i_5] [i_6] = (max((((var_15 ? var_17 : var_4))), var_0));
                    var_25 = (max(var_25, (arr_13 [i_1] [i_1] [i_1])));
                    var_26 = (max((((+(((arr_15 [1] [i_1]) ? var_7 : (arr_22 [i_1] [2] [i_1] [i_1])))))), var_11));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_27 |= ((((((1945380516 ? -1167035761 : 2143510024)))) ? (max((((arr_16 [i_1] [i_1] [i_7] [i_7]) ? var_17 : var_2)), var_7)) : ((((((-(arr_8 [i_1])))) ? var_17 : var_13)))));
                                arr_30 [i_1] [i_7] [i_1] [3] [i_8] [i_7] = var_9;
                                arr_31 [4] [4] [i_6] [i_7] [i_7] [i_8] [i_8 - 1] = var_1;
                                arr_32 [i_5] [i_5] [i_7] [i_7] [i_8] [i_8 - 1] = var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_28 = var_10;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                {
                    var_29 = ((274877906816 ? (arr_39 [15]) : ((536870896 ? 1167035734 : 2143510024))));
                    var_30 = (max(var_30, (((-1167035734 ? -8645403521938882065 : ((var_6 ? 58315 : var_2)))))));
                }
            }
        }
        arr_42 [i_9 + 1] = var_2;

        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            var_31 *= var_18;
            arr_46 [i_9 - 1] [i_9] [i_9 + 1] = var_18;
            arr_47 [1] [1] [i_9 - 1] = var_4;
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_32 = ((var_13 ? (arr_35 [i_15 + 1]) : var_18));
                            var_33 = (max(var_33, ((((arr_28 [i_13] [i_13] [i_13] [i_15] [i_16] [i_16] [9]) ? ((var_4 ? var_6 : var_8)) : (arr_57 [i_16]))))));
                            arr_62 [i_13] [i_14] [i_15 + 1] [i_16] [i_14] &= ((var_16 ? (((var_16 ? var_5 : var_6))) : ((var_18 ? var_15 : var_18))));
                            arr_63 [i_13] [9] [i_17] [i_15] = ((arr_15 [i_13] [i_13]) ? var_13 : (arr_58 [i_17 + 2] [6] [i_15] [i_14]));
                            arr_64 [i_17] [1] = ((var_4 ? (~var_15) : ((var_16 ? (arr_20 [i_15] [i_15 - 1]) : var_11))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 9;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        arr_70 [i_13] [12] [i_18] [i_19] &= (((-65 ? 7221 : 58315)));
                        arr_71 [i_18] = var_8;

                        for (int i_20 = 2; i_20 < 12;i_20 += 1)
                        {
                            arr_74 [i_13] [i_18] [i_18] [i_13] [i_13] [i_18] [i_13] = (((((var_15 ? var_7 : (arr_25 [i_18])))) ? (~var_6) : var_9));
                            arr_75 [i_13] [7] [i_18 - 2] [i_19] [i_18] = (arr_61 [i_13] [i_13] [9] [i_19] [i_20]);
                            arr_76 [i_18] [i_19] [i_18] [i_14] [i_18] = (arr_60 [i_18] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                        {
                            var_34 += (arr_1 [i_13]);
                            var_35 |= ((((arr_11 [i_13] [i_21] [i_18]) ? var_15 : (arr_57 [i_13]))));
                            arr_79 [i_18] = var_9;
                            arr_80 [i_13] [i_13] [i_21] [i_19] |= var_3;
                        }
                        for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
                        {
                            var_36 *= var_11;
                            arr_83 [i_13] [i_13] [i_18] [i_18] [i_13] [i_18] = (arr_28 [i_13] [i_13] [i_14] [7] [i_19] [i_22] [i_22]);
                            arr_84 [i_22] [i_18] [i_18 - 2] [i_18] [i_13] = var_9;
                            var_37 += var_15;
                        }
                        for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
                        {
                            arr_87 [i_23] [10] |= (((((17 ? 241 : 4988417469823705113))) ? var_7 : ((var_16 ? var_16 : (arr_16 [i_23] [i_23] [i_19] [i_19])))));
                            arr_88 [0] [i_14] [i_18] [i_23] [i_23] &= 7222;
                            var_38 = var_2;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    {
                        var_39 = -18628;
                        var_40 = var_16;
                    }
                }
            }
            var_41 = (min(var_41, (arr_8 [i_13])));
            var_42 = (max(var_42, (((var_3 ? ((var_17 ? var_17 : var_7)) : var_3)))));
        }
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 13;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                {
                    var_43 = var_18;
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        for (int i_29 = 1; i_29 < 10;i_29 += 1)
                        {
                            {
                                arr_107 [i_13] [1] [i_13] [i_28] [4] = var_16;
                                arr_108 [i_13] [i_26] [i_27] [i_28] [i_29] [i_29 + 3] = (-(arr_105 [i_13] [i_13] [i_26] [i_27] [i_27] [i_27]));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_30 = 1; i_30 < 12;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 13;i_31 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 13;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 13;i_33 += 1)
                        {
                            {
                                arr_119 [i_30] [i_31] [i_33] = var_9;
                                arr_120 [i_30] = (((var_7 ? (arr_0 [i_13] [i_13]) : (arr_105 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))));
                                arr_121 [i_30] [i_31] [i_32] [i_33] = var_9;
                                arr_122 [i_13] [i_33] [i_13] [i_33] [i_33] &= var_18;
                            }
                        }
                    }

                    for (int i_34 = 0; i_34 < 13;i_34 += 1)
                    {
                        arr_125 [i_13] [i_13] [i_13] [0] [i_13] [8] = (((((var_5 ? (arr_92 [i_13] [3] [i_31] [i_34]) : var_8))) ? (((arr_12 [i_13] [i_30] [i_31] [i_13]) ? var_1 : var_8)) : (arr_93 [i_13])));
                        var_44 = (arr_50 [i_13]);
                        var_45 = (min(var_45, (((-var_12 ? var_13 : var_17)))));
                    }
                    var_46 += ((var_7 ? var_9 : var_9));
                }
            }
        }
        arr_126 [i_13] |= ((var_0 ? ((var_0 ? var_4 : 1073741824)) : (arr_37 [2] [16] [2])));
        arr_127 [i_13] = ((((arr_5 [i_13]) ? var_11 : var_16)));
    }
    #pragma endscop
}
