/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((4294967295 + -31752) | var_4));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 *= (max((var_0 && var_2), var_10));
                    arr_8 [i_2] [i_1] [i_0] = var_1;
                    arr_9 [i_2] [3] [i_2] = ((var_9 & (((max((min(-44, 31751)), var_7))))));
                }
                arr_10 [i_1] [i_0 + 4] [i_0 + 4] = var_2;
            }
        }
    }
    var_12 = ((((((var_3 > (((min(var_4, var_7)))))))) * (max((max(var_4, var_9)), (var_9 > var_0)))));
    var_13 = (max(var_8, (!var_3)));

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] = (var_7 + -var_8);

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] = (-31753 ^ 8184);
            var_14 = (((var_9 / var_0) & (((max(31752, 22))))));
            var_15 += ((-((min((min(var_4, var_10)), var_4)))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_31 [12] [i_3] [i_6] [i_3] [i_3] [i_3] = (((!var_9) >> (((max(var_9, ((max(var_8, var_3))))) - 793456673))));
                            arr_32 [i_3] [i_3] [i_6] [17] [i_5] [i_3] [i_3] = (((var_2 & var_7) ^ var_5));
                            arr_33 [i_3] [i_8] [i_7] [i_6] [i_5] [i_3] [i_3] = (max(var_0, (max(var_3, var_10))));
                        }
                    }
                }
                arr_34 [i_6] [i_3] [i_3] [17] = ((((min((var_9 && var_2), (var_7 || var_8)))) < (var_8 + -31752)));
                var_16 = (min(var_16, ((min((var_9 >= var_4), ((~(min(2762954719, 2762954709)))))))));
                arr_35 [6] [i_3] [i_3 + 1] = (max(-var_3, var_3));
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                arr_38 [i_3] [i_3] [i_3] = (((32767 && var_2) + (min(4294959112, 1532012577))));
                var_17 = (min(var_17, var_5));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_45 [i_3] [i_3] = ((((((var_5 ^ var_2) > ((max(var_10, var_7)))))) ^ var_10));
                            arr_46 [i_3] = (max((max(var_3, (min(3639771402, -31752)))), (((((min(var_10, var_8))) || (!var_5))))));
                            arr_47 [i_11] [i_3] [i_3] [i_3] = var_5;
                        }
                    }
                }
                arr_48 [i_3 + 2] [i_3] [i_9] = var_2;
                arr_49 [i_3] = (((max(var_4, var_9))) & ((min(var_3, var_9))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    arr_58 [i_3] = (max(31751, 17108));
                    var_18 = (max((max((!var_2), (max(var_0, var_8)))), (((max(var_2, var_0))))));
                    var_19 = (max((min(var_6, (min(13, -31752)))), var_8));
                    arr_59 [i_3] = ((var_0 * (-5042 || 30)));
                }
                var_20 = (((((max((var_7 >= var_9), (!var_8))))) * (((min(var_5, var_9)) - (var_8 <= var_8)))));

                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_21 = var_3;
                    arr_62 [i_3] [i_3] [i_5] [i_5] [i_3] [i_3] = (((min(var_5, var_4))));
                    var_22 = (min(var_22, ((min(((1532012568 >> (1532012576 - 1532012545))), ((((32767 >> (-92 + 115))))))))));

                    for (int i_15 = 3; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_23 -= (min(((((!var_7) | var_6))), (~var_3)));
                        arr_65 [i_3] [i_14] [i_12] [i_5] [i_3] = (max(((((min(var_0, var_9)) != -var_8))), (min((0 ^ 12318), (max(9007199254740992, -9007199254741008))))));
                    }
                    for (int i_16 = 3; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, 8184));
                        var_25 ^= ((!((((var_10 + var_4) % (var_8 > var_9))))));
                        arr_68 [i_3] = (4294967289 * 0);
                        var_26 = (((var_1 - var_5) < (((max(var_1, var_0))))));
                    }
                    arr_69 [i_3] = ((!((max((((var_7 + 2147483647) >> (var_1 - 47693))), (var_1 - var_2))))));
                }
                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    var_27 ^= (23245 & -9007199254741003);
                    var_28 = (max(var_28, ((min((max((((var_8 >> (var_8 - 29515)))), var_3)), var_7)))));
                }
                var_29 = (max(var_29, ((min((!var_9), (!var_9))))));
            }
            arr_72 [i_3] [i_3] = (min((((var_7 < var_4) || (var_10 && var_0))), ((!(var_9 - var_0)))));
        }
    }
    for (int i_18 = 1; i_18 < 10;i_18 += 1)
    {
        var_30 -= var_5;
        var_31 = (min(var_31, ((((min((var_6 / var_1), (max(var_1, var_9)))) / ((((min(var_1, var_5))))))))));
    }

    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 2; i_20 < 20;i_20 += 1)
        {
            var_32 += ((var_2 >= (min((var_10 && var_5), var_9))));
            var_33 = (max((max((max(var_3, var_1)), (var_8 | var_4))), var_8));
            arr_80 [i_19] = var_6;
        }
        arr_81 [i_19] = (((((-var_7 ^ (-31752 ^ 1)))) >= -6440590390865213377));

        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            arr_84 [i_19] [i_19] = -var_4;

            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_34 = (((!var_2) < ((max((var_10 & var_5), (4014411421 < 127))))));
                var_35 = ((var_9 | ((min((var_7 ^ var_8), (var_5 || var_2))))));
            }
            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        {
                            arr_95 [i_19] = max(((min((var_7 < var_7), (var_1 & var_2)))), (var_5 / var_5));
                            arr_96 [i_19] [i_24] [i_19] [7] [i_19] [i_21] [i_19] = ((!(((0 >> (1973014669901776334 - 1973014669901776306))))));
                        }
                    }
                }
                var_36 = (min(var_36, (((var_10 >= (((var_5 < (var_8 < var_9)))))))));

                for (int i_26 = 1; i_26 < 20;i_26 += 1) /* same iter space */
                {
                    arr_99 [i_19] [i_19] = var_1;
                    var_37 = (((min(-var_6, (var_7 / var_3))) / (((var_8 / var_7) * (max(12318, 4294959111))))));
                    var_38 = var_10;
                }
                for (int i_27 = 1; i_27 < 20;i_27 += 1) /* same iter space */
                {
                    arr_103 [i_27] [i_19] [i_27] [i_27] = var_8;
                    var_39 = var_8;
                }
                for (int i_28 = 1; i_28 < 20;i_28 += 1) /* same iter space */
                {
                    var_40 = (max(var_40, (((((min(var_2, var_0)) | (max(31751, 2762954729))))))));
                    arr_108 [i_19] [i_19] [i_23] [i_23] = max((!var_5), (((var_1 && ((max(var_5, var_9)))))));
                    var_41 = (min(var_41, (((~(var_4 < var_3))))));
                }
                var_42 = (min(var_42, var_2));
            }
            /* vectorizable */
            for (int i_29 = 4; i_29 < 18;i_29 += 1) /* same iter space */
            {
                arr_112 [i_19] [i_19] = var_8;
                arr_113 [16] [i_29 - 4] [5] [i_19] = (((((var_2 + 2147483647) << (var_5 - 48))) << ((((var_6 << (var_9 + 5663760516543001115))) - 31457280))));
                arr_114 [i_19] [i_19] [i_19] [1] = (((~var_9) || var_2));
            }
            for (int i_30 = 4; i_30 < 18;i_30 += 1) /* same iter space */
            {
                arr_117 [i_30] [i_19] [i_19] [i_19] = (max((min(var_3, var_9)), ((min((!59371), (min(var_8, var_2)))))));
                arr_118 [i_19] [i_21] [i_30] = var_3;
            }
            arr_119 [i_19] [i_19] [i_19] = (min(var_9, (var_6 * var_7)));
        }
        for (int i_31 = 1; i_31 < 17;i_31 += 1)
        {

            for (int i_32 = 0; i_32 < 21;i_32 += 1)
            {
                var_43 = ((~(((var_10 > var_6) & (var_4 ^ var_3)))));
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 21;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 21;i_34 += 1)
                    {
                        {
                            arr_128 [i_19] [i_34] [i_19] [i_32] [i_31] [i_19] [i_19] = (((32767 * 65034) + ((var_1 ^ (var_6 & var_2)))));
                            var_44 = (((((var_3 & var_1) | (~var_6))) & (var_10 & var_4)));
                            arr_129 [i_34] [8] [i_19] [i_31] [i_19] = (max(31751, 17177772032));
                        }
                    }
                }
            }
            for (int i_35 = 0; i_35 < 21;i_35 += 1) /* same iter space */
            {
                var_45 = (min(var_45, (((((min(var_3, ((max(var_1, var_5)))))) ^ (max((max(var_3, var_9)), (var_3 - var_1))))))));
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 21;i_37 += 1)
                    {
                        {
                            var_46 = (((((max(var_9, var_0)) - (var_2 ^ var_2))) ^ ((var_7 | (var_9 ^ var_9)))));
                            var_47 = (min((((var_10 % var_8) >> (var_8 - 29513))), ((((max(var_1, var_6))) ^ (var_10 || var_4)))));
                            arr_139 [i_19] [i_31] [i_19] [i_36] [i_37] = ((((var_9 && (!var_10)))));
                        }
                    }
                }
                arr_140 [i_19] [i_31] [i_19] = var_4;
                var_48 = (max((max((min(var_9, var_9)), var_7)), (min(var_3, (max(var_8, var_9))))));
            }
            /* vectorizable */
            for (int i_38 = 0; i_38 < 21;i_38 += 1) /* same iter space */
            {
                var_49 = (~var_1);
                arr_143 [i_19] [i_19] [i_19] [i_19] = var_1;
                var_50 = (min(var_50, ((((2762954729 & var_0) | (((var_1 >> (var_4 - 103)))))))));
                arr_144 [i_19] [i_19] = var_9;
            }
            var_51 = min((min(var_5, var_4)), (var_9 - var_6));
            var_52 = (max(var_52, ((min(((((min(var_8, var_0)) != var_1))), (((!var_5) & (var_0 < var_10))))))));
        }
    }
    for (int i_39 = 0; i_39 < 21;i_39 += 1) /* same iter space */
    {
        var_53 = (max(var_53, (((-(max((var_6 | var_8), var_10)))))));

        for (int i_40 = 2; i_40 < 19;i_40 += 1)
        {
            arr_150 [i_39] [i_39] [i_39] = ((var_4 >= (((((min(var_8, var_2)))) ^ var_2))));
            arr_151 [i_39] [i_39] = var_9;
            var_54 = (((min((var_0 % var_7), (max(var_3, var_4)))) | 24));
        }
        var_55 ^= ((!(((~(var_10 | var_6))))));
        arr_152 [i_39] = var_7;
    }
    for (int i_41 = 0; i_41 < 21;i_41 += 1) /* same iter space */
    {
        arr_156 [i_41] = (0 != 9223372036854775807);
        arr_157 [i_41] = (((((max(var_10, var_6)))) ^ (((var_6 < var_1) & (max(var_6, var_0))))));
        arr_158 [i_41] [i_41] = (max(var_10, var_8));
        arr_159 [i_41] = (((var_10 + (9 & 31728))));
    }
    for (int i_42 = 2; i_42 < 19;i_42 += 1)
    {
        arr_162 [i_42] [i_42] = (max((min(((max(var_7, var_2))), -var_8)), var_7));

        for (int i_43 = 3; i_43 < 18;i_43 += 1)
        {
            arr_165 [i_43] = (!31751);

            for (int i_44 = 0; i_44 < 20;i_44 += 1)
            {
                arr_168 [i_44] [i_43] [i_43] [i_42 + 1] = ((!(var_2 <= var_6)));
                arr_169 [i_44] [i_43] [i_44] = (max(((max((!var_5), var_5))), (min(var_4, (min(var_9, var_5))))));
            }
        }
        for (int i_45 = 0; i_45 < 20;i_45 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_46 = 1; i_46 < 18;i_46 += 1)
            {
                var_56 = var_2;
                var_57 = var_2;

                for (int i_47 = 0; i_47 < 20;i_47 += 1)
                {

                    for (int i_48 = 0; i_48 < 20;i_48 += 1)
                    {
                        arr_180 [i_48] [i_47] [i_46] [i_46 - 1] [i_45] [i_42] [i_48] = var_5;
                        arr_181 [i_48] [i_48] [i_48] [i_48] [18] = var_9;
                    }
                    for (int i_49 = 1; i_49 < 18;i_49 += 1)
                    {
                        var_58 = (max(var_58, (~var_3)));
                        arr_186 [i_47] [13] [1] [i_47] [i_47] = ((var_7 & (var_5 > var_5)));
                    }

                    for (int i_50 = 2; i_50 < 18;i_50 += 1)
                    {
                        arr_189 [i_50] [i_50] [i_50] = var_7;
                        var_59 = (min(var_59, (var_1 ^ var_5)));
                    }
                    for (int i_51 = 0; i_51 < 1;i_51 += 1) /* same iter space */
                    {
                        var_60 = var_10;
                        arr_192 [i_51] [i_51] [1] [i_51] [i_42] = (((!1637241699668499582) ^ (((var_9 + 9223372036854775807) >> (var_10 - 111)))));
                        var_61 ^= (~var_10);
                    }
                    for (int i_52 = 0; i_52 < 1;i_52 += 1) /* same iter space */
                    {
                        arr_195 [i_42] [i_52] [i_42] = ((var_4 * (var_1 % var_0)));
                        var_62 = (min(var_62, var_3));
                    }
                    for (int i_53 = 0; i_53 < 1;i_53 += 1) /* same iter space */
                    {
                        arr_199 [i_53] [i_53] [i_46] [i_47] [i_46] [12] [12] = var_10;
                        var_63 = (max(var_63, (var_0 & var_0)));
                        arr_200 [i_45] [i_45] [i_45] [i_45] [i_45] = (-31751 == 8184);
                    }
                }
                arr_201 [i_42] [i_45] [i_42] [i_45] = (-127 - var_3);
            }
            for (int i_54 = 2; i_54 < 17;i_54 += 1)
            {

                /* vectorizable */
                for (int i_55 = 0; i_55 < 20;i_55 += 1) /* same iter space */
                {
                    var_64 = (max(var_64, var_10));
                    arr_208 [i_55] [i_54] [i_42] [i_42] = var_2;
                    var_65 = var_8;
                    arr_209 [i_45] [i_45] [i_45] = var_7;
                }
                for (int i_56 = 0; i_56 < 20;i_56 += 1) /* same iter space */
                {
                    var_66 -= (min(((!((max(var_7, var_8))))), ((var_9 && ((min(var_3, var_5)))))));
                    arr_213 [i_42 - 2] [i_42 - 2] [i_56] |= ((+(max((var_9 & var_3), (~var_2)))));
                }
                var_67 = (min(1, -1637241699668499582));
            }
            var_68 = (min(((((max(var_0, var_10))) / (max(9026114500337549167, 24)))), (((1637241699668499582 < ((-9007199254740981 + (-32767 - 1))))))));
        }
        for (int i_57 = 0; i_57 < 20;i_57 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_58 = 0; i_58 < 20;i_58 += 1)
            {
                for (int i_59 = 0; i_59 < 20;i_59 += 1)
                {
                    {
                        var_69 = ((~(max((min(var_0, var_6)), var_0))));
                        arr_221 [i_59] [i_57] [i_57] = (max(-18, -31736));

                        for (int i_60 = 0; i_60 < 20;i_60 += 1)
                        {
                            arr_225 [i_60] [i_58] [i_58] [i_58] [i_58] |= (min(var_10, (((var_3 + var_2) % var_3))));
                            var_70 = var_5;
                            var_71 -= (!var_7);
                        }
                        /* vectorizable */
                        for (int i_61 = 0; i_61 < 20;i_61 += 1)
                        {
                            var_72 |= ((-(var_3 / var_8)));
                            arr_228 [3] [i_57] [4] [i_59] [i_61] = (var_9 ^ var_5);
                        }
                    }
                }
            }
            arr_229 [i_57] [i_57] = ((((((var_5 <= var_5) || (!var_0)))) & ((((max(var_4, var_8))) ^ ((min(1, var_4)))))));

            for (int i_62 = 1; i_62 < 1;i_62 += 1)
            {
                arr_232 [4] [4] [i_57] [i_57] = ((min(var_8, (var_4 - var_4))) == ((min(var_5, (var_2 || var_7)))));
                var_73 = ((!((((((max(var_2, var_6)))) * (var_9 % var_9))))));
            }
            for (int i_63 = 2; i_63 < 19;i_63 += 1)
            {
                var_74 = -112;
                var_75 = ((18014398509481983 >= (max((((var_7 + 2147483647) >> (var_2 + 23496))), var_5))));
                arr_235 [i_57] [i_57] = (-(4294959115 | -31752));
            }
            var_76 = (min(-var_3, (((((max(var_4, var_8))) > var_4)))));
            arr_236 [i_57] [i_57] = (max(((~((var_3 >> (var_4 - 104))))), ((max((var_6 * var_6), (var_2 + var_1))))));
        }
        /* LoopNest 2 */
        for (int i_64 = 0; i_64 < 20;i_64 += 1)
        {
            for (int i_65 = 0; i_65 < 20;i_65 += 1)
            {
                {
                    var_77 = (max((-32767 - 1), ((-((max(var_7, var_1)))))));
                    arr_241 [i_65] [i_64] [i_42 - 1] [i_42 - 1] = (max(-var_1, ((((var_1 || var_9) >= (min(var_10, var_9)))))));
                }
            }
        }
    }
    #pragma endscop
}
