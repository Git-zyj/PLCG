/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        var_20 = (min(var_15, (max((var_18 >= var_3), var_6))));
                        var_21 = var_9;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_22 = var_9;
                        arr_21 [i_0] [i_4 - 1] [i_5] [i_6] = ((((max(var_2, var_6))) ? ((((((max(var_8, var_19))) <= (var_5 * var_13))))) : (max((max(127, 529963248500628497)), (var_17 & -10869)))));
                    }
                }
            }
        }
        var_23 = ((var_8 ? (-22 * var_1) : (((((var_2 ? var_4 : 64)) ^ var_5)))));
        var_24 = (max(((var_9 | ((var_13 ? 12918415918248999040 : var_0)))), ((min(1557987926294278947, var_9)))));
    }

    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_25 ^= (((((((-36 ? 21504 : 65535))) ? (max(var_18, 35)) : -65)) + ((max(424794443, ((81 ? 17 : var_12)))))));
        var_26 = (max(((max(-102, -10869))), (max((((-10856 + 2147483647) >> (32742 - 32734))), var_12))));
        arr_24 [i_7] = var_13;
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        var_27 = (max(var_27, ((max((max(((max(var_3, var_2))), ((var_19 ? var_14 : -1)))), (var_7 ^ var_13))))));

        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            var_28 = (min(var_14, (var_10 > -7987463446420315802)));
            arr_30 [i_8] [i_9] [i_9] = (((((max(-1, var_18)) % (((var_8 ? 69 : var_16))))) != (362315681 ^ 44031)));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_34 [i_8 + 2] |= ((-7 | (((var_1 | var_5) ? 115 : var_6))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {
                        var_29 = (var_3 != var_2);

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_30 = var_6;
                            var_31 = ((0 ? var_1 : var_5));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                var_32 = (max(var_32, (((-18053 >= (1776917735 <= var_16))))));
                arr_46 [i_8] [i_10] [i_10] [i_8] = (var_19 / var_8);
                var_33 += var_0;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        {
                            var_34 = ((var_5 ? (var_11 * 27175) : var_13));
                            var_35 = (1 % var_12);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_36 ^= var_6;
            var_37 = ((var_6 ? 1 : -32744));

            for (int i_18 = 1; i_18 < 22;i_18 += 1)
            {
                var_38 = ((var_9 ? (21447 % var_1) : var_3));

                for (int i_19 = 1; i_19 < 21;i_19 += 1)
                {
                    arr_60 [i_8] [i_17] [i_17] [i_19 - 1] = ((((var_5 >= (-127 - 1))) ? (-2048 + var_6) : var_11));

                    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                    {
                        var_39 = (var_1 ? var_6 : -1);
                        var_40 -= var_9;
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
                    {
                        var_41 = ((var_13 ? -32021 : (var_7 != var_6)));
                        var_42 -= (var_18 % var_2);
                        var_43 ^= ((var_2 ? var_1 : var_12));
                        arr_67 [2] [2] [i_18] [i_17] [i_21] = (127 ? ((21492 ? 21506 : var_16)) : var_7);
                        arr_68 [i_17] [i_17] [i_21] = (((((var_7 ? var_2 : 24846))) ? var_15 : 65534));
                    }
                }
                arr_69 [i_18] [i_17] [i_8] [i_8] = ((var_15 ? ((var_10 ? var_5 : var_1)) : ((var_18 ? var_9 : var_17))));
            }
            arr_70 [i_8] [19] = (((21486 | var_14) ? -105 : var_16));
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 9;i_22 += 1)
    {
        for (int i_23 = 1; i_23 < 8;i_23 += 1)
        {
            {

                /* vectorizable */
                for (int i_24 = 1; i_24 < 9;i_24 += 1)
                {
                    arr_80 [i_22 + 1] [i_22] [i_22] = ((var_16 == ((var_14 ? 26643 : var_11))));
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 10;i_26 += 1)
                        {
                            {
                                arr_86 [i_22] [i_22] [i_22] = (((((var_2 << (var_15 + 47)))) ? ((var_13 ? var_12 : var_17)) : 170));
                                var_44 -= (((var_13 * var_16) + var_9));
                                var_45 -= ((var_18 > -2436019572693463736) <= ((var_3 ? 17 : -24828)));
                                var_46 -= (var_1 != -5174936683878508913);
                            }
                        }
                    }
                    arr_87 [i_22] [i_23] [i_22] [i_24] = ((24866 ? -5322961791175430460 : 42));
                    var_47 = ((2981788955 ? ((42 ? var_7 : var_0)) : ((var_7 ? var_12 : 0))));
                    arr_88 [i_22] [i_23] [i_24] = var_13;
                }
                for (int i_27 = 1; i_27 < 9;i_27 += 1)
                {
                    var_48 = ((((var_4 ? (max(var_18, var_6)) : var_14)) * var_5));

                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {

                        for (int i_29 = 3; i_29 < 9;i_29 += 1)
                        {
                            arr_97 [i_22] [i_23] = ((((max(0, ((1 ? var_4 : var_12))))) >= (576460735123554304 / var_2)));
                            arr_98 [i_22] [i_23] [i_22] [2] [i_29] = ((var_17 ? var_11 : var_9));
                            var_49 ^= 98;
                            var_50 += (((((((var_4 ? var_0 : 6172))) ? ((var_8 ? var_18 : 1)) : 44501)) * ((var_0 ? var_14 : ((var_12 ? var_18 : var_10))))));
                        }
                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 10;i_30 += 1)
                        {
                            arr_102 [i_30] [8] [i_22] [3] [i_22] [i_22 + 1] [i_22] = ((var_5 ? ((-22 ? var_11 : var_12)) : var_2));
                            arr_103 [i_22] [i_22] = (var_8 | -31879);
                            arr_104 [i_22 + 1] [i_22] [i_27] [i_28] [i_30] = var_5;
                            var_51 = -1;
                            var_52 = (var_15 * 0);
                        }
                        for (int i_31 = 1; i_31 < 9;i_31 += 1)
                        {
                            arr_108 [i_22] [i_28] [i_27] [i_23 + 2] [i_22] [i_22] = (min(var_13, (max((8 ^ var_18), (((var_10 << (var_3 - 156))))))));
                            arr_109 [i_22] [i_28] [i_27] [i_23 + 2] [i_23] [i_22] = (((var_10 || 0) ? ((((max(var_0, 1071624230)) == (var_6 >= var_17)))) : ((111 ? 32760 : 1))));
                            var_53 |= (((max(((min(var_8, var_10))), ((var_10 ? var_13 : 18446744073709551609))))) ? var_17 : (((((13116 ? var_1 : var_2))) ? ((max(var_10, var_13))) : var_4)));
                        }
                        for (int i_32 = 2; i_32 < 7;i_32 += 1)
                        {
                            var_54 = (var_8 >= var_7);
                            var_55 |= ((min(var_10, (var_12 * var_0))));
                            arr_113 [i_22] = (((max((max(5623830172608912782, 9094182684896846929)), 5623830172608912782)) >> (var_18 <= var_0)));
                            var_56 = (max(var_56, 19));
                            var_57 = (max(var_57, var_12));
                        }
                        var_58 -= (((var_18 > var_14) % ((var_9 ? (((max(var_7, var_13)))) : (min(var_6, var_0))))));
                    }

                    for (int i_33 = 1; i_33 < 9;i_33 += 1)
                    {

                        for (int i_34 = 0; i_34 < 10;i_34 += 1)
                        {
                            arr_120 [i_22 + 1] [i_22] [i_27] [i_33 - 1] [i_34] = var_12;
                            arr_121 [i_22] [i_23] [i_22] [i_33] [i_34] = (max((max(-3, (var_15 / var_15))), ((var_1 ? ((9352561388812704686 ? var_8 : var_9)) : ((max(var_15, var_11)))))));
                        }
                        for (int i_35 = 0; i_35 < 10;i_35 += 1)
                        {
                            arr_124 [2] |= ((var_7 ? (((1 ? var_12 : var_16))) : (((var_18 > 81) * (max(var_18, var_12))))));
                            var_59 = (max(var_59, (((-47 ? var_18 : 243)))));
                            var_60 = (min(var_60, (var_15 != 524287)));
                            var_61 = ((((max((((-1 + 2147483647) >> (var_9 - 28716))), ((max(var_0, var_2)))))) ? (max(var_11, -868517623)) : ((((35024 ? var_14 : -13739)) % ((var_5 ? var_13 : 1936))))));
                            arr_125 [i_22] = ((-25522 ? (min((var_11 && var_0), ((var_11 ? var_3 : var_0)))) : (((var_1 ? 0 : -25522)))));
                        }
                        for (int i_36 = 0; i_36 < 10;i_36 += 1) /* same iter space */
                        {
                            var_62 = min(((max(((var_17 ? var_12 : var_5)), ((max(var_17, var_10)))))), (min(((var_11 ? var_10 : -923131387757500030)), (var_10 || var_12))));
                            arr_128 [i_22 + 1] [i_22] [i_22 + 1] [i_22] [i_22] = (524303 - -1);
                            var_63 ^= (max(((50201 ? -16669 : 1)), ((max((min(43, 127)), -14)))));
                        }
                        for (int i_37 = 0; i_37 < 10;i_37 += 1) /* same iter space */
                        {
                            var_64 = (max(var_64, var_6));
                            arr_131 [i_22] [i_23 + 2] [1] [i_33 - 1] = (min((max(3415199315, 127)), ((min(var_0, 63)))));
                            var_65 = ((var_17 ? ((max((max(var_4, 13739)), var_15))) : ((-18469 ? (max(var_14, var_3)) : ((var_2 ? var_4 : var_14))))));
                        }
                        var_66 = var_14;
                    }
                }
                for (int i_38 = 2; i_38 < 6;i_38 += 1) /* same iter space */
                {
                    var_67 = ((var_8 != ((max(1, 4742781330683371268)))));

                    for (int i_39 = 0; i_39 < 10;i_39 += 1)
                    {
                        arr_136 [i_39] [i_23] [i_38 + 1] [i_22] = (max(((18446744073709551600 ? (var_18 % 65161) : (371 >= var_8))), ((max(var_16, var_16)))));
                        arr_137 [i_22] [i_23 - 1] [i_38] [i_22] = (((((var_1 + 2147483647) << (var_6 - 6869145983340667359)))) ? (min(100, 4612252220918360999)) : (((1 ? var_14 : var_10))));
                    }
                    /* vectorizable */
                    for (int i_40 = 0; i_40 < 10;i_40 += 1)
                    {

                        for (int i_41 = 0; i_41 < 10;i_41 += 1)
                        {
                            arr_142 [i_41] [i_40] [i_22] [i_23 - 1] [i_22] [i_22] [i_22 - 1] = (var_2 / 29);
                            var_68 = (((var_18 + var_13) >> ((((35043 ? 84 : 116)) - 74))));
                            var_69 = (max(var_69, var_8));
                            arr_143 [i_41] [i_38] [i_22] [8] [i_41] [i_38] = (var_10 >= var_8);
                        }
                        var_70 = (((var_7 ? var_0 : var_5)));
                    }
                    var_71 = min((((((max(7, var_16)))) | (max(var_18, var_17)))), (var_0 << var_17));

                    for (int i_42 = 0; i_42 < 10;i_42 += 1)
                    {
                        var_72 -= ((((5805792327672383624 ? var_11 : 96))) ? ((var_11 ? -115 : 2)) : ((max(var_1, var_19))));
                        var_73 ^= var_16;
                    }
                }
                /* vectorizable */
                for (int i_43 = 2; i_43 < 6;i_43 += 1) /* same iter space */
                {

                    for (int i_44 = 3; i_44 < 8;i_44 += 1)
                    {
                        arr_153 [i_22] [i_22] = ((65156 ? var_18 : 30511));
                        var_74 = (max(var_74, (((-103 <= (-17395 % -1))))));
                    }

                    for (int i_45 = 1; i_45 < 8;i_45 += 1)
                    {
                        var_75 = var_18;
                        arr_157 [i_22] [i_22] = 255;
                    }
                    for (int i_46 = 1; i_46 < 9;i_46 += 1)
                    {
                        var_76 = var_14;

                        for (int i_47 = 0; i_47 < 10;i_47 += 1)
                        {
                            var_77 = (max(var_77, (((var_3 ? var_4 : var_10)))));
                            arr_164 [i_22] [i_47] [i_22] [i_22] [i_47] [i_46 - 1] [i_23] = var_16;
                        }
                        var_78 = (max(var_78, var_12));
                        var_79 = var_17;
                        arr_165 [i_22] [i_23] [i_43] [i_46 + 1] = (var_10 <= var_10);
                    }
                    for (int i_48 = 0; i_48 < 10;i_48 += 1)
                    {
                        var_80 = (var_6 - var_10);

                        for (int i_49 = 0; i_49 < 10;i_49 += 1)
                        {
                            var_81 += var_8;
                            var_82 ^= var_1;
                            var_83 = 78;
                            var_84 = -51;
                            arr_170 [i_22] [i_23] [i_22] [i_43] [i_22] [i_49] = (var_19 != 47);
                        }
                        for (int i_50 = 0; i_50 < 10;i_50 += 1)
                        {
                            arr_174 [i_22] [i_22] [i_43] [i_48] = ((379 ? 41 : -1));
                            var_85 += -67;
                            var_86 ^= var_8;
                            arr_175 [i_22] [i_22 + 1] [0] [i_43] [i_22] [i_50] = ((var_10 ? ((-72 ? var_3 : var_1)) : 53));
                        }
                        var_87 = var_19;
                        arr_176 [i_48] [i_43] [i_22] [i_22] [i_22] = var_6;
                    }
                    for (int i_51 = 0; i_51 < 10;i_51 += 1)
                    {
                        arr_181 [i_22 - 1] [i_23 - 1] [i_43] [i_43] [i_22] [8] = (var_9 + var_14);

                        for (int i_52 = 0; i_52 < 10;i_52 += 1)
                        {
                            var_88 = 81;
                            arr_184 [i_22] [i_23] [i_22] [i_22] [i_23] = (((var_12 * var_6) ? 0 : ((var_8 ? var_16 : var_1))));
                            arr_185 [i_22] [i_23] [i_22 - 1] = (var_17 > var_7);
                            arr_186 [i_22] = (((((var_14 ? var_5 : var_3))) ? var_4 : var_18));
                            var_89 = ((var_5 ? var_5 : (1770332998 / -8824573216807780662)));
                        }

                        for (int i_53 = 0; i_53 < 10;i_53 += 1)
                        {
                            var_90 = ((var_18 >> (42259 - 42222)));
                            arr_189 [i_22] [i_22] = var_13;
                        }
                    }
                    var_91 = (var_10 == var_13);
                    /* LoopNest 2 */
                    for (int i_54 = 3; i_54 < 6;i_54 += 1)
                    {
                        for (int i_55 = 1; i_55 < 1;i_55 += 1)
                        {
                            {
                                arr_196 [i_22 + 1] [1] [i_22 - 1] [i_22 + 1] [i_22] [i_22] = ((1 ? var_11 : var_13));
                                var_92 = (min(var_92, (((-232616159 ? -1 : 882478368)))));
                                var_93 = (max(var_93, (51607 >= -27)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_56 = 0; i_56 < 1;i_56 += 1)
                {
                    for (int i_57 = 1; i_57 < 7;i_57 += 1)
                    {
                        {
                            arr_203 [i_22] [1] [i_22] [i_57 - 1] = min(var_15, ((var_7 ? (var_5 % var_11) : ((59685 ? -115 : -12067)))));
                            var_94 ^= (((((var_17 ? var_13 : var_9))) && (((var_8 ? var_4 : var_6)))));
                            var_95 += ((min((max(var_14, var_8), (max(4075, 808567533))))));
                        }
                    }
                }
            }
        }
    }
    var_96 = (max(var_17, var_12));
    var_97 = var_17;
    #pragma endscop
}
