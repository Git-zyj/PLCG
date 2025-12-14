/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (min(16072895808198096975, (((1 ? (arr_0 [i_0] [i_0]) : var_4)))));
        arr_3 [0] = (((((!(arr_0 [5] [i_0])))) ^ 27375));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = (var_0 >= (4272 >= var_6));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_17 [6] [i_1] [i_2] [i_0] [i_4] [i_1] [i_1] = 16072895808198096975;
                            var_13 = (max(var_13, 0));
                            arr_18 [i_0] [i_1] [3] [4] [3] [i_1] [1] = var_2;
                            var_14 *= (arr_12 [i_1] [i_3 + 2] [5] [10] [8] [i_1]);
                        }
                    }
                }
            }
            var_15 = (max(var_15, (((~(arr_12 [i_0] [i_0] [1] [i_0] [1] [i_0]))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_0] = var_5;

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_16 = var_1;

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_17 = (max(var_17, var_6));
                    var_18 ^= var_3;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_19 = var_2;
                        var_20 = var_6;
                        arr_33 [10] [10] [i_6] [i_8] [i_5] = -1;
                        arr_34 [i_0] [i_0] [1] [i_5] [10] = (arr_1 [i_0] [i_0]);
                        var_21 = (min(var_21, (arr_31 [i_9] [i_9] [i_0] [i_9] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_37 [i_0] [i_5] [8] [i_5] [10] [i_10] [1] = (arr_23 [i_0] [i_5] [6] [i_10]);
                        arr_38 [7] [7] [i_6] [i_6] [1] [i_5] [7] = ((32767 ? 1 : (((((min(4286578688, var_11))) || 127)))));
                        arr_39 [2] [i_5] = var_6;
                        var_22 -= (min((min(var_6, (((-1 ? 127 : 127))))), (arr_10 [i_0] [i_0] [1] [i_0])));
                    }

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_43 [i_5] [1] [5] [i_8] [i_11] = var_8;
                        var_23 -= (max(0, (min(var_4, ((min(var_9, var_7)))))));
                        var_24 = ((-1 * (((min(var_3, var_9)) * (arr_19 [6] [i_8] [i_6])))));
                        var_25 = (min(var_25, ((min((min((arr_30 [0] [i_0] [8] [i_6] [i_8] [9] [i_11]), var_8)), (((-1 ^ (arr_27 [4] [4] [i_6] [i_11])))))))));
                        var_26 += (((arr_27 [i_8] [2] [7] [i_11]) & 1));
                    }
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_27 = 42831;
                        var_28 += (min(var_10, ((((arr_27 [i_0] [8] [i_6] [i_6]) ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : (arr_27 [7] [i_5] [i_12] [i_5]))))));
                        var_29 = (arr_7 [i_0] [i_5]);
                        var_30 -= -1744060557;
                        var_31 = (min(var_31, (min(var_5, var_6))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_32 = (max(var_32, -1));
                        arr_53 [i_5] [i_5] = (~(arr_28 [i_14] [i_12] [1] [1] [1] [i_0]));
                        var_33 = (min(var_33, ((((arr_50 [1] [5] [1]) >= 1661244241)))));
                        var_34 *= var_3;
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        arr_57 [i_0] [i_5] [9] [i_5] [7] = var_7;
                        var_35 = (max(var_35, (((1 ? (arr_28 [i_0] [2] [i_5] [i_6] [i_12] [i_15]) : (arr_50 [1] [i_6] [i_0]))))));
                        var_36 = ((127 | (arr_45 [i_0] [i_0] [i_0] [i_12] [i_15 + 1] [i_15 - 2])));
                    }

                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_37 = (min((min((!80659723), (arr_54 [6] [i_5] [i_6] [i_12] [i_12]))), (0 == var_4)));
                        var_38 = (max((var_10 | 2760053774330141370), 1661244241));
                        var_39 = (min((((arr_32 [i_0] [i_0] [i_0] [6] [i_0] [i_0] [i_0]) + var_11)), (min((arr_32 [i_0] [i_0] [i_5] [i_0] [i_6] [i_12] [i_16]), var_8))));
                        var_40 = (min((arr_32 [1] [i_16] [i_6] [i_6] [1] [1] [i_0]), var_3));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_62 [i_17] [i_5] = var_4;
                        var_41 = var_0;
                    }
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        arr_66 [i_5] = (arr_27 [i_6] [i_18] [i_6] [i_18]);
                        var_42 = (max(var_42, ((min((max((arr_11 [i_5]), 0)), (arr_13 [i_5] [i_6] [i_12] [5]))))));
                        var_43 ^= var_4;
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_44 = (max(var_44, (arr_61 [i_0] [i_5] [i_5] [i_6] [i_5] [i_19])));
                        var_45 += var_5;
                    }

                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_46 = (!var_6);
                        var_47 &= ((((var_3 ^ var_3) & 503052593)) << (var_1 + 1457988285784822715));
                        var_48 = (min(var_48, var_11));
                    }
                    var_49 = (max(var_49, 2633723055));
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    var_50 *= var_10;
                    arr_76 [i_5] = (arr_35 [1] [8] [i_5] [10] [4] [i_6] [i_5]);
                    var_51 |= (arr_60 [i_0] [i_5] [i_6] [i_21] [i_0] [i_21 + 1] [i_0]);
                }
            }
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
        {
            var_52 = (max(var_52, (arr_10 [i_0] [i_22] [i_22] [i_22])));
            arr_79 [2] [i_22] = 14766;
        }
    }
    for (int i_23 = 0; i_23 < 15;i_23 += 1)
    {
        arr_84 [i_23] = (max((((var_2 ? var_7 : 503052594))), var_11));
        arr_85 [5] [5] = min(((1 ? -4238411337210707298 : var_1)), (min((~var_2), (arr_82 [i_23]))));
        var_53 = (max((!var_6), (min((!var_9), (min(var_0, var_9))))));

        for (int i_24 = 1; i_24 < 13;i_24 += 1)
        {
            var_54 = (min(var_10, (arr_86 [1] [1])));
            var_55 = ((~(min(var_2, -4238411337210707298))));
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 15;i_25 += 1)
        {

            for (int i_26 = 0; i_26 < 15;i_26 += 1)
            {
                var_56 = (min(var_56, var_7));

                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    arr_97 [12] [i_27] [i_26] [i_27] [i_27] = (var_8 == var_6);
                    var_57 = (max(var_57, (((var_10 * (var_10 * var_7))))));
                }
                for (int i_28 = 4; i_28 < 13;i_28 += 1)
                {

                    for (int i_29 = 2; i_29 < 14;i_29 += 1)
                    {
                        var_58 &= (~1);
                        arr_103 [i_23] [7] [i_25] [i_26] [i_26] [1] = var_10;
                        arr_104 [i_26] [i_26] [i_25] [i_26] = (1 && var_5);
                        var_59 -= 0;
                        var_60 = (max(var_60, 30210));
                    }
                    for (int i_30 = 1; i_30 < 14;i_30 += 1)
                    {
                        arr_108 [i_26] [i_28] [i_28] = (((arr_102 [i_26] [5] [i_26] [i_30 + 1] [i_26]) + var_8));
                        var_61 = var_9;
                    }
                    var_62 = (var_5 ? (arr_107 [i_26]) : (arr_96 [4] [12] [i_28 - 3] [i_28]));

                    for (int i_31 = 0; i_31 < 15;i_31 += 1)
                    {
                        var_63 = var_0;
                        arr_112 [i_26] = ((1 & (arr_109 [i_28 - 2] [i_25] [0] [i_28 - 1] [14])));
                    }
                    for (int i_32 = 1; i_32 < 14;i_32 += 1) /* same iter space */
                    {
                        var_64 = (16072895808198096975 - 0);
                        var_65 = 153;
                        var_66 -= ((var_9 ? ((var_9 ? var_3 : 103)) : (((32524 >> (-32525 + 32537))))));
                        var_67 -= ((-83 - (arr_88 [i_26] [i_28])));
                    }
                    for (int i_33 = 1; i_33 < 14;i_33 += 1) /* same iter space */
                    {
                        var_68 = (0 & (arr_114 [i_25] [1] [i_26] [i_26] [1]));
                        var_69 += (var_10 ? var_8 : var_8);
                        arr_119 [i_28] [13] [i_26] [i_28 - 3] = (var_10 - var_8);
                        var_70 = var_9;
                        arr_120 [i_26] = (~var_10);
                    }
                }
            }
            for (int i_34 = 3; i_34 < 13;i_34 += 1)
            {
                var_71 = (max(var_71, (arr_105 [10] [i_25] [i_25] [i_34 + 1])));
                var_72 = ((arr_116 [i_34 - 2] [1]) + var_10);
                arr_124 [i_34] = (((arr_118 [i_34 + 1] [i_34] [i_34 - 1] [i_34 - 3] [i_34 - 1] [i_34 - 1]) && var_7));
            }
            var_73 = (((!var_5) << (3478021036 - 3478021012)));
            /* LoopNest 2 */
            for (int i_35 = 2; i_35 < 13;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    {
                        var_74 = (arr_89 [i_35 - 2] [i_25] [i_35 - 2]);
                        var_75 = (max(var_75, var_11));
                    }
                }
            }
            var_76 = var_2;
        }
        /* vectorizable */
        for (int i_37 = 1; i_37 < 14;i_37 += 1)
        {
            var_77 = (((arr_98 [14] [14] [1] [i_37 + 1]) ? var_10 : (arr_98 [6] [0] [1] [i_37 - 1])));
            arr_134 [i_23] [4] [i_23] = ((var_3 + (var_3 / 11772420704987695254)));
            var_78 = (max(var_78, var_1));
        }
    }
    for (int i_38 = 1; i_38 < 1;i_38 += 1)
    {
        var_79 = (min(var_79, (((((min(25, var_4))) ? (min((min(var_10, var_8)), ((min((arr_136 [i_38] [i_38 - 1]), var_0))))) : (31 >= -1))))));
        /* LoopNest 2 */
        for (int i_39 = 0; i_39 < 24;i_39 += 1)
        {
            for (int i_40 = 0; i_40 < 24;i_40 += 1)
            {
                {
                    var_80 ^= ((((min((arr_138 [i_38 - 1]), (arr_138 [i_38 - 1])))) || var_3));
                    arr_143 [i_39] [i_39] = ((((min(var_8, (var_5 * var_3)))) ? ((((((min(23154, (arr_137 [i_40] [i_39])))) && var_9)))) : var_11));

                    for (int i_41 = 0; i_41 < 24;i_41 += 1) /* same iter space */
                    {
                        var_81 = var_2;
                        arr_147 [9] [i_39] [i_41] [12] = arr_139 [7] [7] [i_40];
                    }
                    /* vectorizable */
                    for (int i_42 = 0; i_42 < 24;i_42 += 1) /* same iter space */
                    {
                        arr_151 [i_39] [i_40] = (((arr_149 [i_38] [7] [i_38 - 1]) ^ (arr_149 [i_38 - 1] [i_38 - 1] [1])));
                        arr_152 [18] [14] [10] [i_42] = (((((var_5 ? var_10 : var_1))) ? var_3 : var_5));
                        var_82 = (min(var_82, (var_11 / var_6)));
                    }
                    for (int i_43 = 0; i_43 < 24;i_43 += 1) /* same iter space */
                    {
                        var_83 &= (min((arr_137 [i_38 - 1] [i_38 - 1]), (~var_3)));
                        var_84 = ((~(-2 > 0)));
                        var_85 = (max(var_85, 1));
                        var_86 = (min(102, 1));
                    }
                    for (int i_44 = 3; i_44 < 23;i_44 += 1)
                    {
                        arr_158 [i_44] [1] [i_38 - 1] [i_38] = (max(8598023603163987070, ((((arr_138 [i_38 - 1]) && 134217727)))));
                        var_87 = (max(18446744073709551615, 816946260));
                        arr_159 [i_44 - 1] [i_44] [i_39] [i_44] [i_38] = 2178723348;
                        arr_160 [i_44] [i_39] [i_44] = ((max(var_8, ((min(var_4, var_5))))) ^ ((min((arr_150 [i_44 - 1] [i_38 - 1] [i_40] [i_38 - 1] [19] [i_44]), (arr_137 [i_44 + 1] [i_39])))));
                    }
                    /* LoopNest 2 */
                    for (int i_45 = 1; i_45 < 22;i_45 += 1)
                    {
                        for (int i_46 = 0; i_46 < 24;i_46 += 1)
                        {
                            {
                                var_88 = (max(var_88, ((max((((arr_135 [i_38 - 1]) / (arr_139 [i_38 - 1] [i_39] [i_38 - 1]))), (arr_142 [i_38] [i_39] [i_45] [i_46]))))));
                                var_89 = var_5;
                                var_90 ^= (!0);
                                var_91 = (max((((var_7 ? (arr_146 [i_38] [i_45] [i_45]) : var_7))), (((arr_153 [i_38 - 1] [i_39] [i_39] [i_45 + 1] [i_46]) ? (arr_155 [i_38] [i_38] [6] [i_45]) : 1))));
                            }
                        }
                    }
                    var_92 = (((min(3478021036, 1)) >> (var_1 + 1457988285784822665)));
                }
            }
        }
        arr_166 [i_38] [i_38] = (min((arr_149 [i_38 - 1] [i_38] [i_38 - 1]), (max(var_4, (var_4 ^ var_11)))));
        arr_167 [i_38 - 1] = 17;
    }
    var_93 -= (-8945461615773133955 / 19159);
    #pragma endscop
}
