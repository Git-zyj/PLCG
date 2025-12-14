/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] = (77 * 153);
                        var_10 = (arr_10 [i_0] [i_0] [i_0] [3]);
                    }
                }
            }
        }
        var_11 = var_5;
        var_12 = (((((min((arr_2 [i_0] [i_0]), 103)))) < (~var_4)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_13 = (((var_7 ? (arr_19 [i_4 + 1] [i_4] [i_5] [i_6]) : (arr_12 [i_6]))));
                    arr_23 [i_4] [i_4] [i_6] = -var_8;
                }
            }
        }

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_24 [i_4] [i_4] [i_4 + 1])));
                            var_15 = (((arr_15 [i_4] [i_4] [i_4 + 1]) ? (var_3 | var_8) : (arr_26 [i_7 - 1] [i_9 + 1] [i_4])));
                            var_16 = ((-(arr_33 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 - 2])));
                            var_17 = var_2;
                            arr_35 [i_8] [i_4] [i_4] = (((arr_24 [i_10 - 1] [i_9] [i_9 + 2]) != var_2));
                        }
                    }
                }
                var_18 -= (((102 >= 32512) || 153));
            }
            var_19 += (var_7 ? var_0 : (arr_15 [i_4 + 3] [2] [i_7]));
            var_20 = (arr_27 [i_7] [i_4]);
        }
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_21 = (arr_40 [i_11 - 3]);
                var_22 += ((((((arr_27 [9] [8]) ^ var_3))) ^ var_6));
                var_23 = -127;
            }
            for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
            {
                var_24 ^= (arr_33 [i_4] [i_4] [i_4 - 1] [i_13] [i_11 - 3]);
                arr_43 [i_4] [i_11 - 3] [i_13] = var_5;
                var_25 += var_2;
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
            {
                var_26 = (((arr_33 [i_4 - 1] [i_11] [i_11 - 2] [12] [8]) ? var_8 : (arr_14 [i_4])));

                for (int i_15 = 2; i_15 < 13;i_15 += 1)
                {
                    var_27 = ((var_4 ? (arr_24 [12] [i_4 + 1] [i_11 - 2]) : (arr_24 [12] [i_4 + 1] [i_11 - 1])));
                    var_28 = var_9;

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_29 -= var_0;
                        var_30 = var_3;
                    }
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_31 = (max(var_31, ((((~(arr_47 [i_4 + 3] [i_4] [i_15])))))));
                        var_32 = (((arr_34 [9] [i_11 - 1] [i_11 - 1] [i_11]) ? var_6 : ((var_7 ? 153 : var_4))));
                        var_33 = (((arr_40 [i_4 + 3]) == (arr_40 [13])));
                    }
                }
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    var_34 ^= var_8;
                    var_35 = var_0;
                    var_36 ^= (arr_22 [i_4] [i_4 + 1] [i_4] [i_4]);
                    var_37 = (((((var_2 ? var_1 : var_6))) ? 153 : (arr_42 [i_18] [i_4 + 2] [i_11 - 1])));
                }
                for (int i_19 = 0; i_19 < 0;i_19 += 1) /* same iter space */
                {
                    var_38 = (((var_9 + 2147483647) >> (var_4 + 3491799304485745664)));
                    arr_61 [i_4] = -var_5;
                }
                for (int i_20 = 0; i_20 < 0;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 1; i_21 < 12;i_21 += 1)
                    {
                        var_39 |= var_6;
                        arr_68 [i_4] [i_4] [i_4] [i_11] [i_14] [i_20] [i_4] = ((var_6 ? var_6 : (arr_62 [i_11 - 1] [i_21 + 1])));
                        var_40 = (arr_59 [i_4] [i_11] [i_4 - 1] [i_4]);
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_41 = (min(var_41, ((var_4 == (arr_13 [i_14] [i_11])))));
                        var_42 += -var_3;
                    }
                    var_43 ^= var_6;
                    var_44 = 102;

                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        var_45 = ((-(arr_21 [i_4] [i_14] [i_4])));
                        var_46 = -var_2;
                        var_47 -= (var_2 & var_9);
                        var_48 = (((((153 << (2064384 - 2064379)))) ? var_4 : var_4));
                    }
                    for (int i_24 = 3; i_24 < 13;i_24 += 1)
                    {
                        arr_75 [i_4] [i_11] [i_14] [1] [i_4] = (arr_19 [i_4] [i_4] [i_20 + 1] [9]);
                        arr_76 [i_4] [i_11] [i_4] = var_0;
                        var_49 = (((arr_54 [i_11 - 1] [i_11] [i_11 - 1] [i_24 - 3] [i_11 - 1]) < (arr_54 [i_11 - 2] [i_11 - 2] [i_4 + 3] [i_24 - 2] [i_14])));
                        var_50 = var_4;
                    }
                    for (int i_25 = 1; i_25 < 11;i_25 += 1)
                    {
                        var_51 = var_8;
                        arr_79 [i_4] [i_4] [12] [i_20 + 1] [i_20 + 1] [i_20 + 1] = (((1879048192 / var_8) ? (arr_25 [i_4]) : ((var_4 ? var_3 : var_2))));
                        var_52 = (((arr_13 [i_4 + 2] [i_20 + 1]) ? (arr_13 [i_4 + 1] [i_20 + 1]) : (arr_13 [i_4 + 1] [i_20 + 1])));
                    }
                    var_53 += (((arr_32 [6] [i_11] [i_14] [i_20]) != var_5));
                }
            }
            var_54 |= var_0;
            var_55 = (((arr_27 [i_4 + 3] [i_4 + 2]) ? var_0 : var_4));
            arr_80 [i_4] [i_4] [i_4] = 102;
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            arr_84 [i_4] = (arr_46 [i_4 + 3] [i_4 + 1] [i_4 + 3] [i_4 + 2]);
            arr_85 [i_4] = ((!(var_6 <= var_8)));
        }
    }
    var_56 = var_8;

    for (int i_27 = 2; i_27 < 24;i_27 += 1)
    {
        var_57 -= (min((((((~(arr_87 [i_27])))) ? ((min(154, var_9))) : (((arr_86 [i_27]) ? var_9 : (arr_86 [21]))))), var_7));
        var_58 = ((((((arr_86 [i_27]) + var_5))) + var_1));
        var_59 = (16777152 < 173);
    }
    for (int i_28 = 0; i_28 < 17;i_28 += 1)
    {
        var_60 *= var_1;
        var_61 = ((((((~-6956) ? (((var_8 + 2147483647) >> (var_2 + 122))) : var_9))) ? ((max(var_5, var_6))) : (arr_87 [5])));
    }

    for (int i_29 = 2; i_29 < 12;i_29 += 1)
    {
        arr_96 [1] [1] = (arr_86 [i_29]);
        arr_97 [i_29 + 2] [i_29 + 2] = (max((!var_9), ((((102 ? (arr_86 [i_29]) : var_8)) / var_9))));
        /* LoopNest 2 */
        for (int i_30 = 1; i_30 < 11;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 15;i_31 += 1)
            {
                {
                    var_62 += ((28672 ? ((min((arr_89 [i_29 - 1] [i_30 + 3]), (arr_99 [i_29 + 3])))) : ((-var_0 & (!1)))));
                    arr_103 [i_29 + 2] [4] [i_29] = (((+((var_8 ? (arr_88 [i_29] [i_31]) : 1)))));
                }
            }
        }
        arr_104 [i_29] [i_29] = var_1;
        /* LoopNest 2 */
        for (int i_32 = 3; i_32 < 12;i_32 += 1)
        {
            for (int i_33 = 1; i_33 < 1;i_33 += 1)
            {
                {

                    for (int i_34 = 0; i_34 < 15;i_34 += 1) /* same iter space */
                    {
                        var_63 = (((((var_7 ? 36863 : var_5))) ? 101 : ((4294966272 ? 2175388556666505301 : 6955))));
                        var_64 ^= 25;
                    }
                    /* vectorizable */
                    for (int i_35 = 0; i_35 < 15;i_35 += 1) /* same iter space */
                    {
                        arr_115 [i_32] [i_32] [i_33 - 1] [11] [i_33] = var_6;
                        var_65 = (((~var_6) - (arr_88 [i_32 + 1] [i_33 - 1])));
                    }
                    for (int i_36 = 0; i_36 < 15;i_36 += 1) /* same iter space */
                    {
                        arr_119 [i_32] [i_32] = (~(max(1, -1812691100)));
                        var_66 = min(((-38030 ? (var_8 / 44065) : ((var_2 ? var_5 : (arr_108 [0] [i_32 + 1] [i_33 - 1] [i_32]))))), (arr_117 [i_29] [i_32] [i_32] [i_29]));
                        arr_120 [i_32] [i_33] [i_32] = var_2;
                        var_67 = (arr_112 [i_32]);
                        var_68 = ((((max(var_4, var_1))) ? (((var_5 >> ((((28672 ? (arr_106 [i_29 + 3] [i_32 - 3] [i_33 - 1]) : var_1)) - 18446744071660383784))))) : (min((arr_102 [i_33 - 1] [i_32 + 1] [i_29 - 1]), var_6))));
                    }
                    for (int i_37 = 2; i_37 < 13;i_37 += 1)
                    {
                        var_69 = ((((-(arr_105 [i_32 - 1] [i_33 - 1]))) ^ (~15)));
                        var_70 = ((~(var_2 ^ var_5)));
                    }
                    var_71 = (((((((var_2 ^ 1259585727214861503) <= 4911672927832356918)))) & -var_0));
                    /* LoopNest 2 */
                    for (int i_38 = 0; i_38 < 15;i_38 += 1)
                    {
                        for (int i_39 = 0; i_39 < 15;i_39 += 1)
                        {
                            {
                                var_72 = (arr_111 [8] [8] [i_33] [i_33]);
                                var_73 = ((~(min(var_0, var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_40 = 0; i_40 < 15;i_40 += 1)
    {

        for (int i_41 = 0; i_41 < 15;i_41 += 1)
        {
            var_74 -= (min(((((arr_131 [14]) ? (((arr_98 [i_41]) ? -22177 : (arr_133 [i_40] [i_40]))) : (((var_7 ? var_8 : var_9)))))), var_0));
            var_75 = (!128);
        }
        /* LoopNest 2 */
        for (int i_42 = 0; i_42 < 15;i_42 += 1)
        {
            for (int i_43 = 0; i_43 < 15;i_43 += 1)
            {
                {
                    var_76 = ((((min(61566214, 32581))) ? (arr_127 [i_40] [i_40] [i_40] [i_40] [i_40] [i_40]) : (((((min((arr_108 [1] [i_42] [i_43] [4]), (arr_118 [i_42] [14] [i_42] [i_42]))) + 2147483647)) << (((arr_86 [i_40]) - 32026))))));
                    arr_139 [i_43] = ((!((min(((min(var_3, var_2))), (arr_91 [i_43]))))));
                    var_77 = (((!var_7) ? (((!((var_2 && (arr_138 [i_43] [i_42] [i_40])))))) : (27653 ^ 0)));
                }
            }
        }
        var_78 -= ((((min(var_5, var_8))) != (arr_132 [i_40])));
    }
    for (int i_44 = 0; i_44 < 21;i_44 += 1)
    {
        var_79 ^= ((((min(13150, 63488))) ? (min(900982180, 128)) : (max((153 < var_8), (((arr_142 [i_44]) ? var_5 : var_8))))));
        var_80 = ((~((((arr_87 [i_44]) < var_0)))));
    }
    for (int i_45 = 1; i_45 < 1;i_45 += 1)
    {
        var_81 += var_7;
        var_82 = var_9;
    }
    #pragma endscop
}
