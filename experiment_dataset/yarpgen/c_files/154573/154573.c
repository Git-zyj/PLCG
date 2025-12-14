/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((-((max(var_5, var_8))))), (min(((max(var_8, var_1))), var_0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_17 = (((max(((var_10 ? var_5 : var_15)), var_10)) >> (((~65525) + 65556))));
        var_18 -= (((~var_0) ? (((((var_6 ? (arr_0 [i_0]) : var_5)) <= (((arr_1 [i_0]) ? var_2 : var_3))))) : var_7));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = min(61452, (max(0, 707096154)));
        var_19 = (max(65525, 707096143));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = arr_6 [i_2] [i_2];
        arr_12 [i_2] = (max((arr_0 [i_2]), ((max(var_12, (arr_10 [1]))))));
        var_20 ^= max(((!((max(var_11, var_3))))), (((-(arr_1 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_17 [i_2] = (arr_8 [i_3]);
                    arr_18 [i_2] [i_3] [i_2] = (max((((((~(arr_10 [i_4])))) ? (~var_2) : var_7)), var_13));
                    arr_19 [i_2] [i_3] [i_3] [i_3] = min(((min(var_11, var_7))), (arr_16 [i_2 - 1]));
                    var_21 = var_12;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_22 = ((-((((((arr_22 [i_5]) * (arr_0 [i_5])))) ? (arr_30 [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) : (((arr_4 [i_5]) / var_14))))));
                            var_23 += var_1;
                        }
                        arr_33 [i_8] [i_8] |= max(((min(var_12, var_13))), -var_11);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_36 [i_5 - 1] [i_5] [i_5] [1] [i_5] [i_5] = var_14;
                        var_24 = var_12;
                        arr_37 [i_5] [i_5] [i_5] [i_6] [i_5] |= (max(((max((max(var_7, var_10)), var_14))), ((707096143 ? 707096143 : 707096158))));
                    }

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_41 [i_5] [i_7] [i_5] = var_2;
                        var_25 += var_14;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_26 = (~0);
                        var_27 ^= (((((arr_16 [i_5]) ? var_6 : var_2))) ? (arr_32 [i_12 - 1]) : (arr_28 [i_5] [i_6] [i_7] [i_6] [i_12]));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_28 = (min(var_28, (arr_8 [i_5 + 2])));
            arr_47 [16] &= var_13;
            arr_48 [i_5] = (arr_10 [i_5 + 1]);
            var_29 = arr_25 [i_5] [i_13];
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                arr_56 [i_15] [i_5] [i_5] [i_5] = ((max(593, -707096153)));
                var_30 = var_1;
                var_31 -= (15330 | 1);
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    {
                        var_32 = (max(-var_5, (((min(var_0, var_4))))));
                        var_33 = (max((((max(var_7, var_12)) ? (arr_58 [i_5] [4]) : ((var_9 ? var_9 : (arr_24 [i_14] [i_16] [i_16]))))), (max((max((arr_1 [i_16]), (arr_58 [i_5] [3]))), (max(var_13, var_3))))));
                        var_34 = (min(var_34, (((var_12 ? var_7 : ((~(~var_3))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        arr_66 [i_5] [i_5] = ((~(max(-var_13, ((~(arr_1 [i_5])))))));
                        arr_67 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_5] = ((((+(max((arr_1 [i_5]), (arr_62 [i_5] [i_14] [i_18] [i_19]))))) + var_5));
                        var_35 = var_11;
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {

            for (int i_21 = 2; i_21 < 14;i_21 += 1)
            {
                arr_74 [i_21] [8] [i_5] &= (max(var_10, var_14));
                arr_75 [i_5] [i_20] [i_20] [i_20] = (min((min(((-(arr_43 [i_5 + 1] [i_5 + 1] [i_20] [i_21] [i_21]))), ((min(var_7, var_1))))), var_0));
            }
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                arr_79 [i_5] [i_5] [i_5] = max(var_13, -813513591);
                arr_80 [i_5] [2] [i_20] [i_22] = (min(((var_14 >> (var_13 - 54295))), (~var_3)));
            }
            for (int i_23 = 1; i_23 < 16;i_23 += 1)
            {
                arr_84 [i_5 + 2] [i_20] [i_5] [i_23 + 1] = (max(((~(arr_6 [i_5] [i_5]))), ((+((min((arr_78 [i_5] [i_20] [i_5] [1]), (arr_52 [i_5] [i_5] [i_5]))))))));
                var_36 = arr_60 [i_5] [i_20] [i_23] [i_23] [i_23];
            }
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                var_37 = ((((arr_77 [i_24] [i_5 + 2] [i_5 + 2]) * var_7)));
                arr_88 [i_5] [i_5 + 2] [i_5] = ((((!(arr_59 [i_5])) ? (arr_25 [i_5] [i_24]) : ((((arr_3 [i_5]) < var_15))))));
                arr_89 [i_5] [i_5] [i_24] = (max((min((max(707096138, 1)), -var_7)), (max(((var_14 ? var_10 : (arr_4 [i_5]))), (var_4 / var_3)))));
            }

            for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
            {
                arr_92 [i_5] [i_5] [i_25] = var_11;
                arr_93 [i_5] [i_5] [i_25] [i_5] = var_7;
                var_38 = -var_4;
            }
            for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
            {
                var_39 ^= (((-(arr_60 [i_5] [2] [i_26] [i_20] [i_20]))));
                var_40 = (max((arr_53 [i_26] [15] [i_5]), ((var_3 ? var_14 : ((var_10 ? var_0 : var_14))))));
                var_41 ^= max((min(((~(arr_57 [i_5 + 2] [i_5 + 2]))), var_15)), ((~(arr_52 [i_5 - 1] [i_20] [i_26]))));
                arr_97 [i_5] [i_20] [i_20] [i_5] = (!-var_11);
            }
            for (int i_27 = 0; i_27 < 17;i_27 += 1)
            {
                var_42 = ((arr_30 [9] [i_20] [i_20] [i_5] [i_5]) != 1);
                var_43 |= (((((~(var_10 || var_15)))) ? var_8 : ((max((max(var_7, var_2)), (arr_77 [i_5 - 2] [i_27] [16]))))));
                arr_100 [i_5] [i_20] [i_5 - 2] [i_5] = arr_99 [i_5] [i_5] [i_20] [i_27];

                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_107 [i_5] [i_5] [i_5] = max((((arr_39 [i_5] [i_5] [i_27] [16] [1]) ? ((min(var_14, var_13))) : (arr_68 [i_5]))), var_2);
                        var_44 -= ((((min(var_0, ((var_4 ? (arr_91 [i_5] [i_20]) : var_7))))) ? ((50205 ? 9 : 1)) : var_6));
                        arr_108 [i_5] [i_5] [i_5] [i_28] [i_5] [i_20] [i_20] = arr_44 [i_5] [i_5];
                    }
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        var_45 ^= (arr_0 [i_5]);
                        arr_113 [i_5] [i_5] [i_5] [i_5] [i_5] = min((min(15909, 0)), 15330);
                        var_46 = ((max(var_8, (arr_9 [i_5]))));
                    }
                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 17;i_31 += 1)
                    {
                        var_47 *= (-var_11 % (!var_10));
                        arr_116 [i_5] [i_5] [i_5] [i_5] = (var_5 > var_10);
                    }
                    arr_117 [4] [4] [i_27] [i_5] = (((max(var_6, var_4))) >> (max((arr_91 [i_5] [i_5 - 2]), var_14)));
                }
                /* vectorizable */
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {

                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        arr_123 [i_5] [i_5] [i_5] [i_5] = var_9;
                        arr_124 [i_5] [i_5] = var_9;
                        arr_125 [i_5] [i_20] = (arr_22 [i_5]);
                        var_48 = (arr_103 [i_5 - 2] [i_27] [i_5] [i_33]);
                        arr_126 [0] [i_20] [i_5] = var_8;
                    }
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_49 = (1 ? -1919783264 : 1);
                        var_50 ^= -var_0;
                        arr_129 [0] [i_5] [14] [i_32] = (((arr_10 [i_34]) & (arr_5 [i_32])));
                    }
                    for (int i_35 = 0; i_35 < 1;i_35 += 1) /* same iter space */
                    {
                        arr_132 [1] [i_20] [i_5] [i_27] [1] [i_35] = (arr_120 [i_5] [i_5] [i_5]);
                        arr_133 [i_5] [i_20] [i_27] [i_20] [i_35] [i_32] [i_5] = (((arr_130 [12] [i_5] [i_5 - 1] [i_5 - 1] [i_5]) ? (arr_130 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 1] [13]) : var_0));
                        arr_134 [i_5] [i_5] [i_20] [i_27] [i_27] [i_20] [i_35] = (arr_44 [i_5] [i_5]);
                    }
                    for (int i_36 = 0; i_36 < 1;i_36 += 1) /* same iter space */
                    {
                        arr_138 [i_5] [i_5 + 2] [i_5] [i_5 - 1] [i_5] = var_14;
                        var_51 = (arr_65 [i_5 + 2] [i_20] [i_20] [i_5 + 2] [i_20]);
                        var_52 = (max(var_52, (((((-(arr_4 [1])))) ? var_3 : var_14))));
                        var_53 *= (var_11 & -var_3);
                        var_54 = ((var_4 ? var_5 : var_0));
                    }
                    arr_139 [i_5] = (-(arr_0 [i_5 + 2]));
                }
                /* vectorizable */
                for (int i_37 = 0; i_37 < 0;i_37 += 1)
                {
                    arr_142 [i_5] [i_27] [0] [i_27] |= (arr_98 [i_5] [i_5 + 1] [i_5 + 1] [i_5]);
                    var_55 = var_3;
                }
                arr_143 [i_5] [i_5 + 2] [i_27] [i_5] = var_7;
            }
        }
    }
    var_56 = -var_1;
    #pragma endscop
}
