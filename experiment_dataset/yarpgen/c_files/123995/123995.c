/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (min((0 != 0), (~var_5)));
    var_13 = 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_14 = var_6;
            var_15 = 1472937056;
            var_16 = (max(var_16, var_1));
            var_17 -= var_2;
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_18 = -1133342906658157086;
                var_19 = var_7;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_20 -= var_5;
                            var_21 = (min(((max((arr_1 [i_2 + 1]), 0))), -var_6));
                            var_22 *= (arr_10 [i_0] [i_2] [i_4] [i_5]);
                            arr_20 [i_6] [i_4] [i_4] [i_4] [i_0] = (~var_1);
                            arr_21 [i_0] [i_0] [i_0] [i_4] = var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_23 = 6969016060245103217;
                            var_24 = (max(var_24, (arr_4 [i_0])));
                        }
                    }
                }
                arr_28 [i_0] [i_2] [i_4] = (arr_3 [i_2 - 2]);
                var_25 *= 4508;
            }

            /* vectorizable */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                arr_32 [i_0] |= -var_4;

                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    var_26 = var_4;

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_27 = var_2;
                        var_28 -= var_0;
                        var_29 = ((!(var_4 == 0)));
                        var_30 ^= (~var_10);
                    }
                }
            }
            var_31 = var_2;
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 22;i_12 += 1)
        {
            arr_40 [i_0] [i_12] = var_4;

            for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    arr_49 [i_14] [i_14] [i_12] = (arr_33 [i_0] [i_13] [i_0] [i_14] [i_14]);
                    var_32 = (max(var_32, var_0));
                }
                var_33 = ((~(arr_6 [i_0] [i_12 - 1])));
            }
            for (int i_15 = 2; i_15 < 22;i_15 += 1) /* same iter space */
            {
                var_34 ^= 0;
                var_35 = (max(var_35, var_0));
                var_36 = var_0;
                var_37 = ((-(-1723 >= 0)));
            }
            for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
            {
                var_38 -= 56553;
                var_39 = (max(var_39, (((!(arr_13 [i_0]))))));
            }
            for (int i_17 = 2; i_17 < 22;i_17 += 1) /* same iter space */
            {
                var_40 = (~-1190582170);
                var_41 = var_4;
                var_42 |= var_4;
            }
        }
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            var_43 = (max(var_43, (arr_31 [i_18] [i_0])));
            var_44 -= 8983;
            arr_63 [i_18] = 1775185607;
        }
        var_45 = (var_5 / 6969016060245103217);
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            {
                                var_46 = (0 < -1);
                                var_47 = (((((-674466954 + 2147483647) >> (46904 - 46886))) >= (arr_6 [i_0] [i_19])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 4; i_23 < 22;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 22;i_24 += 1)
                        {
                            {
                                var_48 = 0;
                                var_49 = (max((arr_5 [i_24] [i_20]), 46904));
                                arr_80 [i_20] [i_19] = 756835406;
                                arr_81 [i_20] [i_19] [i_20] [i_23] [i_24] = ((((((0 >> (124 - 117))))) < (((!(var_10 * 388644077))))));
                            }
                        }
                    }
                    arr_82 [i_20] [i_20] = (((var_6 <= 46904) + (arr_64 [i_0] [i_19] [i_20])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 19;i_25 += 1)
    {
        var_50 = 756835406;

        for (int i_26 = 2; i_26 < 15;i_26 += 1)
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 19;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    {
                        arr_93 [i_25] = (-1 >= -7012);
                        arr_94 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((-(arr_29 [i_26 + 1] [i_28] [i_28])));
                        var_51 = (~1);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_29 = 1; i_29 < 18;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    {
                        var_52 = -103;
                        arr_102 [i_30] [i_25] [i_25] [i_25] = var_10;
                    }
                }
            }
        }
        for (int i_31 = 0; i_31 < 19;i_31 += 1)
        {
            var_53 = var_2;
            /* LoopNest 2 */
            for (int i_32 = 3; i_32 < 15;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 19;i_33 += 1)
                {
                    {
                        var_54 -= (arr_43 [i_32 + 4] [i_32 + 1] [i_32 + 4]);
                        var_55 = var_9;
                        var_56 = (max(var_56, -8982));
                    }
                }
            }
            var_57 -= (arr_113 [i_31] [i_25] [i_25]);
            var_58 = (~var_2);
        }
        for (int i_34 = 0; i_34 < 19;i_34 += 1)
        {
            var_59 = 0;

            for (int i_35 = 0; i_35 < 19;i_35 += 1)
            {
                var_60 = 1;
                var_61 = (max(var_61, var_5));

                for (int i_36 = 0; i_36 < 19;i_36 += 1)
                {
                    arr_124 [i_36] [i_25] [i_35] [i_25] [i_25] = (~var_9);
                    var_62 = 0;
                }
                var_63 = (((arr_60 [i_25]) <= 3989));
            }
            var_64 = var_7;
        }
        for (int i_37 = 0; i_37 < 19;i_37 += 1)
        {
            var_65 = (min(var_65, (arr_85 [i_25])));
            var_66 ^= (~18446744073709551615);
        }
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 19;i_38 += 1)
        {
            for (int i_39 = 2; i_39 < 18;i_39 += 1)
            {
                {
                    arr_134 [i_39] [i_25] [i_25] = (16 / var_6);
                    var_67 = (max(var_67, var_4));
                    var_68 = (max(var_68, (3920204648708507941 + 1190582170)));
                    arr_135 [i_25] = 0;

                    for (int i_40 = 0; i_40 < 19;i_40 += 1)
                    {
                        var_69 = 18446744073709551615;
                        var_70 = (arr_1 [i_25]);

                        for (int i_41 = 0; i_41 < 19;i_41 += 1)
                        {
                            var_71 = var_3;
                            var_72 |= ((~(arr_19 [i_39 - 2] [i_39] [i_39] [i_39] [i_39 - 2] [i_39 + 1] [i_39 - 1])));
                            var_73 = var_5;
                            arr_140 [i_25] [i_38] [i_39 - 2] [i_25] [i_39 + 1] = (~var_5);
                        }
                        for (int i_42 = 1; i_42 < 18;i_42 += 1)
                        {
                            var_74 = ((var_4 + (arr_7 [i_39 - 1] [i_39 - 2])));
                            arr_143 [i_25] [i_25] [i_39 - 2] [i_40] [i_42] = ((-125 + 2147483647) << (var_9 - 1));
                        }

                        for (int i_43 = 3; i_43 < 16;i_43 += 1)
                        {
                            var_75 -= var_6;
                            var_76 = (max(var_76, var_4));
                            var_77 = (max(var_77, (!18631)));
                        }
                    }
                    for (int i_44 = 1; i_44 < 17;i_44 += 1) /* same iter space */
                    {
                        var_78 = (0 * var_8);
                        arr_151 [i_25] [i_25] [i_25] [i_38] [i_39 + 1] [i_44] = ((var_7 <= (!729426473)));
                    }
                    for (int i_45 = 1; i_45 < 17;i_45 += 1) /* same iter space */
                    {
                        var_79 = (max(var_79, 1));
                        var_80 = (!var_6);
                    }
                }
            }
        }

        for (int i_46 = 0; i_46 < 19;i_46 += 1)
        {
            var_81 = 56553;

            for (int i_47 = 0; i_47 < 19;i_47 += 1)
            {

                for (int i_48 = 0; i_48 < 19;i_48 += 1)
                {
                    arr_163 [i_48] [i_25] [i_25] [i_25] = (var_7 % 49302553);
                    var_82 = (arr_120 [i_25] [i_25] [i_25] [i_25]);
                    arr_164 [i_25] = -1;
                    var_83 *= -4294967295;
                }
                var_84 = (arr_85 [i_25]);
                arr_165 [i_25] = (((arr_154 [i_25] [i_46] [i_47] [i_46]) % (arr_18 [i_25] [i_25] [i_46] [i_46] [i_47])));
            }
            var_85 = (max(var_85, (~var_8)));
            var_86 = ((~(arr_79 [i_25] [i_25] [i_25] [i_46] [i_46])));
            var_87 = var_1;
        }
        for (int i_49 = 0; i_49 < 19;i_49 += 1)
        {

            for (int i_50 = 0; i_50 < 19;i_50 += 1)
            {
                /* LoopNest 2 */
                for (int i_51 = 0; i_51 < 19;i_51 += 1)
                {
                    for (int i_52 = 4; i_52 < 18;i_52 += 1)
                    {
                        {
                            var_88 = 56553;
                            var_89 = (1148417904979476480 + 0);
                        }
                    }
                }
                var_90 = var_0;
                var_91 = (arr_158 [i_25] [i_50]);
                /* LoopNest 2 */
                for (int i_53 = 0; i_53 < 19;i_53 += 1)
                {
                    for (int i_54 = 0; i_54 < 19;i_54 += 1)
                    {
                        {
                            var_92 = -3989;
                            var_93 = 1190582170;
                        }
                    }
                }
                arr_181 [i_25] [i_49] [i_49] [i_25] = (-857947749 < var_6);
            }

            for (int i_55 = 0; i_55 < 19;i_55 += 1)
            {
                var_94 = (arr_39 [i_25] [i_49]);
                var_95 ^= var_4;
                var_96 = ((~(var_8 - var_10)));
            }
        }
        var_97 -= (((~var_0) != (arr_23 [i_25] [i_25])));
    }
    for (int i_56 = 0; i_56 < 20;i_56 += 1)
    {
        var_98 = var_0;
        arr_188 [i_56] = ((((max(0, 3645804181))) || (1190582169 != 1)));
        var_99 = (min(var_99, ((((var_2 + 9223372036854775807) >> (((arr_69 [i_56] [i_56] [i_56] [i_56]) + 9016829874563589896)))))));
        arr_189 [i_56] = var_7;
    }
    /* LoopNest 3 */
    for (int i_57 = 0; i_57 < 12;i_57 += 1)
    {
        for (int i_58 = 3; i_58 < 10;i_58 += 1)
        {
            for (int i_59 = 0; i_59 < 12;i_59 += 1)
            {
                {
                    var_100 = var_10;
                    arr_198 [i_59] [6] [6] [i_57] |= ((~((~(((arr_157 [i_57]) / var_3))))));
                    arr_199 [i_57] [i_58] [i_58 - 1] = 3645804181;
                }
            }
        }
    }
    #pragma endscop
}
