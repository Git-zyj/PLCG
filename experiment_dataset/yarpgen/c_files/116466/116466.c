/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 -= (min((min((min(var_13, var_5)), (~var_12))), (((var_12 ? var_2 : var_13)))));
                var_17 = (((((~(var_11 == var_1)))) ? (max(var_6, (max(var_8, var_8)))) : ((((!(~var_8)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = max(var_11, ((min((!var_13), var_14))));
        arr_9 [i_2] = (min(((var_9 * (!var_2))), ((-(max(var_15, var_0))))));
        var_19 = var_8;
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_13 [1] = ((~((min(var_1, var_10)))));
        arr_14 [i_3] [i_3] = (~((((var_10 ? var_2 : var_2)) | (~var_1))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_20 = (min(((!((max(var_4, var_15))))), ((!(!var_2)))));
                        var_21 |= ((((~(min(var_6, var_11)))) & (((~(~var_0))))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_27 [i_3] [i_4 + 2] [4] [i_7] [i_7] [i_8] [i_8] = min(((var_9 ? (~var_11) : var_0)), ((var_3 ? (((max(var_9, var_1)))) : var_2)));
                            arr_28 [i_7] [i_7] = (((!(!var_9))));
                        }
                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            var_22 = min((max((min(var_11, var_2)), ((max(var_7, var_0))))), ((((min(var_10, var_13)) & -var_13))));
                            var_23 |= ((!(~var_15)));
                            arr_31 [i_7] [i_7] [4] [i_7] [i_7] |= ((-(max(-var_7, var_15))));
                        }

                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_24 = (!var_10);
                            arr_36 [i_3] [i_3] [i_3] [i_7] [i_3] = (~((min(var_11, var_2))));
                        }
                        var_25 = ((+((var_5 ? (var_3 % var_0) : (((min(var_1, var_1))))))));
                    }
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_26 = (min(var_26, ((var_8 & (max((~var_1), var_5))))));

                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_27 = (max((~var_7), (((!var_7) ? var_7 : var_0))));
                            arr_41 [i_3] [i_4] [i_4] [i_4] [i_4] = min(((-(max(var_0, var_13)))), var_0);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, var_9));
                            var_29 = (~var_10);
                            var_30 = (~var_5);
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_31 = var_3;
                            var_32 |= (min(((max(var_9, var_3))), var_2));
                        }
                        var_33 -= (max(var_8, (min((((var_8 ? var_6 : var_10))), ((var_13 ? var_3 : var_1))))));
                    }
                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        arr_49 [i_5] [i_4] [i_5] [i_5] [i_5] = min(((~(var_3 & var_7))), ((-(min(var_3, var_5)))));
                        arr_50 [i_5] [i_4] [i_3] = ((-((var_6 + ((var_10 ? var_0 : var_7))))));
                    }
                    arr_51 [i_3 + 1] [i_4] &= (max((var_11 & var_6), (((!(var_3 != var_11))))));
                    arr_52 [i_4] [i_4 + 2] |= ((~(var_3 == var_10)));
                }
            }
        }

        for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_34 = min(var_8, (((!(~var_4)))));
                            arr_64 [i_3] [i_3] = ((-(((((~var_8) + 9223372036854775807)) >> (((~var_4) + 424258669))))));
                            var_35 = ((-((((min(var_9, var_10))) ? var_1 : (!var_12)))));
                            arr_65 [i_3] [i_16] [i_16 - 2] [i_17] [i_18] [i_18] [i_17] = ((((!(((var_2 ? var_3 : var_3)))))) - ((var_11 / (~var_10))));
                        }
                    }
                }
            }
            var_36 = (max(var_36, ((((((!(var_11 / var_13)))) % -var_0)))));
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    {
                        var_37 = (min((!var_11), (((max(var_2, var_10))))));
                        var_38 = var_4;
                    }
                }
            }
        }
        for (int i_22 = 2; i_22 < 15;i_22 += 1) /* same iter space */
        {
            var_39 = ((min((min(var_4, var_7), ((min(var_12, var_0)))))));
            arr_75 [i_3] [5] [i_3] = var_5;
        }
        /* vectorizable */
        for (int i_23 = 2; i_23 < 15;i_23 += 1) /* same iter space */
        {
            arr_79 [i_23] = var_6;
            var_40 = var_14;
        }
    }
    for (int i_24 = 1; i_24 < 13;i_24 += 1) /* same iter space */
    {

        for (int i_25 = 2; i_25 < 14;i_25 += 1)
        {
            var_41 |= (((-(max(var_13, var_5)))));

            /* vectorizable */
            for (int i_26 = 2; i_26 < 15;i_26 += 1)
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 16;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {
                        {
                            arr_94 [i_24] [i_25] [i_26] [i_27] [i_25] [i_27] = (-(!var_0));
                            arr_95 [i_24] [i_25] [i_25] [i_24] &= (!var_6);
                            var_42 &= var_3;
                        }
                    }
                }
                var_43 = ((~(!var_10)));
            }
            arr_96 [i_24] [8] [8] = (min((max(var_12, (~var_10))), ((var_15 ? var_8 : (min(var_13, var_0))))));
        }

        for (int i_29 = 1; i_29 < 15;i_29 += 1) /* same iter space */
        {
            var_44 -= ((!(((var_8 & (~var_6))))));
            var_45 = (((min(var_13, var_5))));
            var_46 = (max(var_46, ((((((min(var_0, var_5)) <= (!var_3))) ? ((max(var_2, -var_9))) : (max((var_0 ^ var_14), (max(var_9, var_11)))))))));
            var_47 = ((~(!var_13)));
        }
        /* vectorizable */
        for (int i_30 = 1; i_30 < 15;i_30 += 1) /* same iter space */
        {
            arr_102 [i_24] [i_24] &= (((!var_4) ? (!var_2) : ((var_11 ? var_12 : var_11))));
            var_48 = -var_1;

            for (int i_31 = 2; i_31 < 14;i_31 += 1) /* same iter space */
            {
                arr_107 [i_24 + 2] [i_30] [i_24 + 2] |= var_7;
                arr_108 [i_24] [i_24] [i_24] [i_24] = -var_13;
            }
            for (int i_32 = 2; i_32 < 14;i_32 += 1) /* same iter space */
            {
                var_49 ^= (!var_0);
                arr_111 [i_30] [i_30] [i_32 - 1] = ((var_7 >= var_1) ? (!var_4) : ((var_5 ? var_6 : var_11)));
                var_50 = var_12;
                var_51 = -var_15;
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 16;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 16;i_34 += 1)
                    {
                        {
                            arr_118 [i_24] [i_34] [i_24] [i_24] = ((-var_12 / ((var_13 ? var_12 : var_13))));
                            arr_119 [i_34] [i_30 - 1] [i_32] [i_32] [i_34] = var_3;
                        }
                    }
                }
            }
            for (int i_35 = 2; i_35 < 14;i_35 += 1) /* same iter space */
            {
                arr_122 [i_24] [i_30 - 1] [i_35] [i_35] |= (~var_13);
                var_52 -= ((var_1 % (~var_12)));
                var_53 = ((var_15 ? var_9 : (~var_7)));
            }
        }
        for (int i_36 = 1; i_36 < 15;i_36 += 1) /* same iter space */
        {
            var_54 = (max((var_2 / var_0), (((var_5 - var_5) ? -var_14 : (max(var_3, var_4))))));
            var_55 = (min((~var_12), (((~var_0) & (~var_3)))));
            var_56 |= ((var_13 + 2147483647) >> (((max(((min(var_2, var_12))), ((var_2 << (var_1 - 43))))) - 19181)));
        }
        for (int i_37 = 1; i_37 < 15;i_37 += 1) /* same iter space */
        {

            for (int i_38 = 0; i_38 < 16;i_38 += 1)
            {
                var_57 = (((((var_11 ? (~var_14) : -var_6))) ? ((((min(var_9, var_8))) ? (var_7 & var_6) : (max(var_14, var_3)))) : (max((min(var_8, var_1)), (~var_4)))));
                arr_131 [i_24] [i_37 + 1] [12] [i_24] |= ((((((((var_6 ? var_13 : var_10))) - (var_5 % var_3)))) ? var_14 : (((-((var_10 ? var_12 : var_0)))))));

                for (int i_39 = 0; i_39 < 1;i_39 += 1) /* same iter space */
                {

                    for (int i_40 = 2; i_40 < 13;i_40 += 1)
                    {
                        var_58 = (((((var_2 << (!var_12)))) && ((((!var_13) ^ (var_5 / var_2))))));
                        var_59 = (((((~(max(var_2, var_4))))) ? -var_0 : (((!(var_10 / var_5))))));
                    }
                    for (int i_41 = 0; i_41 < 16;i_41 += 1)
                    {
                        arr_140 [i_24] [i_37] [i_37] [i_37] [i_41] [i_38] [i_41] |= (max(((((min(var_15, var_7))) ? -var_1 : (var_10 / var_8))), -var_0));
                        var_60 *= ((~(max(((min(var_0, var_9))), var_7))));
                        var_61 = (max(((var_14 & (var_0 | var_15))), ((-(var_3 && var_2)))));
                    }
                    for (int i_42 = 0; i_42 < 16;i_42 += 1)
                    {
                        var_62 = (max((min(-var_10, (var_11 ^ var_3))), (max(var_6, var_3))));
                        var_63 = (!-var_15);
                        var_64 = max(-var_7, -var_13);
                        var_65 = (-(max((max(var_4, var_10)), -var_14)));
                    }
                    for (int i_43 = 0; i_43 < 16;i_43 += 1)
                    {
                        arr_146 [i_24] [i_24] [i_24] [i_37] [i_24] = var_0;
                        var_66 = ((((!var_6) ? var_9 : (~var_4))));
                    }
                    arr_147 [i_37] = var_1;
                    var_67 = ((((!(!var_5)))));
                    var_68 = ((max(((min(var_6, var_12)), var_0))));
                    var_69 -= ((((max(var_4, var_12)) / -var_10)));
                }
                for (int i_44 = 0; i_44 < 1;i_44 += 1) /* same iter space */
                {

                    for (int i_45 = 0; i_45 < 1;i_45 += 1) /* same iter space */
                    {
                        var_70 = (min((((min(var_2, var_14)))), -var_13));
                        var_71 |= (((~var_1) ? (!var_4) : ((((max(var_6, var_7)) == ((max(var_10, var_13))))))));
                        arr_155 [i_24] [i_37] [i_37] [i_44] [i_44] = ((~((-(min(var_8, var_10))))));
                    }
                    for (int i_46 = 0; i_46 < 1;i_46 += 1) /* same iter space */
                    {
                        var_72 = var_11;
                        var_73 -= (min(var_0, (!var_4)));
                        var_74 = ((-(((!((max(var_10, var_13))))))));
                        var_75 = var_0;
                        arr_159 [i_37] [i_37 + 1] = var_6;
                    }

                    /* vectorizable */
                    for (int i_47 = 0; i_47 < 16;i_47 += 1)
                    {
                        arr_162 [i_24] [i_24 + 2] [i_37] [i_24] [i_24 + 2] = (!-var_7);
                        var_76 *= var_10;
                    }
                }
                for (int i_48 = 0; i_48 < 1;i_48 += 1) /* same iter space */
                {
                    arr_166 [i_24] [i_24] [i_37] [i_24] = (~-var_14);
                    var_77 -= (!((!((max(var_15, var_1))))));
                    var_78 = ((-var_8 == ((-(min(var_13, var_8))))));
                    var_79 = ((((min(((var_0 ? var_4 : var_12)), (!var_0)))) <= (min((min(var_8, var_1)), (max(var_11, var_12))))));
                    var_80 |= (min((((var_5 ? var_2 : var_9))), ((-(max(var_9, var_15))))));
                }
                /* vectorizable */
                for (int i_49 = 0; i_49 < 16;i_49 += 1)
                {
                    arr_171 [i_24] [i_37] = (-var_3 <= var_13);
                    arr_172 [i_37] [i_37] [i_37] = (var_9 ? -var_4 : ((var_7 ? var_0 : var_12)));
                    var_81 = (max(var_81, (((-((var_6 ? var_10 : var_7)))))));
                    arr_173 [i_24] [i_24] [i_37] [i_24] [i_24] [i_24] = var_3;
                }
                var_82 = (((~var_4) ? ((~((var_13 ? var_4 : var_3)))) : (((~var_4) ? (var_12 ^ var_11) : (((min(var_14, var_14))))))));
            }

            for (int i_50 = 0; i_50 < 16;i_50 += 1)
            {
                var_83 = max(((var_2 * (min(var_3, var_10)))), ((var_0 & ((var_12 ? var_3 : var_13)))));
                arr_177 [14] [14] [i_37] [15] = ((-(((!(((var_3 ? var_15 : var_10))))))));
            }
            var_84 = (max((max(((var_1 ? var_3 : var_5)), (~var_9))), var_5));
            var_85 = (~((var_5 ? -var_2 : (min(var_0, var_7)))));
        }
        var_86 |= (max((min((min(var_3, var_12)), var_3)), (((min(var_4, var_7))))));
    }
    var_87 = max(var_4, (((var_12 ? var_4 : var_1))));
    #pragma endscop
}
