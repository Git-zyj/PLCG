/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = (min(var_12, (max(var_8, (((var_3 ? var_0 : var_1)))))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                arr_7 [i_1] [i_1] = (((!var_8) > 8492596035001045802));
                arr_8 [i_0] [i_1] = (1 ? 8192 : 22441);
            }
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                arr_11 [i_0] [i_1] [i_1] [i_3] = (((((!(var_6 + var_11)))) < (min((~-20045), ((var_2 ? var_2 : var_2))))));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_13 += ((!(((var_8 ? var_6 : var_4)))));
                        var_14 = (max(var_14, (((~(var_0 / var_11))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_15 = (max(var_15, var_4));
                        var_16 = ((var_8 ? ((var_6 ? var_11 : var_6)) : var_1));
                        var_17 += ((10006885587036377718 ? -32761 : 18175));
                        var_18 = ((var_4 ? var_4 : var_9));
                    }
                    var_19 = (min(var_19, (((var_7 ? var_6 : var_1)))));

                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        arr_23 [i_0] [i_4] [i_3] [i_3] [i_1] [i_0] |= (~var_1);
                        var_20 = (min(var_20, ((((var_8 + 2147483647) >> var_2)))));
                        var_21 = (var_8 ? var_2 : var_8);
                        arr_24 [i_0] [i_0] [i_3 - 1] [i_0] [i_7] [i_7] [i_7] |= (var_3 % var_4);
                    }
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_22 = ((max(var_2, ((var_0 ? var_6 : var_3)))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 |= var_11;
                        arr_30 [i_3 - 1] [i_3 + 1] [i_9] [i_3 + 1] [i_3 + 1] = ((((((!(var_2 % var_1))))) % ((((min(var_1, var_6))) | ((4092 ? 0 : 3541672587))))));
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_10 - 1] = (min((var_7 / var_2), (max((~var_0), var_4))));
                        var_24 &= var_4;
                    }
                    arr_34 [i_8] [i_8] = ((((max(var_5, var_0))) << ((((var_5 ? var_4 : var_10)) - 4129850056))));
                    arr_35 [i_0] [i_0] [i_3] [i_0] = min(1, 1);
                    var_25 = (min(var_25, 11295474446894047349));
                }

                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    var_26 = (max(var_1, var_1));
                    var_27 += var_3;

                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_28 = var_9;
                        var_29 = (max(var_29, var_9));
                    }
                    for (int i_13 = 2; i_13 < 24;i_13 += 1)
                    {
                        var_30 = (min(var_30, (((((min(var_6, var_9))) / (((var_1 / var_11) * (max(var_10, var_5)))))))));
                        var_31 = var_7;
                    }
                    arr_47 [i_0] [i_1] [i_0] [i_11] = (((~var_11) || ((max((max(var_10, var_5)), (var_0 <= var_2))))));
                    var_32 = (max(var_32, ((((min(var_1, var_7))) ? ((var_10 >> (var_7 + 89))) : (var_6 && var_6)))));
                }
                var_33 = var_4;

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_34 *= (max((var_0 ^ var_11), (((var_6 >= var_9) ? var_0 : var_6))));
                    var_35 &= (((((var_6 * var_3) ? var_9 : (min(var_2, var_10)))) / ((max((var_4 / var_6), (((var_5 ? var_0 : var_8))))))));
                    var_36 = (max(var_8, (max(var_0, var_8))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_37 = (var_7 <= var_2);
                    arr_55 [i_15] [i_1 - 1] = ((var_6 == (14250796390726129425 > 0)));
                    var_38 = (max(var_38, var_3));
                    var_39 = (max(var_39, (((var_3 ? var_10 : var_9)))));
                }
                for (int i_16 = 1; i_16 < 24;i_16 += 1)
                {
                    var_40 = (min((((max(var_4, var_3)))), (min((max(var_3, var_4)), ((max(var_3, var_2)))))));
                    arr_60 [i_0] [i_1] [i_3] [i_16] = (max(((10015 % (max(-120, 6442450944)))), (((13826429026635368612 ? 167 : 10)))));

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_41 += ((-(var_9 - var_1)));
                        var_42 |= 7916;
                        arr_63 [i_0] [i_1 - 1] [i_3] [i_16 + 1] [i_17] = (var_2 ? (((min(var_0, var_3)) ? ((var_4 ? var_9 : var_5)) : var_2)) : (((max((max(27, 0)), -119)))));
                        var_43 += ((var_10 ? ((var_10 ? var_6 : var_10)) : (((var_5 ? var_2 : var_5)))));
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        arr_66 [i_0] [i_18] = (((max((min(302380374, 1)), -1987427300)) / (((0 ? -29877 : 808984332)))));
                        var_44 = ((min((((1 ? 9218868437227405312 : 0)), (var_11 / var_10)))));
                    }
                    for (int i_19 = 1; i_19 < 23;i_19 += 1)
                    {
                        arr_69 [i_0] [i_1] [i_3] [i_3] [i_19] |= ((((var_6 ? var_8 : (max(var_10, var_9))))) ? (((((var_4 ? var_5 : var_3))))) : (((var_5 % var_8) ? (var_11 >= var_6) : (max(var_4, var_8)))));
                        var_45 *= (max(var_6, (((-7347340245257531980 ? 32745 : 5282)))));
                        var_46 = ((var_7 ? var_10 : ((var_3 ? var_9 : var_1))));
                    }
                    var_47 = var_11;
                }
            }
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {

            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                var_48 *= var_8;
                arr_75 [i_21] [i_20] [i_21] = (((max(var_3, var_6))));
                var_49 = max(-50, 643005753);

                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    var_50 |= -var_7;
                    var_51 = (max((max(var_9, var_3)), ((max((max(var_1, var_2)), var_3)))));

                    for (int i_23 = 1; i_23 < 23;i_23 += 1)
                    {
                        arr_81 [i_20] [i_21] = (((min(var_2, var_8)) / var_1));
                        var_52 ^= (max(var_11, ((((max(var_8, var_0))) ? ((var_3 ? var_4 : var_4)) : (((var_9 ? var_2 : var_8)))))));
                    }
                    for (int i_24 = 1; i_24 < 22;i_24 += 1)
                    {
                        var_53 &= (((((((var_0 ? var_6 : var_3))) ? (((var_9 ? var_4 : var_2))) : var_2)) / (((-9223372036854775807 - 1) ? 9223372036854775807 : -6035081013382022908))));
                        var_54 ^= (min(var_1, (min(var_0, var_10))));
                        arr_84 [i_0] [i_0] [i_0] [i_22] [i_21] = 1453571085;
                        var_55 = (((((var_2 || var_7) && ((max(var_0, var_6))))) ? var_3 : (max(var_0, (var_7 * var_10)))));
                    }
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        arr_87 [i_21] [i_20] [i_21 - 1] [i_22] [i_25] [i_22] [i_25] = (((var_6 ? ((var_7 ? var_1 : var_10) : (max(var_3, var_10))))));
                        var_56 = (max(var_56, ((max(((var_11 ? var_3 : var_8)), var_2)))));
                    }
                    arr_88 [i_22] [i_0] [i_21] [i_0] [i_0] = ((-(min(8387836277110638859, 757482356))));
                    var_57 = (((max(7344409987093849981, 22)) >> (((1266273815 / 1) - 1266273761))));
                }
                for (int i_26 = 2; i_26 < 21;i_26 += 1)
                {
                    var_58 = ((((min(var_7, var_2))) <= (((!(((var_4 ? var_0 : var_9))))))));
                    var_59 *= (max(var_8, (((((var_3 ? var_5 : var_6))) ? -var_7 : (max(8531475722639042172, 1))))));
                }
                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        var_60 = (max((((var_6 ? var_8 : var_2))), (var_4 * var_10)));
                        arr_98 [i_21] = ((((var_0 + ((var_9 ? var_5 : var_9)))) + var_4));
                        arr_99 [i_21] [i_21] = var_8;
                    }
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_103 [i_27 - 1] [i_27 - 1] [i_21] [i_27] = ((var_1 >= ((-13661413997547173364 ? var_5 : ((var_6 ? var_1 : var_9))))));
                        var_61 = (((((-3842 && 8364814293023257857) <= (var_5 < var_11))) ? (var_0 - var_5) : ((((min(var_8, var_2))) ? var_6 : ((var_8 ? var_9 : var_4))))));
                        var_62 = (min(var_62, 1920));
                        arr_104 [i_21] [i_29] = ((((var_1 ? (-127 - 1) : 7461)) * var_5));
                    }
                    for (int i_30 = 2; i_30 < 24;i_30 += 1)
                    {
                        var_63 = (max(var_63, (((((min((max(var_4, var_2)), ((max(var_1, var_11)))))) ? (((var_8 ? var_1 : var_6))) : ((((var_2 && (((var_2 ? var_0 : var_4))))))))))));
                        arr_107 [i_30 - 2] [i_0] [i_21] [i_0] [i_0] &= (((((((var_11 ? var_0 : var_5))) & var_6)) ^ ((((~var_11) ^ ((max(1, var_3))))))));
                        var_64 = (min((max((var_1 && var_11), (min(var_1, var_5)))), (((((var_7 ? var_6 : var_6))) ? var_0 : var_11))));
                    }
                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 25;i_31 += 1)
                    {
                        arr_110 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((var_11 >> (var_6 - 7936430420053748496)));
                        var_65 = (max(var_65, (((var_11 ? var_3 : var_9)))));
                        var_66 = -1;
                    }

                    for (int i_32 = 2; i_32 < 22;i_32 += 1)
                    {
                        var_67 &= (max((((1 ? 55448 : -19032))), (var_10 / var_7)));
                        var_68 = ((((max(2451118515, (max(120, 1274400701))))) ? (min((var_11 / var_2), ((var_8 ? var_5 : var_5)))) : (((((var_7 ? var_11 : var_6))) ? var_5 : (!var_1)))));
                        arr_114 [i_0] [i_20] [i_21] [4] [i_21] = (max(((((max(var_7, var_1)) | var_3))), (((var_7 ^ var_6) ? (var_7 ^ var_10) : (((var_9 ? var_1 : var_11)))))));
                        var_69 = (max(var_69, ((((~var_10) ? (((var_4 ? var_11 : var_3))) : (min(var_10, var_4)))))));
                        arr_115 [i_0] [i_21] [i_21] [i_27] [i_27] = (((min(var_6, (var_6 & var_2))) ^ (((((517210327 << (-9151675891067049807 + 9151675891067049815))) >> ((((var_1 ? var_8 : var_3)) + 897339721)))))));
                    }
                }

                for (int i_33 = 2; i_33 < 23;i_33 += 1)
                {
                    var_70 += (((((~((var_9 ? var_1 : var_7))))) ? ((~(max(var_3, var_8)))) : ((((max(0, -62))) ? (var_2 + var_7) : var_1))));
                    arr_118 [i_20] |= var_8;
                }
            }
            for (int i_34 = 2; i_34 < 23;i_34 += 1)
            {
                var_71 *= ((((var_7 ? var_3 : var_5)) / ((max(var_8, var_1)))));
                var_72 = ((var_0 ? ((((3293737744 ? 0 : 116)))) : (((((var_6 ? var_6 : var_10))) ? (~var_11) : ((var_11 ? var_2 : var_7))))));
                arr_123 [i_0] [i_0] [i_0] [i_34] = ((((max((var_7 / var_6), ((max(var_8, var_3)))))) ? (var_8 / var_9) : ((min(var_0, ((max(var_5, var_1))))))));
            }
            for (int i_35 = 0; i_35 < 0;i_35 += 1)
            {
                arr_127 [i_0] [i_35] [i_35] [i_0] &= (((((var_8 ? var_1 : var_6))) ? (max(var_10, var_7)) : (var_6 > var_7)));
                arr_128 [2] [i_20] [i_20] &= var_6;
            }

            for (int i_36 = 3; i_36 < 24;i_36 += 1)
            {
                arr_131 [i_36] [i_0] [i_0] [i_0] = (min(((var_1 ? (var_7 * var_9) : var_0)), (((var_7 ? var_1 : var_7)))));

                for (int i_37 = 0; i_37 < 1;i_37 += 1)
                {
                    arr_134 [i_37] [19] [i_36 - 1] = ((((((((max(var_2, var_0)))) - var_10))) ? var_8 : (((-(var_11 && var_5))))));
                    var_73 = (~var_4);
                }
                /* vectorizable */
                for (int i_38 = 3; i_38 < 24;i_38 += 1)
                {
                    var_74 = (max(var_74, ((((var_8 * var_4) + ((var_1 ? var_9 : var_3)))))));
                    arr_138 [i_0] [i_20] [i_0] [i_36] [i_36] [i_20] = ((var_1 ? var_9 : var_4));
                    var_75 = (((var_11 | var_3) ? var_1 : var_0));
                }
                for (int i_39 = 0; i_39 < 0;i_39 += 1)
                {
                    arr_143 [i_39] [i_36 - 2] [i_20] [i_20] [i_0] [i_0] &= var_10;
                    var_76 |= (var_2 && ((max(((max(var_2, var_3))), var_5))));
                }

                for (int i_40 = 2; i_40 < 23;i_40 += 1)
                {
                    var_77 = (((((15 ? 3621101295 : (min(1583535613196699154, 1116976618))))) ? (var_11 / var_6) : var_1));
                    arr_146 [i_0] [15] [i_36] [i_40 + 1] [15] = (((((-var_2 ? ((510870508 ? 4228602384 : 0)) : (var_1 || var_8)))) ? (((((var_3 ? var_11 : var_3)) / var_8))) : ((var_9 ? (min(var_10, var_11)) : (min(var_9, var_7))))));
                }
            }
        }
        /* vectorizable */
        for (int i_41 = 2; i_41 < 24;i_41 += 1) /* same iter space */
        {
            var_78 = var_10;
            var_79 = var_10;
            arr_151 [i_41] [i_0] = (var_2 % var_6);
        }
        for (int i_42 = 2; i_42 < 24;i_42 += 1) /* same iter space */
        {
            var_80 = ((~((max(-1, 29)))));

            for (int i_43 = 2; i_43 < 24;i_43 += 1)
            {
                var_81 = var_0;

                for (int i_44 = 0; i_44 < 1;i_44 += 1)
                {
                    var_82 = (min(((max(var_2, var_8))), (((((var_8 ? 116 : 13)) & var_8)))));
                    var_83 = ((max(var_2, (max(var_1, var_10)))) / ((((((var_3 ? var_10 : var_7)) > (var_5 && var_2))))));
                    arr_162 [15] [15] [i_43] = max(3776, ((var_3 ? 41 : 1)));
                }
                for (int i_45 = 0; i_45 < 1;i_45 += 1)
                {
                    var_84 = (max(var_84, (max((var_4 * var_7), (((var_7 ? var_7 : var_11)))))));
                    var_85 = (max(((491520 ? (max(var_1, var_10)) : (var_7 && var_7))), (!var_10)));
                    var_86 = (min(var_86, (((var_3 ? (!var_3) : ((var_6 ? var_9 : var_11)))))));
                }
                arr_166 [i_0] [i_42] = (~-49);
                arr_167 [i_0] &= 3395511821347365327;
            }
            var_87 = (max(var_87, var_4));
        }
        arr_168 [i_0] [i_0] = (var_5 > var_8);
        arr_169 [i_0] = (max((var_2 & var_3), var_7));
        arr_170 [i_0] = (min((!var_6), ((!((max(var_6, var_3)))))));

        for (int i_46 = 1; i_46 < 24;i_46 += 1)
        {
            var_88 ^= (((var_1 ? var_2 : var_1)));

            for (int i_47 = 3; i_47 < 24;i_47 += 1)
            {
                var_89 = (min(var_89, ((((((var_11 ? (((var_2 ? var_0 : var_8))) : (var_6 | var_5)))) ? (max(var_8, (var_5 && var_4))) : ((var_7 ? ((var_8 ? var_5 : var_5)) : var_11)))))));
                arr_176 [i_46] [i_46] = (((((max(var_10, var_3))) ? var_8 : var_10)));
            }
            var_90 = (!var_1);
        }
        for (int i_48 = 1; i_48 < 23;i_48 += 1)
        {

            for (int i_49 = 0; i_49 < 25;i_49 += 1)
            {

                for (int i_50 = 2; i_50 < 24;i_50 += 1)
                {
                    arr_184 [i_0] [i_50] [i_48 - 1] = (min(((var_4 >> (var_8 + 897339710))), (((263368211 ? 1 : 1)))));
                    var_91 = (var_11 ? (max(7327916457348520460, -1)) : (((2147483638 ? 0 : 65535))));

                    /* vectorizable */
                    for (int i_51 = 1; i_51 < 23;i_51 += 1)
                    {
                        arr_188 [i_0] [i_50] = ((var_1 ? var_1 : var_6));
                        var_92 |= var_0;
                    }
                    arr_189 [i_0] [i_48] [i_49] [i_50] = (max(((!(var_0 && var_10))), ((!(((var_1 ? var_1 : var_9)))))));
                }
                arr_190 [i_0] = var_0;
            }
            for (int i_52 = 0; i_52 < 25;i_52 += 1)
            {
                arr_193 [i_0] [i_0] = (min((((1040187392 ? 32767 : 0))), (var_4 == var_0)));
                arr_194 [11] [i_0] [i_52] = var_1;
                var_93 = ((((((max(var_9, var_3)) < (var_9 ^ var_7))))) ^ ((112 ? -1 : 1933344975791289494)));
            }
            var_94 &= (1 % -629);
            /* LoopNest 2 */
            for (int i_53 = 0; i_53 < 25;i_53 += 1)
            {
                for (int i_54 = 0; i_54 < 25;i_54 += 1)
                {
                    {
                        arr_200 [i_54] [i_54] [i_54] = (max((((var_6 ? var_10 : var_6))), (((var_5 ? ((var_7 ? var_1 : var_0)) : var_0)))));

                        for (int i_55 = 1; i_55 < 22;i_55 += 1)
                        {
                            var_95 ^= (var_2 ? (min((var_11 != var_0), var_6)) : (!var_11));
                            var_96 = (max(var_96, (((((min(var_0, var_9))) ? ((min(var_0, var_11))) : -var_0)))));
                            arr_204 [i_54] [i_48 + 2] [i_53] [i_53] [i_53] [i_53] = (max(var_6, ((min(var_2, var_2)))));
                        }
                        var_97 += (4075256698 && 26469);
                    }
                }
            }
            var_98 ^= (((((~(max(var_6, var_2))))) ? (((var_5 / var_1) ? var_6 : var_10)) : (((var_9 && var_6) ? (min(var_1, var_10)) : (!3481603492157404582)))));
            var_99 = ((var_3 ? (max((max(var_4, var_9)), var_0)) : var_9));
        }
    }
    var_100 = ((((-1622760386 ^ -1) & var_0)));
    var_101 = (max(-var_0, (~var_9)));

    for (int i_56 = 0; i_56 < 13;i_56 += 1)
    {
        var_102 = 1;
        arr_207 [i_56] [i_56] |= (min(((var_9 ? var_9 : var_11)), (var_7 / var_8)));
        var_103 = (((-7080825429799040564 + 9223372036854775807) >> (3115631643558527828 - 3115631643558527815)));
    }
    for (int i_57 = 0; i_57 < 18;i_57 += 1)
    {
        var_104 = ((var_4 ? var_3 : (min(var_9, var_2))));
        var_105 = (min(var_105, var_9));
    }
    #pragma endscop
}
