/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = ((((!(arr_7 [i_2 + 1] [0]))) ? (var_10 >= 46258) : (arr_4 [i_2 + 3] [i_2 - 1])));
                    var_19 = ((((((((min((arr_6 [i_0] [i_1]), 63808))) || 26)))) / (min(var_4, (((var_15 ? -17 : var_0)))))));
                }
            }
        }
        var_20 = (max(var_6, (((!39506) / (arr_2 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_21 *= ((((((arr_0 [i_3]) ? -126 : ((var_5 ? 8 : -76))))) ? (((((~var_4) >= 121)))) : (arr_11 [i_3])));
        var_22 = ((((211 ? 1 : 8313946947947771305)) == (arr_6 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_23 = ((~(~-1)));
        var_24 ^= ((~(((-124 || (arr_11 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_25 = (-127 - 1);
            var_26 = var_16;
            var_27 = arr_21 [4] [i_6];
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_28 = (((((-20 == (arr_15 [i_5] [i_7])))) > (((!(arr_15 [i_7] [i_7]))))));

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_29 |= max(23476, 47);
                var_30 ^= var_9;
                var_31 = max((((!(((-17 ? var_9 : var_8)))))), (max((arr_26 [i_8] [i_8] [i_8]), (arr_26 [i_5] [i_7] [i_8]))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_32 |= (((((!(arr_29 [i_5] [i_10 + 2] [i_9 - 1] [i_9])))) & ((max((arr_29 [i_5] [i_10 + 1] [i_9 - 1] [i_7]), (arr_29 [i_9] [i_10 + 3] [i_9 + 1] [9]))))));
                            var_33 = (min((arr_24 [i_5] [0] [i_5]), var_1));
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    var_34 = max(var_3, (((var_1 >= (max((arr_23 [i_5]), (arr_11 [2])))))));

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_35 = 12;
                        var_36 = (max(var_36, (!-74)));
                        var_37 = (-1 | 511);
                    }
                    for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_38 ^= (min(-23, 0));
                        var_39 = ((((((var_14 ^ (arr_17 [i_8])))) ? ((-126 ? 6413573176032594950 : 106)) : (arr_18 [i_5] [10] [i_8]))));
                        var_40 = 182;
                    }
                    var_41 = (max(var_41, (arr_39 [i_5] [i_7] [5] [i_11] [i_5] [i_11])));
                }
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    var_42 &= -32;
                    var_43 ^= (((((min(((min(127, var_16))), (arr_36 [i_8] [6] [i_14] [i_14 - 1] [i_8]))) + 9223372036854775807)) >> (((min(var_16, var_9)) + 1090014002644335959))));
                    var_44 = ((!((max(var_10, -73)))));
                }
            }
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        {
                            var_45 = var_2;
                            var_46 *= ((-(min(((2 ? 233 : -115)), 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 4; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_47 = (min(var_47, ((min(49, var_3)))));
                            var_48 = ((~(arr_41 [11] [i_15 - 1] [i_18 - 1] [i_19 - 4] [11] [i_19])));
                            var_49 = -41;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 11;i_22 += 1)
                    {
                        {
                            var_50 = ((-(arr_60 [i_21 + 1] [4] [i_22] [i_5] [i_22 - 2])));
                            var_51 = (min(var_51, (arr_54 [i_7] [i_7] [i_21 + 1] [6] [i_22] [i_22 - 1] [i_22])));
                            var_52 = (((arr_32 [i_5] [i_7] [i_5] [i_22 - 3]) < (arr_32 [i_5] [i_20] [i_5] [i_22])));
                            var_53 = var_9;
                        }
                    }
                }
                var_54 = 223;
                var_55 = -var_14;
            }
            var_56 &= 129;
            var_57 = (min(var_57, ((max(3, var_2)))));
            var_58 = (arr_16 [i_5] [i_5]);
        }
        for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_24 = 4; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        {
                            var_59 |= var_14;
                            var_60 |= ((var_5 == ((-576500564910107503 ? (arr_70 [i_23] [i_24 - 4] [i_24] [i_26] [i_23] [8] [i_23]) : (arr_54 [i_5] [i_23] [i_23] [i_25] [i_23] [i_23] [i_23])))));
                            var_61 = (((((((((arr_70 [i_5] [i_5] [i_5] [i_24] [i_25] [i_25] [i_26]) ? var_10 : (arr_39 [i_5] [10] [i_5] [10] [i_5] [i_5])))) ? var_6 : (!var_3)))) ? var_10 : (arr_62 [i_24] [i_24] [i_24 - 1] [i_5] [7] [i_25] [i_25])));
                        }
                    }
                }
            }
            var_62 |= (((((((var_5 ? var_4 : var_12))) ? 43340 : var_2)) & 11566));
            var_63 *= var_1;
        }
        for (int i_27 = 1; i_27 < 11;i_27 += 1)
        {

            /* vectorizable */
            for (int i_28 = 0; i_28 < 12;i_28 += 1) /* same iter space */
            {
                var_64 = ((((((arr_6 [i_5] [i_28]) ? var_5 : var_6))) ? var_1 : -252));
                var_65 = (max(var_65, (((!(arr_70 [i_28] [i_5] [i_27 - 1] [i_27 + 1] [i_28] [i_27 - 1] [6]))))));
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 12;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 12;i_30 += 1)
                    {
                        {
                            var_66 = (((arr_65 [i_5] [i_5]) ? (arr_65 [i_5] [i_5]) : (arr_65 [i_28] [i_28])));
                            var_67 = (min(var_67, ((((((arr_74 [i_28] [i_28]) + 2147483647)) >> (((arr_19 [i_5] [i_27 - 1] [i_27 - 1]) - 59175)))))));
                            var_68 = (max(var_68, (((5630657125800418414 ? (arr_57 [i_27 + 1] [i_28] [i_27 + 1]) : (arr_57 [i_27 + 1] [i_28] [i_27 + 1]))))));
                            var_69 = (arr_40 [i_27 + 1] [0] [i_28] [i_28]);
                        }
                    }
                }
            }
            for (int i_31 = 0; i_31 < 12;i_31 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_32 = 2; i_32 < 11;i_32 += 1)
                {
                    for (int i_33 = 2; i_33 < 10;i_33 += 1)
                    {
                        {
                            var_70 = 190;
                            var_71 = max(var_5, var_3);
                            var_72 = ((~((~(arr_87 [i_33] [i_33 + 2] [i_33] [i_33] [i_33] [i_32])))));
                            var_73 = ((-(arr_40 [i_27 + 1] [i_27 + 1] [i_27 + 1] [i_32 + 1])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_34 = 0; i_34 < 12;i_34 += 1)
                {
                    var_74 ^= ((!(arr_47 [i_27 - 1] [i_27 + 1] [i_31] [i_27 + 1])));
                    var_75 = (max(var_75, (((((115 ? (arr_32 [i_5] [8] [i_31] [i_34]) : -32)) ^ (((arr_75 [i_27] [8] [i_34]) ^ 74)))))));
                }
                for (int i_35 = 0; i_35 < 12;i_35 += 1)
                {
                    var_76 &= (arr_31 [i_5] [i_5] [i_31] [i_31] [i_35]);

                    for (int i_36 = 0; i_36 < 12;i_36 += 1) /* same iter space */
                    {
                        var_77 = var_11;
                        var_78 = ((((max((arr_16 [i_27 + 1] [i_27 - 1]), (arr_44 [i_27 + 1] [3])))) ? (arr_44 [i_27 - 1] [i_27 - 1]) : ((-(arr_44 [i_27 - 1] [i_27 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_37 = 0; i_37 < 12;i_37 += 1) /* same iter space */
                    {
                        var_79 = (((arr_54 [i_27 - 1] [i_5] [i_35] [i_35] [i_37] [i_37] [i_35]) ? (((19 ? 32 : 32))) : (((arr_94 [i_27 - 1] [i_27 - 1]) ? (arr_13 [i_5]) : 71))));
                        var_80 = (max(var_80, (var_3 && var_12)));
                        var_81 = -32;
                    }
                    var_82 = (arr_36 [i_5] [i_5] [i_31] [i_31] [i_5]);

                    /* vectorizable */
                    for (int i_38 = 3; i_38 < 11;i_38 += 1)
                    {
                        var_83 = (min(var_83, ((((var_15 - var_9) ? 228 : (arr_2 [i_27] [i_31]))))));
                        var_84 = (245 != 61);
                        var_85 = ((!(14 != var_11)));
                    }
                    for (int i_39 = 0; i_39 < 12;i_39 += 1)
                    {
                        var_86 = (var_7 / -32);
                        var_87 = (((((var_10 % (min((arr_78 [i_5] [i_5] [i_5] [i_31] [i_39]), 5149422666668248549))))) ? ((var_16 ^ ((max((arr_30 [i_27] [i_27 - 1] [i_31] [i_31] [i_39] [i_35] [i_27]), (arr_15 [10] [i_39])))))) : 12));
                        var_88 ^= (((min(((-(arr_44 [i_5] [i_27]))), ((max(43512, var_2))))) ^ var_11));
                        var_89 = (~-32);
                    }
                    var_90 = (max(var_90, ((((max((arr_46 [i_27 - 1] [i_27 + 1] [i_27 + 1]), (((var_8 << (var_3 - 177)))))) & var_10)))));
                }
                for (int i_40 = 1; i_40 < 11;i_40 += 1)
                {

                    /* vectorizable */
                    for (int i_41 = 0; i_41 < 12;i_41 += 1)
                    {
                        var_91 = ((43 << (-7189042432740985477 + 7189042432740985490)));
                        var_92 = ((-(arr_37 [i_5] [i_27] [5] [i_41] [i_27 - 1] [i_5] [5])));
                        var_93 = (((arr_48 [i_40 + 1] [i_27 - 1]) ? (arr_48 [i_40 + 1] [i_27 - 1]) : 255));
                        var_94 = ((-(arr_34 [i_27 + 1])));
                    }
                    for (int i_42 = 3; i_42 < 11;i_42 += 1)
                    {
                        var_95 = 6;
                        var_96 = (arr_12 [i_31] [10]);
                        var_97 = var_8;
                        var_98 = min(((((arr_62 [i_40 + 1] [i_40 - 1] [i_40 - 1] [i_5] [i_40 + 1] [i_40] [i_40 - 1]) < ((((arr_27 [i_5] [i_27] [1] [i_27] [3]) <= (arr_56 [i_5]))))))), (arr_48 [i_27] [i_27]));
                        var_99 |= (((var_11 | var_0) - (arr_68 [i_5] [i_27 + 1] [i_31] [i_31] [i_40 - 1] [i_42 - 2])));
                    }
                    var_100 = -28056;
                    var_101 = 7189042432740985486;

                    /* vectorizable */
                    for (int i_43 = 4; i_43 < 11;i_43 += 1)
                    {
                        var_102 = (((arr_88 [i_31] [i_40 + 1] [i_43 + 1] [i_43 + 1] [i_43 - 4] [i_40 + 1]) * var_0));
                        var_103 = (arr_19 [i_43 - 3] [i_27 + 1] [i_40 + 1]);
                        var_104 = 25;
                    }
                    /* vectorizable */
                    for (int i_44 = 1; i_44 < 11;i_44 += 1) /* same iter space */
                    {
                        var_105 = ((var_16 * (arr_115 [i_5] [i_5])));
                        var_106 = ((var_5 ? var_10 : ((43 ? var_16 : -31608))));
                        var_107 = -var_5;
                        var_108 = (arr_40 [i_5] [i_5] [i_5] [i_5]);
                        var_109 = (min(var_109, ((((!var_1) & (255 < 123))))));
                    }
                    /* vectorizable */
                    for (int i_45 = 1; i_45 < 11;i_45 += 1) /* same iter space */
                    {
                        var_110 = var_11;
                        var_111 = (var_12 % var_15);
                        var_112 = var_15;
                        var_113 = ((var_7 - ((var_0 - (arr_72 [i_5])))));
                    }
                    var_114 = (((~7189042432740985455) ? (((max(var_1, var_7)))) : (((arr_98 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_98 [2] [i_27 - 1] [i_27 - 1] [i_27] [i_27 + 1]) : (arr_98 [i_5] [i_27 - 1] [i_31] [i_40 + 1] [i_40 + 1])))));
                }
            }
            var_115 = (arr_5 [8] [i_27 - 1] [i_27 - 1]);
            var_116 = (max(var_116, (min(7189042432740985486, (1 / var_8)))));
            var_117 = 7189042432740985477;
            var_118 = var_16;
        }
        var_119 = var_2;
        var_120 = (min(var_120, var_4));
    }
    /* LoopNest 3 */
    for (int i_46 = 0; i_46 < 20;i_46 += 1)
    {
        for (int i_47 = 0; i_47 < 20;i_47 += 1)
        {
            for (int i_48 = 0; i_48 < 20;i_48 += 1)
            {
                {
                    var_121 = (((~var_10) > (arr_123 [i_46] [4] [i_48])));
                    var_122 = (max(((((-106 ? 9223372036854775807 : (arr_120 [i_47] [i_48]))) < var_9)), ((!((28 || (arr_124 [i_48])))))));
                }
            }
        }
    }
    #pragma endscop
}
