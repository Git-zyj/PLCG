/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((var_2 == ((~((min(var_2, var_10))))))))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((((arr_5 [i_3] [i_2] [i_2 + 2]) ? (arr_5 [7] [i_2 + 1] [i_2 + 1]) : var_3))))));
                        arr_9 [i_0] [i_2] [i_2 + 2] [i_0] [i_2] [i_0] = (-(max(var_10, var_6)));
                        var_14 = ((var_2 / ((min(var_11, var_8)))));
                        arr_10 [i_2] [i_1] [i_1] [10] [i_1] [i_1] = ((-var_7 - ((var_7 ? var_5 : var_6))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = -var_2;
                        arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_0] [i_4] &= (((arr_2 [i_2 + 1] [i_2 - 1]) << (((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]) - 50))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_2] [i_5] [12] [i_2] [i_2] = ((arr_6 [i_2 + 1]) ? (min(31, (((var_9 - (arr_6 [i_0])))))) : (arr_3 [i_0] [i_5] [i_2]));
                            arr_20 [11] [i_1] [i_1] [i_0] [i_6] [i_2] = ((((~(!var_3)))) - (((min(37, (arr_7 [1]))) << (var_3 - 407018063))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_16 = ((~(min(var_3, var_11))));
                            var_17 = var_10;
                            arr_24 [3] [i_2] [i_2] = (((((2953897105 && (arr_2 [i_2 - 1] [i_2 - 1])))) - var_1));
                            arr_25 [i_1] [i_1] [i_2] = (-var_9 ? (arr_11 [i_0] [i_7] [i_0] [i_0] [i_2 - 1] [4]) : 4294967265);
                        }
                        arr_26 [i_0] [i_1] [1] |= (((((max(1, 233)) ? (arr_15 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]) : (var_8 + var_9)))));
                        arr_27 [i_2] [i_2] [i_2] [i_5] = var_6;
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (((((((arr_18 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 - 1]) ^ (arr_18 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))) <= var_11)))));
                            arr_34 [12] [13] [i_2] [i_8] [i_2] [i_9] = arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2];
                            var_19 = min(-40, (((((max(var_9, var_7))) || (1 >> var_6)))));
                            var_20 = max((((arr_4 [i_2 - 1]) <= (!1535916483))), (!32505856));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, (-var_7 + var_5)));
                            arr_37 [i_2] [i_2 + 1] [i_2 + 1] [i_1] [i_2] = arr_6 [i_8];
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_22 = (min(var_2, ((((((min(var_5, (arr_15 [i_1] [i_1] [i_1] [1])))) + 2147483647)) << (((~var_7) - 611251938))))));
                            var_23 |= var_2;
                            var_24 = (min(var_24, 24));
                        }

                        for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_2] [i_1] [i_2] [11] [i_12] = (~var_6);
                            arr_44 [14] [i_1] [i_1] [i_0] [i_12] [i_2] [i_1] = 2759050838;
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (((var_10 ? var_0 : (arr_23 [i_0] [i_1] [1] [i_8] [i_0]))))));
                            arr_48 [i_2 + 1] [i_2] = 67076096;
                            var_26 = 1;
                            var_27 = ((-(!1)));
                        }
                        arr_49 [i_2] = (((8388607 / var_8) >= ((max(var_10, var_8)))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_55 [i_0] |= ((~((((arr_40 [i_14 + 3] [i_2 + 1] [i_2 + 1] [7] [i_0] [i_0]) || var_5)))));
                                var_28 = (min(var_3, ((-((241 / (arr_47 [i_0])))))));
                                arr_56 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = 47;
                                arr_57 [i_15] [i_2] [i_2] [i_2] [i_0] = ((0 ? (!1627286798) : 126));
                            }
                        }
                    }
                }
                for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    arr_60 [i_0] [i_1] [i_16] = var_1;
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_29 = 31;
                                var_30 &= ((((((max((arr_36 [i_0] [i_0] [i_0] [9] [i_18] [i_17]), var_1))) || ((max(1, var_11))))) || var_8));
                                arr_65 [i_17] [i_17] [i_17] = ((~((-(arr_17 [i_18 - 2] [i_17] [i_16 + 2])))));
                            }
                        }
                    }
                    arr_66 [i_0] [i_0] [i_0] = (~1);
                }
                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    arr_69 [i_19] = var_6;
                    arr_70 [i_0] [i_1] [i_19] = var_11;
                    var_31 = (min(var_31, (((~((~((117 ? 11 : var_1)))))))));
                    var_32 = ((~((-(-9223372036854775807 - 1)))));
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        arr_79 [i_0] [i_1] [i_20] [i_1] [i_20] = var_3;
                        var_33 += var_8;

                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 16;i_22 += 1)
                        {
                            var_34 = (arr_73 [i_20] [i_20] [i_20]);
                            arr_82 [i_20] [i_1] [i_21] [i_21] [i_21] = ((-(arr_7 [i_22 + 2])));
                            arr_83 [i_20] [13] [13] [i_21] [13] [13] [13] = var_0;
                            var_35 = (~var_10);
                            arr_84 [i_0] [i_20] [i_21] [i_20] [i_21] [i_20] [i_1] = (((var_3 ? var_11 : var_10)));
                        }

                        for (int i_23 = 0; i_23 < 18;i_23 += 1)
                        {
                            var_36 = ((arr_77 [i_20]) << (var_5 - 77));
                            arr_88 [i_20] [i_20] [i_20] [i_20] [i_20] [i_1] = max((arr_3 [1] [1] [1]), 18);
                            var_37 = (max(var_37, (((-(max((arr_86 [i_0] [i_1] [i_20] [i_20] [i_21] [i_23]), var_1)))))));
                            var_38 ^= ((~(min(var_2, 2447726171))));
                            var_39 = var_10;
                        }
                        for (int i_24 = 1; i_24 < 16;i_24 += 1)
                        {
                            var_40 = ((~(arr_67 [i_21] [i_20] [2] [i_21])));
                            arr_93 [i_0] [i_0] [i_20] [i_21] [i_20] = ((~(arr_29 [i_24 - 1] [i_20])));
                        }
                    }
                    /* vectorizable */
                    for (int i_25 = 1; i_25 < 17;i_25 += 1)
                    {
                        var_41 = ((8388611 ? var_8 : var_0));

                        for (int i_26 = 3; i_26 < 17;i_26 += 1)
                        {
                            var_42 = var_7;
                            var_43 &= ((-var_6 ? var_3 : -8388634));
                        }
                        var_44 = (max(var_44, (((var_4 ? var_0 : ((var_5 ? var_6 : var_2)))))));
                        arr_98 [i_20] = (!-3649120900);
                        var_45 = (min(var_45, var_1));
                    }
                    for (int i_27 = 2; i_27 < 16;i_27 += 1)
                    {
                        var_46 = 34;
                        var_47 = (arr_53 [i_27] [i_27] [i_27 + 1] [i_27 + 1]);
                        arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (((max(var_0, (1 - var_10))) - (var_6 * var_9)));
                        var_48 = (((var_4 < var_2) > 1));
                    }
                    arr_102 [i_0] [i_20] [i_20] = ((((min((max(8388607, 1)), var_9))) ? (((((var_1 ? (arr_42 [15] [i_1] [13] [i_20] [i_1]) : var_5)) <= -var_2))) : var_2));
                    var_49 = min(var_6, (min((arr_23 [i_20] [i_20] [i_20] [i_1] [i_1]), var_2)));
                }
            }
        }
    }
    var_50 = var_5;
    #pragma endscop
}
