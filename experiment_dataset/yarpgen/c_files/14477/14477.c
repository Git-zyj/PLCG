/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((-var_4 ? ((var_2 ? var_5 : var_7)) : -var_7))) ? var_0 : (max(((var_9 ? var_1 : var_1)), var_2))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((var_0 ? var_6 : ((var_7 ? var_7 : var_1)))))));
                        var_12 = (~2766289168);
                        var_13 = (max(var_13, var_5));
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_4] = var_9;
                        var_14 = (min((((min(var_8, var_6)))), (((((var_0 ? var_8 : var_5))) ? (min(var_7, var_1)) : var_4))));
                        var_15 = (max(-var_0, ((min((min(var_3, var_3)), var_7)))));
                        var_16 *= ((((min(var_0, var_8))) ? (~var_1) : (~var_4)));
                    }
                    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_5] [i_5] [i_2] [i_1] [i_0] = (max((max((min(var_1, var_0)), (((var_5 ? var_4 : var_8))))), (((((max(var_5, var_2))) ? var_5 : ((max(var_4, var_6))))))));
                        arr_21 [i_2] [i_1 + 2] [i_2] [i_5 + 1] |= (max(var_5, (max(var_7, ((var_9 ? var_5 : var_5))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_17 ^= ((~((var_7 ? var_8 : var_1))));
                        var_18 ^= (((((((min(var_0, var_4))) ? ((var_7 ? var_8 : var_5)) : ((var_0 ? var_9 : var_8))))) ? (max(((min(-947833999, (-9223372036854775807 - 1)))), ((var_5 ? var_5 : var_1)))) : (min((((var_5 ? var_3 : var_5))), ((var_0 ? var_0 : var_7))))));
                        var_19 = (min(((-(max(-9223372036854775783, 0)))), -var_7));
                    }
                    var_20 = ((((max(((min(var_6, var_3))), ((var_1 ? var_1 : var_6))))) ? ((((max(var_3, var_2))) ? ((var_0 ? var_1 : var_3)) : var_1)) : (((var_9 ? var_4 : var_2)))));
                }
            }
        }
        var_21 = ((-((var_8 ? var_7 : var_2))));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_29 [i_0 + 1] [i_7] = ((((min(var_0, var_6))) ? ((((min(var_8, var_1))) ? ((min(var_8, var_8))) : (max(var_0, var_6)))) : ((((~var_9) ? (max(var_8, var_4)) : var_8)))));
            var_22 = (max((min(var_5, var_8)), ((var_1 ? var_6 : var_9))));

            /* vectorizable */
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                arr_33 [i_0] [i_7] [i_7] [i_8] = ((var_9 ? ((var_4 ? var_9 : var_1)) : var_2));

                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_37 [i_9] [i_9] [i_9] [i_9] [i_0 + 1] [i_0 + 1] = (var_5 ? var_3 : var_9);
                    arr_38 [i_9] [i_7] = (~var_5);
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_23 = ((var_2 ? var_3 : var_9));
                        var_24 = var_9;
                        var_25 = ((var_0 ? var_3 : var_5));
                    }
                    var_26 = (~255);
                    var_27 = (((((var_8 ? var_7 : var_0))) ? var_1 : (!var_6)));
                    var_28 &= (((var_6 ? var_4 : var_1)));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_29 = (max(var_29, ((((((var_2 ? var_9 : var_9))) ? ((var_4 ? var_3 : var_8)) : (((var_0 ? var_2 : var_7))))))));
                    var_30 = (~var_8);
                    arr_49 [i_12] [i_7] [i_8 + 1] [i_12] = var_4;
                }
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    var_31 = var_1;
                    arr_53 [i_0 - 1] [i_13] [i_0 - 1] [i_8] [i_7] [i_0 - 1] = (((((var_5 ? var_6 : var_9))) ? (!var_2) : var_3));
                    var_32 = (min(var_32, (((var_1 ? (~var_9) : ((var_2 ? var_2 : var_8)))))));
                    var_33 ^= ((var_3 ? var_4 : var_3));
                    arr_54 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] = -var_6;
                }
            }

            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                var_34 = ((var_3 ? var_3 : ((var_5 ? var_7 : var_9))));

                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {

                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        var_35 = (((((-var_2 ? -var_2 : ((min(var_6, var_4)))))) ? ((((!var_0) ? (!var_6) : ((max(var_3, var_2)))))) : (max(((min(var_3, var_7))), (max(var_0, var_8))))));
                        var_36 = (min(var_36, (((((max(var_1, var_3))) ? (((17597 ? 0 : 9223372036854775757))) : (min(var_2, var_0)))))));
                        var_37 = (min(var_37, (((var_3 ? -24148 : var_6)))));
                        var_38 = (-(((((var_4 ? var_3 : var_1))) ? var_0 : var_6)));
                        var_39 = (max((min(((var_1 ? var_0 : var_5)), (~var_6))), ((min((~var_7), var_3)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        arr_67 [i_0] [i_7] [i_14] [i_14] [i_17] = var_8;
                        var_40 = -var_2;
                        arr_68 [i_0] [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_14] = ((var_8 ? var_2 : var_0));
                    }
                    var_41 = var_1;
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    var_42 = ((var_0 ? var_0 : var_6));
                    var_43 = (min(var_43, (~var_2)));
                }
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    var_44 = ((((!((min(var_8, var_5))))) ? var_4 : ((((min(var_7, var_4))) ? ((var_8 ? var_0 : var_7)) : var_6))));
                    var_45 -= ((((max(((var_5 ? var_8 : var_7)), (~var_3)))) ? (((((var_1 ? var_8 : var_1))) ? (~var_0) : (((var_6 ? var_9 : var_6))))) : (min((((var_1 ? var_8 : var_5))), ((var_5 ? var_0 : var_1))))));
                }
                arr_73 [i_0 + 1] [i_0 + 1] [i_14] [i_7] = ((-(min(((max(17991, -1272388563))), (max(var_2, var_8))))));
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_46 |= ((-((var_2 ? var_7 : var_6))));

                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {
                    arr_80 [i_0 + 1] [0] [i_0 + 1] [i_7] [i_20] [i_0] |= ((var_6 ? var_3 : ((var_0 ? var_1 : var_2))));

                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_47 ^= (((((var_3 ? var_8 : var_0))) ? var_0 : var_2));
                        var_48 *= ((((var_5 ? var_2 : var_8))) ? ((var_9 ? var_1 : var_7)) : ((var_5 ? var_1 : var_2)));
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        arr_88 [i_21] [i_21] [i_21] = ((var_1 ? var_9 : var_4));
                        var_49 = -var_5;
                        var_50 |= (((((var_0 ? var_5 : var_4))) ? var_0 : var_5));
                    }
                    var_51 = (max(var_51, var_4));

                    for (int i_24 = 0; i_24 < 10;i_24 += 1)
                    {
                        var_52 = ((-((var_5 ? var_5 : var_2))));
                        var_53 = (((((var_5 ? var_8 : var_9))) ? var_8 : var_1));
                        arr_91 [i_21] [0] = (~var_4);
                        var_54 = ((var_1 ? (((var_3 ? var_4 : var_2))) : ((var_2 ? var_1 : var_4))));
                    }
                    for (int i_25 = 3; i_25 < 9;i_25 += 1)
                    {
                        arr_94 [i_21] [i_25] = (var_8 ? var_3 : var_3);
                        arr_95 [i_20] [i_20] [i_20] |= ((var_6 ? var_4 : var_4));
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 8;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 7;i_27 += 1)
                    {
                        {
                            arr_103 [i_0] [i_7] [0] [i_26] [i_26] = (((((var_0 ? var_8 : var_3))) ? ((var_8 ? var_9 : var_1)) : (((var_0 ? var_2 : var_5)))));
                            arr_104 [i_26] [i_26] [i_20] [i_7] [i_26] = (((((var_6 ? var_8 : var_6))) ? (~var_3) : var_1));
                            arr_105 [6] [i_26] [i_26] [i_7] [i_20] [i_26] [i_0] = (((((var_4 ? var_3 : var_3))) ? ((var_8 ? var_8 : var_7)) : (~var_2)));
                            var_55 ^= (~var_7);
                            arr_106 [i_26] [i_7] [i_20] [0] [i_27] [i_20] [i_26] = var_9;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 10;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 10;i_29 += 1)
            {
                {
                    var_56 = ((((max((min(var_8, var_3)), ((var_2 ? var_8 : var_8))))) ? (~var_2) : ((((max(var_8, var_6))) ? (((min(var_5, var_5)))) : ((var_8 ? var_0 : var_4))))));

                    for (int i_30 = 1; i_30 < 8;i_30 += 1) /* same iter space */
                    {

                        for (int i_31 = 0; i_31 < 1;i_31 += 1)
                        {
                            var_57 += (min(((max(var_5, var_2))), (min(var_0, (((var_5 ? var_3 : var_9)))))));
                            var_58 -= max(3058531933750851977, 5);
                        }
                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
                        {
                            arr_121 [i_0] [i_0 - 2] [4] [i_0] [i_28] = (((((var_4 ? var_4 : var_4))) ? var_4 : -var_3));
                            var_59 = ((var_0 ? var_5 : var_6));
                        }
                        /* vectorizable */
                        for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
                        {
                            var_60 = (~30061);
                            arr_125 [i_0 + 1] [i_28] [i_28] [i_29] [i_30] [i_33] = ((var_0 ? var_5 : (!var_0)));
                        }
                        arr_126 [i_29] [i_0] [i_28] [i_29] [i_30] |= max(((var_1 ? var_8 : (((var_7 ? var_4 : var_6))))), ((max(var_7, -var_7))));
                        var_61 = (max(var_61, (((((min(var_3, (min(var_8, var_8))))) ? var_3 : (min((!var_1), var_1)))))));
                    }
                    for (int i_34 = 1; i_34 < 8;i_34 += 1) /* same iter space */
                    {
                        arr_129 [i_34] [i_28] [i_28] [i_34] [i_28] = ((~((~((var_1 ? var_0 : var_8))))));
                        arr_130 [i_0] [i_28] [0] [i_34 - 1] [i_29] = ((-((((max(var_8, var_2))) ? (((var_4 ? var_6 : var_7))) : ((var_9 ? var_1 : var_9))))));
                        var_62 &= (max((max(((var_2 ? var_6 : var_0)), ((max(var_3, var_8))))), (min(var_8, var_1))));
                        var_63 = (min(var_63, (((((((((var_3 ? var_7 : var_5))) ? ((min(var_6, var_3))) : var_5))) ? ((var_7 ? (~var_7) : ((var_6 ? var_1 : var_3)))) : var_2)))));
                    }
                    arr_131 [i_28] = (min(((max(var_7, var_5))), ((var_7 ? (max(var_7, var_8)) : (((max(var_4, var_5))))))));
                }
            }
        }
    }
    for (int i_35 = 0; i_35 < 1;i_35 += 1)
    {
        var_64 = (min(var_64, ((((((var_4 ? var_8 : var_2))) ? (~var_4) : ((var_5 ? var_0 : var_2)))))));
        var_65 ^= (max(var_8, (max(var_1, ((var_2 ? var_0 : var_9))))));
        arr_134 [i_35] |= var_2;
    }
    var_66 = (((((~(~263038841)))) ? var_1 : var_0));
    var_67 = (max(var_67, (((((((((var_2 ? var_5 : var_9))) ? ((max(var_9, var_4))) : ((var_8 ? var_0 : var_7))))) ? -var_7 : var_6)))));
    var_68 = var_1;
    #pragma endscop
}
