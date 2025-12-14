/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_10 = (((((var_2 ? 1259852196 : var_7))) >= ((var_8 ? (max(6990176511096985541, var_2)) : var_7))));
        var_11 = (max(var_11, ((max(2097151, var_7)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    var_12 = (max(var_12, (((-(var_8 ^ var_2))))));
                    var_13 = (max(var_13, (((var_0 ? (min(var_9, ((var_8 ? var_4 : var_1)))) : var_6)))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_14 = (min((229 && 64269), ((1257 ? 64283 : 16))));
                        arr_16 [i_5] [i_4 + 2] [i_3] [i_2] [i_1] [i_1] [i_1] = (~var_3);
                        var_15 = (!1);
                    }
                }
                var_16 = (max(-var_8, 0));
            }

            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_17 = -var_6;
                    var_18 = ((var_4 ? var_0 : var_5));
                    arr_21 [1] [i_2] [i_1] = 22;
                    var_19 = (min(((var_8 ? (~var_0) : 65535)), var_0));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    arr_25 [i_1] [i_2] [i_8] [i_6] = (~var_5);
                    arr_26 [i_1] [i_1] [i_1] = ((!(((var_8 << (56107 - 56106))))));
                    var_20 = (min(var_20, (((-(((((14758930435206793382 ? var_8 : var_8))) ? ((max(146, 1264))) : var_2)))))));
                    var_21 = ((!(min(1, 1))));
                    var_22 = (var_2 ^ 3687813638502758217);
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_8));
                            var_24 = (((((1 ? 0 : var_1))) ? var_9 : ((max(var_5, var_1)))));
                            arr_32 [i_1] [i_10] [i_1] [i_1] [i_1] = 1;
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_25 = (min(var_0, ((max(122, var_9)))));
                var_26 = var_5;
            }
        }
        for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    arr_42 [i_12] [9] [i_12 + 1] [i_12] = (min(var_8, (max(var_3, 14758930435206793375))));
                    var_27 = ((-105 ? 33589 : var_8));
                }

                for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    var_28 = ((var_3 ? var_3 : 1281));
                    arr_46 [i_1] [i_12] [1] [i_12 + 2] [i_15] = ((!((max(var_0, var_0)))));

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_50 [i_12] = (min(-var_6, ((var_0 ? 1281 : var_4))));
                        var_29 *= (((((var_7 / ((min(1266, 1266)))))) ? (~var_0) : (((min(var_3, 33589))))));
                        var_30 = ((var_8 ? (((max(var_1, var_3)))) : (max(var_0, var_9))));
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                    {
                        var_31 = ((max(-6135048698723841701, var_0)) >= (((var_5 ? (!var_4) : 31947))));
                        var_32 = (max(var_32, ((((217 <= 1257) ? (((var_1 ? 69 : var_2))) : (var_9 ^ var_0))))));
                        var_33 = var_5;
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                    {
                        var_34 = (max(6135048698723841701, 6135048698723841700));
                        var_35 = ((-var_1 ? (((max(var_5, 64278)))) : 3687813638502758237));
                    }
                    var_36 = var_8;
                }
                for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
                {
                    var_37 ^= ((var_7 != (1 || var_5)));
                    var_38 = (((var_3 * var_5) * (((((11419 ? var_1 : var_5))) ? (var_2 % 14758930435206793359) : (var_5 | 31957)))));

                    for (int i_20 = 2; i_20 < 18;i_20 += 1)
                    {
                        var_39 = (!1);
                        var_40 |= (min((var_4 | var_8), ((((min(31929, 253))) ? 18 : ((var_5 ? var_0 : 0))))));
                    }
                }
                var_41 += (((((var_5 ? var_0 : var_6))) ? ((-17976 ? var_0 : var_2)) : ((17976 ? 1 : var_8))));
            }
            var_42 = var_7;
            arr_62 [i_12] [6] [i_1] = (~var_2);
            arr_63 [i_12] = var_3;
        }
        for (int i_21 = 1; i_21 < 17;i_21 += 1) /* same iter space */
        {
            var_43 = (max(var_43, (((var_0 ? var_6 : (!var_3))))));

            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {

                for (int i_23 = 1; i_23 < 18;i_23 += 1)
                {
                    var_44 = 1;
                    arr_73 [i_1] [i_21] [6] [6] [i_21] = ((var_2 ? (min((!var_3), var_0)) : (((min(1, var_5))))));
                    var_45 = -3687813638502758237;
                }
                for (int i_24 = 4; i_24 < 17;i_24 += 1)
                {
                    arr_78 [i_1] [i_21 + 1] [i_22] [i_21] = (((max(var_8, var_8))) ? ((max(var_3, var_1))) : ((min(1, var_6))));
                    var_46 = ((46086 ? 3 : ((12015 ? var_8 : 3))));
                }
                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_47 = ((var_3 ? ((((-283433178 ? 1 : var_1)))) : var_8));
                        var_48 = ((((var_3 ? var_8 : var_3))) ? ((var_8 ? var_9 : var_6)) : var_2);
                        arr_85 [i_1] [i_21] [i_22 + 1] [1] [i_25] [i_26] = (max(((var_5 ? -1547325137 : var_3)), ((max(var_3, var_9)))));
                    }
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        var_49 -= (min((!14758930435206793359), (max(var_0, (~var_1)))));
                        arr_90 [i_1] [i_1] [i_21] [i_25] [i_27] = ((var_6 ? ((var_3 ? ((max(var_3, var_9))) : (var_6 ^ 1))) : (((!var_5) ^ var_5))));
                        var_50 ^= -0;
                        arr_91 [1] [i_21] [i_21 - 1] [i_21] [i_21] [i_21] = ((max(3687813638502758265, var_7)));
                    }
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        arr_94 [i_28] [i_21] [i_22] [i_1] [i_21] [i_1] = var_9;
                        arr_95 [i_21] [i_21] = var_8;
                        var_51 = 39119;
                        arr_96 [i_1] [i_21 + 2] [i_22 - 1] [0] |= var_8;
                    }

                    for (int i_29 = 3; i_29 < 17;i_29 += 1)
                    {
                        var_52 = (~var_9);
                        var_53 = 0;
                        arr_100 [i_1] [i_21] [i_22 + 2] [i_25] [i_21] = (min(((-17976 ? var_0 : 251)), (((var_9 << (var_7 - 1678191493))))));
                    }
                    var_54 = ((((max(1, var_8))) ? (((var_5 ? var_6 : var_3))) : (40069 ^ 14758930435206793382)));
                    var_55 = (min((((~((max(0, 0)))))), 14758930435206793372));
                }
                for (int i_30 = 0; i_30 < 19;i_30 += 1)
                {

                    for (int i_31 = 0; i_31 < 19;i_31 += 1)
                    {
                        arr_106 [i_21] = (!14496);
                        var_56 = 58927;
                    }
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        var_57 = (min(var_57, (((-(1 ^ 6583))))));
                        arr_109 [i_21] = (((~var_3) ? (((min(var_1, var_5)))) : ((-2268025385215040333 ? var_3 : var_0))));
                    }
                    for (int i_33 = 0; i_33 < 19;i_33 += 1)
                    {
                        arr_113 [i_21] [i_21 + 2] [i_22] [17] [i_33] = ((min(11, var_1)));
                        var_58 = var_9;
                        var_59 ^= ((((!(!0))) ? var_6 : var_3));
                        var_60 = -var_4;
                        var_61 = ((!(!var_1)));
                    }
                    arr_114 [i_1] [i_21 + 1] [i_21] [i_21] = 28754;

                    for (int i_34 = 0; i_34 < 19;i_34 += 1)
                    {
                        var_62 = (((max(var_9, var_6))));
                        var_63 = (((var_1 || var_6) == (min(var_1, var_0))));
                    }
                }

                for (int i_35 = 3; i_35 < 18;i_35 += 1)
                {

                    for (int i_36 = 1; i_36 < 16;i_36 += 1)
                    {
                        var_64 = ((-6584 ? 36382 : 23));
                        var_65 = var_8;
                    }
                    for (int i_37 = 0; i_37 < 1;i_37 += 1)
                    {
                        var_66 -= (min(14758930435206793382, 49736));
                        var_67 = var_4;
                        var_68 = (min(var_68, ((((var_9 > var_4) ? var_8 : ((max(var_2, var_9))))))));
                        var_69 = (((!var_5) ? (((var_4 ? -25538 : (var_3 ^ var_6)))) : (max((~var_1), var_0))));
                    }
                    var_70 = var_5;
                    arr_129 [i_1] [i_21] [i_22 + 1] [i_21] = (min(((var_8 ? 0 : var_5)), ((-24 ? var_5 : var_4))));
                }
                for (int i_38 = 1; i_38 < 18;i_38 += 1)
                {
                    arr_132 [i_21] [i_22 - 1] [2] [i_21] = (max(((7086955507435117038 ? 251 : ((max(-12, 0))))), -25549));
                    var_71 = (!var_8);
                }
            }

            for (int i_39 = 0; i_39 < 19;i_39 += 1)
            {
                var_72 = (max(var_72, (-3874623203006182332 / var_6)));
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 19;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 19;i_41 += 1)
                    {
                        {
                            arr_141 [i_1] [i_1] [i_1] [i_1] [i_1] [i_21] [i_1] = (((((var_2 ? 1 : var_7))) ? (((max(var_1, var_6)))) : (((-127 - 1) ? var_0 : 274877906943))));
                            var_73 = ((((min(var_6, -126)))) >= (max((min(1, 274877906943)), ((max(-7, 1))))));
                            arr_142 [i_1] [i_21] [i_39] [i_40] [i_21] = var_0;
                            arr_143 [i_21] = ((((max(17, 13))) ? (((((max(21, 1))) ? ((max(var_1, var_4))) : -25532))) : (max(var_8, -8496788521451791489))));
                        }
                    }
                }
            }
            for (int i_42 = 0; i_42 < 19;i_42 += 1)
            {

                for (int i_43 = 0; i_43 < 19;i_43 += 1)
                {

                    for (int i_44 = 0; i_44 < 19;i_44 += 1)
                    {
                        var_74 -= 16;
                        arr_150 [i_1] [i_21] [i_21] [i_43] [i_43] [i_44] = ((!((min(13917, var_2)))));
                        var_75 = ((((var_7 ? 1 : var_5)) / ((max(var_1, (3687813638502758243 && var_0))))));
                    }
                    for (int i_45 = 3; i_45 < 18;i_45 += 1)
                    {
                        arr_153 [i_21] = (min(((max((max(-15869687, var_7)), 119))), ((var_5 ? ((var_4 ? 1 : 3687813638502758237)) : var_9))));
                        var_76 = -var_7;
                        arr_154 [i_1] [i_21] [i_42] [i_43] = (((var_9 + var_1) ^ (~var_5)));
                    }
                    for (int i_46 = 0; i_46 < 19;i_46 += 1)
                    {
                        var_77 = (min(var_77, (((!(~var_3))))));
                        var_78 += (((((var_1 ? (var_9 / var_6) : ((max(17, var_2)))))) ? (max((~var_6), 12)) : (~-13933)));
                    }
                    arr_158 [i_1] [i_1] [i_21] [i_1] [i_1] = var_1;
                    var_79 = ((((137 + 51605) ? var_3 : var_0)));
                    var_80 = (min((var_0 * 0), (((var_7 ? var_2 : var_9)))));
                }
                for (int i_47 = 0; i_47 < 19;i_47 += 1) /* same iter space */
                {

                    for (int i_48 = 2; i_48 < 16;i_48 += 1) /* same iter space */
                    {
                        arr_167 [i_21] [i_47] [i_42] [i_21] [i_21] = ((((max(0, (max(1, var_1))))) ? (!119) : var_9));
                        var_81 = (min(181, 744688644));
                    }
                    for (int i_49 = 2; i_49 < 16;i_49 += 1) /* same iter space */
                    {
                        arr_170 [i_42] [i_21] = var_9;
                        var_82 -= 1;
                    }
                    var_83 = (((((min(-8, 1)))) + var_0));
                }
                for (int i_50 = 0; i_50 < 19;i_50 += 1) /* same iter space */
                {
                    var_84 = ((1 ? (!137) : (!51639)));
                    arr_174 [i_1] [i_21 + 2] [i_21] = (min((((var_7 ? var_1 : var_6))), (min(var_5, var_0))));
                    var_85 = (max(var_85, (((var_5 ? ((((((-13 ? -1 : 13)) + 2147483647)) << (((-19290 & 118) - 38)))) : -37)))));
                }
                for (int i_51 = 0; i_51 < 19;i_51 += 1) /* same iter space */
                {
                    var_86 = (min(var_86, (14 & 1)));

                    for (int i_52 = 0; i_52 < 1;i_52 += 1) /* same iter space */
                    {
                        arr_182 [i_21] [i_21] [i_42] [i_51] [i_52] = ((~(min((~var_2), (min(var_3, var_0))))));
                        arr_183 [i_1] [i_1] [i_21] = ((~(max(1, var_8))));
                    }
                    for (int i_53 = 0; i_53 < 1;i_53 += 1) /* same iter space */
                    {
                        var_87 = ((1 ? 127 : 49482));
                        var_88 = (min(var_88, ((((var_7 ? var_7 : var_6))))));
                    }
                    for (int i_54 = 0; i_54 < 1;i_54 += 1) /* same iter space */
                    {
                        var_89 = ((((max(100, var_0))) ? ((min(12, 1))) : ((max(var_3, 11488)))));
                        var_90 = (max(var_4, (min(10, var_7))));
                    }
                    for (int i_55 = 0; i_55 < 1;i_55 += 1) /* same iter space */
                    {
                        var_91 ^= ((+((((~var_4) <= var_6)))));
                        var_92 -= var_1;
                        arr_192 [i_1] [i_21] [i_55] [i_42] [i_21] = (((var_5 && var_6) ? (((min(var_1, var_5)))) : ((1 ? var_0 : 42631))));
                    }
                }
                /* LoopNest 2 */
                for (int i_56 = 0; i_56 < 19;i_56 += 1)
                {
                    for (int i_57 = 0; i_57 < 19;i_57 += 1)
                    {
                        {
                            var_93 = ((-((var_4 ? var_1 : var_1))));
                            var_94 = var_8;
                            var_95 = (max(((var_9 ? var_3 : 0)), (!var_1)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_58 = 4; i_58 < 17;i_58 += 1)
            {
                for (int i_59 = 0; i_59 < 19;i_59 += 1)
                {
                    {
                        var_96 = (((((!var_6) ? 1 : var_8)) != (((18 << (var_2 - 9906))))));
                        arr_206 [i_58] [i_21] = ((((var_7 ? var_7 : -5858015985228676208)) & (1 && var_5)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_60 = 0; i_60 < 19;i_60 += 1)
        {
            for (int i_61 = 2; i_61 < 17;i_61 += 1)
            {
                for (int i_62 = 0; i_62 < 19;i_62 += 1)
                {
                    {
                        var_97 = (-((max(-50, 1))));
                        var_98 = var_7;
                        var_99 = (min(var_2, (((((var_7 ? var_3 : var_0))) ? var_3 : -var_5))));
                    }
                }
            }
        }
    }
    for (int i_63 = 0; i_63 < 19;i_63 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_64 = 1; i_64 < 17;i_64 += 1)
        {
            for (int i_65 = 0; i_65 < 19;i_65 += 1)
            {
                for (int i_66 = 0; i_66 < 0;i_66 += 1)
                {
                    {
                        arr_227 [i_64] [i_64 - 1] [i_66] = ((max(var_7, 1)));

                        for (int i_67 = 0; i_67 < 1;i_67 += 1)
                        {
                            arr_232 [i_67] [i_64 - 1] [i_64] [i_66] [i_67] = 392345671;
                            var_100 = var_7;
                            arr_233 [i_64] [1] [i_65] [1] [i_67] = ((51607 ? var_6 : (max(var_8, var_7))));
                            var_101 = var_0;
                        }
                        for (int i_68 = 0; i_68 < 1;i_68 += 1)
                        {
                            var_102 = (max(((((max(1, var_2))) ? var_3 : ((1 ? -9053 : -14)))), ((max(var_6, 152)))));
                            arr_238 [i_63] [i_64] [i_65] [i_66 + 1] [i_64] = (((var_8 % var_0) || (-115 ^ -392345649)));
                        }

                        for (int i_69 = 0; i_69 < 19;i_69 += 1)
                        {
                            arr_242 [i_63] [1] [i_64] [i_65] [i_65] [i_69] [i_64] = (~-2932296464258118919);
                            var_103 = ((((var_3 ? var_0 : var_2)) / (((204 ? 15 : 1)))));
                        }
                        for (int i_70 = 0; i_70 < 19;i_70 += 1)
                        {
                            var_104 ^= ((((var_1 ? var_6 : var_2)) < ((161 ? -392345672 : var_9))));
                            var_105 = (min(((max(var_9, (max(var_2, var_5))))), ((((min(var_8, 5))) ? (var_8 >> 1) : (((-392345671 ? var_2 : 1)))))));
                            var_106 = (max(((max(var_3, var_6))), ((var_6 ? var_7 : var_4))));
                        }
                        for (int i_71 = 2; i_71 < 16;i_71 += 1)
                        {
                            var_107 *= ((((((var_0 ? 322895552 : var_6)) == ((1 ? var_2 : var_2)))) ? ((max(94, var_2))) : ((var_1 ? ((1 ? 1 : 5)) : var_1))));
                            arr_247 [i_63] [i_64 - 1] [i_64] [i_71] [i_71] [i_63] [i_71] = var_7;
                        }
                        for (int i_72 = 3; i_72 < 17;i_72 += 1)
                        {
                            var_108 = (max(var_108, ((min(((var_2 ? var_6 : var_4)), ((var_2 ? var_6 : 15)))))));
                            arr_251 [i_63] [9] [i_64] [i_65] [i_66] [i_64] = var_4;
                            var_109 = var_9;
                            var_110 += ((-((max(5, var_9)))));
                        }
                    }
                }
            }
        }
        arr_252 [i_63] = var_7;
        arr_253 [i_63] = ((var_2 >= ((1 ? (1 - 72) : 31))));
        /* LoopNest 2 */
        for (int i_73 = 0; i_73 < 19;i_73 += 1)
        {
            for (int i_74 = 3; i_74 < 17;i_74 += 1)
            {
                {
                    arr_259 [i_63] [i_73] [i_74 - 1] = (((((-6 ? var_0 : var_7))) ? (-392345645 - var_0) : var_3));
                    var_111 = var_5;
                }
            }
        }
    }
    var_112 ^= var_6;
    #pragma endscop
}
