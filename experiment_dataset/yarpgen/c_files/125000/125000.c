/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_9;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_18 = (!var_0);
                            var_19 = ((var_2 - ((666 ? 13398 : 21))));
                        }

                        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = var_17;
                            var_20 = (max(var_20, (((!((!((min(var_9, var_7))))))))));
                            arr_19 [i_5 - 3] [i_3] [i_2] [i_0] [5] [i_0] [i_0] = (min(((max((min(var_6, var_1)), (max(var_6, var_10))))), ((((max(var_4, var_12))) ? var_10 : ((max(var_15, var_12)))))));
                            arr_20 [12] [i_0] [i_2] [7] [i_5] [i_2] = (max((((-((min(var_12, var_0)))))), var_4));
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = (max((max(65519, 30720)), 0));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_21 = (var_0 ^ var_7);
                            arr_24 [i_0] [i_0] = -var_13;
                        }
                    }
                }
            }
            var_22 = (min(((max((((-127 - 1) ? 65528 : 52314)), var_1))), (min(-var_5, (min(var_4, var_15))))));
            var_23 = (min(((((max(21, 10828))))), (max(var_15, var_9))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_24 = ((!(((var_1 ? var_11 : var_2)))));

                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_25 = var_15;
                        arr_33 [i_0] [i_1] [i_1] [i_7] [10] [i_9] = ((var_13 ? var_16 : var_5));
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (!var_17)));
                        var_27 = (min(var_27, (!var_2)));
                        arr_36 [i_0] = ((var_7 ? var_6 : var_9));
                        var_28 = (~var_13);
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_41 [i_0 + 1] [i_0] [i_7] [i_8] [i_11] = (!var_12);
                        var_29 = (min(var_29, (((var_1 ? var_2 : var_5)))));
                        arr_42 [i_0] [i_1] [i_7] [i_0] [i_8] [i_8] [i_11] = -var_0;
                        var_30 = (max(var_30, (((!(((var_8 ? var_8 : var_6))))))));
                        var_31 ^= (var_7 ? var_9 : var_16);
                    }
                    var_32 ^= (~var_10);
                    var_33 = (~var_3);
                    var_34 ^= ((var_9 ? var_4 : var_3));
                }
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        arr_49 [i_0] [i_0] [i_7] [i_12] [9] [i_13] = var_17;
                        arr_50 [i_0] [i_0] [i_12] = (~var_2);
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [3] [i_0] [6] [i_12] [i_14] = -var_2;
                        var_35 &= ((var_17 ? var_3 : var_1));
                        var_36 = ((var_0 ? var_7 : var_3));
                        var_37 = (!var_16);
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_38 = (max(var_38, (((var_4 ? var_14 : var_16)))));
                        var_39 = (min(var_39, (((var_17 ? var_15 : var_16)))));
                    }
                    arr_59 [i_0] [i_0] = ((var_9 ? var_0 : var_11));
                    arr_60 [i_0] [i_7] &= (~5792);
                    var_40 = ((37525 << (21 - 16)));
                }
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_41 = (min(var_41, 50688));
                    arr_65 [i_0] [i_16] = ((var_2 ? var_11 : var_1));
                }
                arr_66 [i_0] [9] = ((!(var_13 - var_5)));

                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    var_42 = (min(var_42, var_5));

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_43 *= ((var_9 ? var_2 : var_1));
                        arr_74 [i_0] [3] [i_7] [i_7] [i_7] = (~4155063107);
                    }
                }
                for (int i_19 = 1; i_19 < 11;i_19 += 1)
                {
                    var_44 += ((-var_2 ? (((var_3 ? var_14 : var_1))) : var_4));
                    arr_78 [2] [i_0] [i_1 + 2] [i_1 - 3] [i_0] [i_0] = ((var_9 ? var_12 : var_12));
                }
                arr_79 [i_0] [i_1] [i_0] = var_8;
            }
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            arr_83 [i_0] = (max(((min(var_11, (min(var_10, var_7))))), ((-(max(var_14, var_9))))));

            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    var_45 = (max(((min(var_7, var_2))), -var_6));
                    var_46 = ((-(max(var_14, (max(var_4, var_1))))));
                    var_47 &= ((~((min(-6851, 23258)))));
                }
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    arr_92 [i_0] [i_20] [i_21] [i_0] [i_23] = max(((max(var_7, var_3))), (min(-var_3, (max(var_9, var_17)))));
                    var_48 = (max(((15 ? -5792 : 0)), -var_12));
                }
                arr_93 [i_0 - 1] [6] [i_21] [i_21] |= (((((max(var_12, var_12)))) & (max(2119547730, 4294443008))));
                var_49 ^= ((!((min(var_8, var_7)))));
                var_50 = (max(((max(-4096, 4973))), var_16));

                for (int i_24 = 1; i_24 < 12;i_24 += 1)
                {
                    arr_96 [i_0] [i_20] [i_21] [i_24 + 2] = (((37411 <= 5541) ? ((var_12 ? var_10 : var_17)) : ((~((min(var_6, var_15)))))));
                    var_51 = min((min(var_14, var_6)), (min(var_7, var_2)));
                }
                /* vectorizable */
                for (int i_25 = 3; i_25 < 12;i_25 += 1)
                {

                    for (int i_26 = 1; i_26 < 12;i_26 += 1)
                    {
                        var_52 = (min(var_52, var_2));
                        arr_101 [i_0 + 3] [i_0 + 1] [i_0] [i_0] = ((var_4 ? (!var_3) : var_8));
                        arr_102 [i_0] [i_20] [13] [i_25] [i_26] [i_25] [i_26] = ((var_12 ? var_17 : var_3));
                    }

                    for (int i_27 = 2; i_27 < 12;i_27 += 1)
                    {
                        var_53 = ((var_4 == (~var_13)));
                        var_54 = (min(var_54, var_7));
                    }
                }
            }
            /* vectorizable */
            for (int i_28 = 2; i_28 < 12;i_28 += 1)
            {
                var_55 = ((var_2 ? var_7 : var_3));
                var_56 -= ((var_5 ? var_5 : (~var_15)));

                for (int i_29 = 0; i_29 < 14;i_29 += 1)
                {

                    for (int i_30 = 1; i_30 < 12;i_30 += 1)
                    {
                        var_57 = ((var_6 ? var_17 : var_6));
                        arr_112 [i_0] [4] [i_20] [i_28 + 1] [i_29] [i_29] [i_30] = var_13;
                    }

                    for (int i_31 = 1; i_31 < 12;i_31 += 1)
                    {
                        var_58 -= (!var_14);
                        arr_117 [i_0 + 3] [i_0] [i_0 + 2] [i_0] = -var_5;
                        var_59 = var_10;
                        var_60 = (((!var_13) ? ((var_8 ? var_6 : var_2)) : var_14));
                    }
                    for (int i_32 = 0; i_32 < 14;i_32 += 1)
                    {
                        arr_120 [i_0] = -var_4;
                        arr_121 [i_32] [i_29] [i_0] [i_28] [i_0] [i_20] [8] = ((var_11 ? var_6 : var_7));
                        var_61 ^= -var_17;
                        arr_122 [i_0] = (!var_3);
                    }
                    arr_123 [i_0 - 1] [i_20] [i_28 + 1] [i_0] [i_0] = (var_1 ? var_5 : var_6);
                    arr_124 [i_0] [i_0] = (-var_9 + (!var_11));
                    var_62 *= (var_16 || var_8);
                }
                for (int i_33 = 0; i_33 < 14;i_33 += 1)
                {
                    var_63 = (max(var_63, ((((var_6 ^ var_17) << (var_3 - 31))))));
                    var_64 *= ((var_13 ? var_17 : var_2));
                }
            }
            arr_127 [i_0] [8] = (min(((min(var_16, var_8))), (min(var_14, ((var_6 ? var_13 : var_8))))));
            /* LoopNest 3 */
            for (int i_34 = 0; i_34 < 14;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 14;i_35 += 1)
                {
                    for (int i_36 = 3; i_36 < 13;i_36 += 1)
                    {
                        {
                            arr_135 [i_0] [i_20] [i_34] [i_35] [i_36] = (!-28916);
                            arr_136 [i_35] [i_0] = (min(((max(var_2, 72))), (min(var_2, var_9))));
                        }
                    }
                }
            }
        }
        for (int i_37 = 0; i_37 < 14;i_37 += 1)
        {
            /* LoopNest 3 */
            for (int i_38 = 2; i_38 < 13;i_38 += 1)
            {
                for (int i_39 = 2; i_39 < 12;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 14;i_40 += 1)
                    {
                        {
                            var_65 = ((!(((~((min(var_10, var_12))))))));
                            var_66 ^= (min((min(var_5, var_13)), ((max(var_0, var_1)))));
                        }
                    }
                }
            }
            var_67 = (max(var_67, var_16));

            for (int i_41 = 1; i_41 < 13;i_41 += 1)
            {
                var_68 ^= (((max(var_10, var_12))));
                arr_152 [3] [i_0] [4] [9] = (((var_11 <= var_9) - (((!(!var_10))))));

                for (int i_42 = 2; i_42 < 13;i_42 += 1) /* same iter space */
                {
                    arr_155 [i_0] [i_41] [i_42 - 1] = (min((max((min(-5795, 139904189)), var_15)), ((var_2 ? (min(var_5, var_6)) : (((min(var_2, var_13))))))));
                    var_69 *= min((max(var_5, var_9)), ((((~var_15) ? ((min(4684, 28557))) : ((var_1 ? var_1 : var_13))))));
                    arr_156 [i_0] [i_41] [i_0] = (max(((max(var_12, var_6))), (~var_14)));
                    arr_157 [i_0] [i_37] = ((!((min(var_6, var_11)))));

                    /* vectorizable */
                    for (int i_43 = 0; i_43 < 14;i_43 += 1)
                    {
                        arr_160 [i_0] [5] [1] [i_42] [11] = (~var_10);
                        var_70 &= ((var_11 ? var_3 : var_13));
                        arr_161 [i_0] [i_0 + 1] [9] [1] [i_41] [i_42 - 1] [i_43] = 96;
                    }
                }
                for (int i_44 = 2; i_44 < 13;i_44 += 1) /* same iter space */
                {
                    arr_164 [i_41 - 1] [i_44] [i_41] [i_0] = (!-var_13);
                    arr_165 [i_44] [i_0] [i_41] [i_0] [i_0 + 2] = ((((((max(var_8, var_0))) ? (min(var_11, var_9)) : var_4)) >> ((max((!20490), (!var_4))))));
                    arr_166 [i_0] [i_0] [i_0 + 3] [i_0] = (max(((-(min(var_16, var_4)))), var_15));
                }
                /* LoopNest 2 */
                for (int i_45 = 3; i_45 < 10;i_45 += 1)
                {
                    for (int i_46 = 2; i_46 < 12;i_46 += 1)
                    {
                        {
                            var_71 |= (((((41511 ? 65535 : 57362))) || var_15));
                            var_72 |= (min((((((min(var_16, var_13))) >= var_15))), (max((max(var_9, var_0)), var_6))));
                            arr_172 [i_0] [i_45 + 4] [i_41] [i_37] [i_0] = ((~(max(((var_11 ? var_12 : var_14)), (!var_15)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_47 = 0; i_47 < 14;i_47 += 1)
    {
        for (int i_48 = 1; i_48 < 13;i_48 += 1)
        {
            for (int i_49 = 0; i_49 < 14;i_49 += 1)
            {
                {
                    arr_179 [i_47] [i_47] [8] = max((var_2 || var_6), (min(var_12, var_8)));
                    arr_180 [i_48] [i_48] [i_48] [i_48] = (max((max(var_12, var_11)), (min(var_7, var_15))));
                    arr_181 [i_47] [1] [i_49] = (+-var_13);
                }
            }
        }
    }
    var_73 -= var_5;
    var_74 = var_13;
    var_75 = var_4;
    #pragma endscop
}
