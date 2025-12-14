/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -var_9));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 - 4] = (var_12 != 7475);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_1] = max((min((arr_8 [i_0 + 1] [i_0 - 3]), var_19)), (arr_8 [i_0 + 1] [i_0 - 3]));
                    var_21 ^= arr_5 [i_0 + 1] [i_1] [i_2];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] = var_2;
        var_22 ^= ((-((-(arr_6 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = (max(var_23, ((((arr_5 [i_4] [i_4] [i_5]) ? (arr_5 [i_4] [i_4] [i_4]) : var_13)))));
            arr_18 [i_4] = -2533;
            var_24 = (max(var_24, var_19));
        }
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                var_25 = -var_0;
                var_26 = (max(var_26, (~var_2)));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_27 |= ((((var_9 ? 26506 : var_7)) ^ -14790));
                arr_26 [i_4] [i_6] [i_6 - 2] [i_4] = var_12;
                var_28 *= -1;
            }
            var_29 *= (((arr_16 [i_4]) + (arr_5 [i_4] [i_4] [8])));
            var_30 -= (((arr_5 [i_6 - 3] [i_4] [i_4]) >= 12241));
            arr_27 [i_4] [i_4] = 127;

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_31 ^= ((-((var_16 % (arr_7 [i_6 - 3])))));

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_32 = (arr_28 [i_6 + 1] [i_6] [i_6 - 2]);
                    var_33 = var_2;
                }
                var_34 = ((28541 ? var_2 : (arr_2 [i_6 - 2] [i_6 - 2])));
            }
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_35 = ((~((var_0 ? (arr_8 [i_12] [i_4]) : -9132))));
                    arr_39 [i_4] [i_6] [i_4] [1] = (--19529);
                }
                var_36 = (max(var_36, 32751));
            }
        }

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_37 = (--25593);
            arr_42 [i_4] [i_4] [i_4] = (((arr_28 [1] [i_4] [i_13]) ? (arr_28 [i_4] [0] [i_4]) : var_10));
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_45 [i_4] [i_14] = ((11741 != (-32767 - 1)));
            arr_46 [i_4] [i_4] [i_4] = (((((30619 ? var_2 : (arr_43 [i_14] [i_4])))) ? (-32767 - 1) : var_8));
            arr_47 [5] [i_4] = ((var_19 ? var_15 : var_17));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            arr_51 [i_4] [i_4] = ((var_5 ? var_18 : var_11));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    {
                        var_38 = (max(var_38, (arr_25 [i_17] [i_16] [i_15] [i_4])));

                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            var_39 -= -var_12;
                            var_40 ^= (((arr_60 [1] [i_15] [i_15] [6] [i_15] [i_15]) ? (!var_18) : (arr_58 [i_15] [i_17])));
                        }
                        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                        {
                            arr_63 [i_4] [i_17] [i_16] [9] [i_15] [i_15] [i_4] = ((var_16 ? ((-22223 ? (arr_13 [i_4] [0]) : var_0)) : (!-11133)));
                            var_41 *= ((var_17 ? ((var_8 ? 2056 : var_15)) : (arr_37 [i_4] [i_15] [i_16] [3] [i_19])));
                        }
                        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
                        {
                            arr_66 [i_4] [i_15] [i_4] [i_16] [2] [i_17] [i_15] = (((var_5 * var_4) / var_18));
                            arr_67 [10] [8] |= ((var_5 ? var_16 : (((-1 + 2147483647) >> (29377 - 29361)))));
                            arr_68 [i_4] = (~var_17);
                        }

                        for (int i_21 = 2; i_21 < 10;i_21 += 1) /* same iter space */
                        {
                            var_42 -= (((-15333 + 2147483647) << (((-26049 + 26061) - 12))));
                            var_43 -= -8233;
                            arr_71 [i_15] [i_15] [i_15] [i_4] [i_15] = (!var_5);
                        }
                        for (int i_22 = 2; i_22 < 10;i_22 += 1) /* same iter space */
                        {
                            arr_74 [i_4] [i_4] [i_4] [i_16] [i_4] [i_22] [i_22] = var_18;
                            var_44 += ((~((-(arr_59 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))));
                        }
                    }
                }
            }
            var_45 *= ((~(arr_16 [i_15])));
        }
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    {
                        arr_82 [i_23] [i_4] = (((((var_11 % var_13) + 2147483647)) >> (((arr_69 [i_4] [i_23] [i_24] [7]) - 25915))));
                        var_46 = (min(var_46, ((((!-2118) && (arr_36 [i_4] [i_23] [i_24] [i_24] [i_25]))))));
                        arr_83 [i_24] [i_4] = arr_23 [i_4] [i_4] [i_4] [i_4];
                    }
                }
            }
        }
        arr_84 [9] [i_4] = (((arr_59 [i_4] [i_4] [i_4] [i_4] [3] [i_4]) ? (arr_59 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_3));
    }
    var_47 |= max(var_5, var_14);

    for (int i_26 = 0; i_26 < 23;i_26 += 1)
    {

        for (int i_27 = 0; i_27 < 23;i_27 += 1) /* same iter space */
        {
            var_48 -= (!-1);
            var_49 *= ((((max((arr_90 [i_26] [i_26]), (arr_90 [5] [i_27])))) + (min(var_16, -var_5))));
            arr_91 [i_27] [i_27] = ((-(((!(arr_89 [i_27] [i_26] [i_26]))))));
        }
        for (int i_28 = 0; i_28 < 23;i_28 += 1) /* same iter space */
        {
            arr_96 [i_26] [i_28] [10] = ((((max((arr_0 [i_26] [i_26]), (arr_0 [i_26] [i_28])))) - ((max((arr_0 [i_26] [i_28]), (arr_0 [i_26] [i_28]))))));
            var_50 &= (~-var_8);
            var_51 = -8747;
            var_52 = (min(var_52, var_1));
            var_53 = ((-((max(var_19, var_6)))));
        }
        for (int i_29 = 0; i_29 < 23;i_29 += 1) /* same iter space */
        {
            arr_99 [i_29] = (19801 && -15612);

            for (int i_30 = 0; i_30 < 23;i_30 += 1)
            {
                arr_103 [2] [i_29] [i_26] = ((((((arr_88 [i_29]) ? (arr_88 [i_29]) : (arr_88 [i_26])))) ? (min(((var_0 ? -1 : var_6)), (arr_87 [i_30]))) : ((-31533 ? (arr_6 [i_26]) : var_4))));

                for (int i_31 = 0; i_31 < 23;i_31 += 1)
                {
                    var_54 = (max(var_54, (arr_98 [i_29] [16] [i_31])));
                    var_55 = -var_14;
                    var_56 = (min(var_56, (!-9449)));
                    var_57 ^= (arr_86 [16]);
                }
                /* LoopNest 2 */
                for (int i_32 = 3; i_32 < 22;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        {
                            arr_113 [i_29] [i_29] [i_30] [i_30] [i_32] [i_30] = (!-var_8);
                            var_58 *= (((arr_85 [i_32 - 3]) == (arr_107 [i_32 - 2] [i_32 - 3] [i_32 - 2])));
                            var_59 = (max(var_59, var_5));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 23;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        {
                            arr_119 [13] [i_29] [i_29] [i_34] [i_29] [i_29] [i_30] = ((((min((!var_16), var_5))) ^ ((~((min(var_19, var_14)))))));
                            var_60 -= ((-(min((arr_86 [i_34]), (((arr_115 [i_26] [i_29] [i_30] [11]) ? var_19 : var_2))))));
                        }
                    }
                }
            }
            for (int i_36 = 0; i_36 < 23;i_36 += 1) /* same iter space */
            {

                for (int i_37 = 0; i_37 < 23;i_37 += 1)
                {
                    arr_124 [i_29] [i_36] [i_36] [i_37] = (min((min(-20917, 13739)), (arr_6 [i_26])));
                    arr_125 [i_36] [i_29] [i_29] [i_37] [i_26] [i_29] = (~22766);
                    arr_126 [4] [i_36] [i_29] [i_36] [i_36] = ((-(22118 * var_12)));
                }

                for (int i_38 = 0; i_38 < 23;i_38 += 1)
                {
                    arr_130 [i_26] [i_29] [i_36] [i_38] [i_29] [i_36] |= arr_114 [i_38] [i_36] [i_29] [i_26];
                    var_61 = (min(var_19, ((-(arr_105 [i_26] [i_29] [i_29] [i_36] [i_38])))));
                }
                var_62 = ((((max(-9439, var_16))) < -var_12));
                var_63 = arr_0 [i_26] [i_26];
                var_64 ^= ((~((min(var_1, (arr_89 [i_26] [i_29] [i_36]))))));
            }
            for (int i_39 = 0; i_39 < 23;i_39 += 1) /* same iter space */
            {
                arr_133 [i_39] [i_39] [i_39] [16] &= var_9;
                var_65 = (max(var_65, var_0));
                arr_134 [i_39] [i_29] [i_39] [i_39] = ((!((((arr_107 [i_26] [i_29] [i_29]) ? (arr_107 [19] [i_29] [18]) : (arr_107 [i_26] [2] [i_39]))))));
            }
        }
        var_66 |= ((-var_19 ? 24997 : (((arr_123 [19] [i_26] [i_26] [21] [i_26] [i_26]) - ((max((arr_116 [i_26] [i_26] [i_26] [i_26]), 16384)))))));
        arr_135 [i_26] [i_26] = arr_114 [5] [i_26] [i_26] [i_26];
    }
    /* vectorizable */
    for (int i_40 = 0; i_40 < 21;i_40 += 1)
    {
        var_67 = var_16;
        arr_139 [i_40] [i_40] = (((arr_121 [6] [i_40] [i_40] [i_40]) >> (((arr_4 [i_40] [i_40]) + 11619))));
        var_68 = (min(var_68, (((var_9 ? var_4 : var_11)))));

        for (int i_41 = 1; i_41 < 20;i_41 += 1)
        {

            for (int i_42 = 1; i_42 < 20;i_42 += 1)
            {
                var_69 = (((arr_112 [i_41] [i_41] [i_41]) ? var_7 : -8233));

                for (int i_43 = 0; i_43 < 21;i_43 += 1)
                {
                    arr_148 [i_40] [3] [i_42] [3] [i_42 - 1] = var_5;
                    var_70 = var_16;
                    var_71 = arr_86 [i_42 + 1];
                }
            }
            for (int i_44 = 4; i_44 < 19;i_44 += 1)
            {
                var_72 += ((var_14 >= (arr_116 [i_41 - 1] [i_44] [i_41] [i_41 - 1])));
                var_73 = (max(var_73, (((!(arr_100 [15]))))));
                arr_152 [i_40] [i_41] [i_40] = 496;
            }
            var_74 = (max(var_74, (((((var_10 || (arr_93 [i_40] [i_40] [21]))))))));
        }
        for (int i_45 = 1; i_45 < 20;i_45 += 1)
        {
            var_75 += ((var_3 ? ((-11161 ? var_14 : var_3)) : (arr_86 [i_45 - 1])));
            var_76 = (min(var_76, (((-(arr_117 [i_40] [i_45 - 1]))))));
            var_77 = (max(var_77, ((((arr_129 [i_45 + 1] [i_45 + 1]) <= var_19)))));
        }
    }
    var_78 = max((~var_11), (min((max(var_3, var_12)), var_19)));
    #pragma endscop
}
