/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((max(((((var_0 + 2147483647) >> (((arr_3 [i_0]) - 10917452789033400755))))), var_2))))));
                    arr_7 [i_0] [i_1] = arr_0 [i_0] [i_2];
                }
            }
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_19 = (((max((max(var_5, (arr_2 [i_3] [i_0]))), (((var_3 ? var_17 : var_10))))) - ((((arr_1 [1]) ? (arr_0 [i_0] [i_3]) : ((max(var_14, var_13))))))));
            arr_12 [i_0] [i_3] = (min((((var_3 || ((min(var_14, (arr_5 [i_0] [i_0]))))))), ((((max((arr_11 [5] [i_0] [1]), (arr_9 [i_0] [i_0] [i_0])))) ? (arr_0 [i_0] [12]) : (arr_4 [i_0] [i_0])))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = (min(var_20, (((var_14 * (arr_14 [3] [3]))))));
                        var_21 = (arr_15 [i_0] [i_0] [i_0]);
                        var_22 = (max(var_22, var_15));
                    }
                }
            }
            var_23 = (((((arr_3 [i_4 - 2]) + var_9)) << (((arr_16 [5]) - 88))));
            var_24 = ((~var_17) ? (var_12 || var_3) : var_12);
            var_25 = var_13;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_26 = ((((arr_23 [i_0] [i_0] [8] [i_7] [i_8 + 1]) ? var_14 : var_5)));
                    arr_25 [i_7] [i_8] = (arr_19 [i_0]);
                    var_27 = (max(var_27, (!var_11)));
                }
                var_28 = var_7;
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_29 = ((~((var_6 ? var_3 : var_5))));
                            arr_34 [i_10] [i_4] = ((-(arr_8 [4] [i_4] [i_11])));
                            var_30 = (min(var_30, (arr_15 [i_0] [i_9] [i_10])));
                            var_31 = (!var_1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_32 ^= (((((var_16 ? (arr_29 [i_4] [i_0]) : var_11))) ? (arr_5 [i_0] [i_0]) : var_15));
                            arr_40 [i_4] [i_12] [i_12] [7] [i_13] = var_4;
                            var_33 = var_6;
                        }
                    }
                }
                var_34 = ((~(arr_27 [12] [12])));
            }
        }
        for (int i_14 = 1; i_14 < 11;i_14 += 1)
        {
            var_35 = var_6;
            arr_44 [9] [i_0] = ((((min((arr_0 [5] [13]), var_3)))) ? ((max((!var_11), (((arr_9 [i_0] [i_0] [i_14]) <= var_3))))) : var_3);
            arr_45 [i_14] [i_14 - 1] [i_0] = (max(var_7, var_17));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        var_36 = (arr_9 [i_0] [i_0] [11]);
                        arr_53 [i_15] [i_17] = (arr_50 [i_0] [i_0] [i_16] [5]);
                    }
                }
            }
            var_37 = var_9;
            arr_54 [i_0] = ((-((var_10 >> (((max(var_3, var_0)) + 465))))));
        }
        var_38 = (max((max(var_16, (max((arr_51 [8] [8]), var_16)))), ((max(var_15, (((arr_26 [i_0]) - var_2)))))));
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_39 = ((!(((max(var_4, (arr_5 [i_18] [i_18])))))));
        arr_58 [i_18] = (((((var_9 ? ((max((arr_56 [i_18]), (arr_0 [i_18] [i_18])))) : (max(var_4, (arr_2 [i_18] [i_18])))))) ? ((min(((((arr_13 [i_18] [i_18]) == var_16))), var_8))) : var_8));

        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            arr_62 [2] [i_18] = (arr_13 [i_18] [i_19]);
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_40 = ((((var_11 || ((max((arr_68 [i_22]), var_0))))) ? ((((min(var_9, var_6))) >> (var_9 - 1131))) : ((-((max(var_7, var_8)))))));
                            arr_72 [i_18] [4] = (arr_48 [i_18]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 15;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    {
                        var_41 += (((max((2126923978 ^ 0), (arr_60 [i_18] [i_18])))) == (arr_23 [2] [2] [i_23] [2] [i_23]));

                        for (int i_25 = 1; i_25 < 13;i_25 += 1)
                        {
                            arr_83 [i_18] [0] [i_18] [i_18] [i_18] = ((((((max(var_11, (arr_59 [i_18] [i_19] [i_25]))) || (var_11 <= var_16))))));
                            var_42 = (max(var_42, var_7));
                            arr_84 [i_25] [i_24] [i_18] [i_19] [i_18] = (arr_0 [i_25] [i_24]);
                        }
                    }
                }
            }
        }
        for (int i_26 = 1; i_26 < 14;i_26 += 1)
        {
            var_43 = var_2;
            var_44 = ((max(var_14, ((min(var_3, var_14))))));
            /* LoopNest 2 */
            for (int i_27 = 3; i_27 < 13;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 15;i_28 += 1)
                {
                    {
                        var_45 = (max((((((var_5 + var_15) + 2147483647)) >> (((arr_51 [i_18] [2]) - 16822)))), (arr_82 [i_28] [i_26 + 1] [i_18])));
                        var_46 *= (var_16 << var_8);
                        var_47 = (max((arr_32 [i_18] [i_18] [i_18]), (min((arr_87 [i_18] [1]), ((max(var_6, var_6)))))));
                        var_48 = (max(var_48, ((min(((((arr_20 [i_26 - 1] [i_26 - 1] [i_28]) - var_5))), var_15)))));
                        var_49 = (max(((((max(var_5, var_14))) ? var_2 : var_15)), (~var_2)));
                    }
                }
            }
            arr_93 [i_18] [i_18] [i_18] = (max((max(var_8, var_7)), ((((((var_17 ? var_13 : var_3))) == var_2)))));
        }
        for (int i_29 = 0; i_29 < 15;i_29 += 1)
        {
            var_50 = (arr_19 [i_18]);
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 15;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 15;i_31 += 1)
                {
                    {
                        arr_101 [i_18] [i_18] [i_18] [i_18] = var_11;
                        arr_102 [i_18] [i_29] [i_30] [i_18] = (max((!var_10), (var_12 == var_0)));
                    }
                }
            }
            var_51 = (max(var_51, (arr_79 [i_18] [i_29] [i_29] [i_29] [i_29] [12])));
            var_52 ^= (min((min((min((arr_23 [i_29] [i_18] [i_18] [7] [i_18]), var_15)), (((var_11 << (((arr_23 [i_18] [i_18] [1] [i_29] [i_29]) - 10288039698584392381))))))), ((min(var_15, (min((arr_86 [12] [12]), var_11)))))));
        }

        for (int i_32 = 0; i_32 < 15;i_32 += 1)
        {
            var_53 = (max((((~((var_6 << (var_10 - 9094227630681253421)))))), (arr_55 [i_18] [i_32])));
            arr_106 [i_18] [i_18] = var_16;
            var_54 += ((max((max(var_16, var_9)), (arr_39 [12] [i_32] [12] [7] [7] [i_18] [i_18]))));
        }
    }
    for (int i_33 = 0; i_33 < 15;i_33 += 1) /* same iter space */
    {
        arr_109 [i_33] [0] = var_3;
        arr_110 [14] = var_14;
        var_55 = var_13;
        var_56 = (max(var_56, ((min((max((var_2 + var_6), (((~(arr_96 [i_33] [i_33])))))), ((max((min(var_6, var_3)), (max(var_15, var_9))))))))));

        /* vectorizable */
        for (int i_34 = 1; i_34 < 12;i_34 += 1)
        {
            var_57 = var_17;
            arr_113 [i_33] [i_33] [i_34] = (((((var_16 ? (arr_95 [i_33] [1] [i_34]) : (arr_64 [8] [i_33] [i_33] [i_33])))) ? var_15 : (((var_8 ? var_14 : var_14)))));
            var_58 = (((arr_82 [i_33] [i_33] [i_34]) && var_0));
            var_59 += (~var_16);
        }
        for (int i_35 = 0; i_35 < 15;i_35 += 1) /* same iter space */
        {
            var_60 = (max(var_60, (arr_86 [i_35] [6])));
            var_61 -= (max(((((arr_85 [10] [9]) | (arr_48 [i_33])))), ((((max((arr_104 [i_33] [1] [i_35]), var_13))) ? var_9 : (((arr_10 [i_35]) ? var_0 : var_10))))));
        }
        for (int i_36 = 0; i_36 < 15;i_36 += 1) /* same iter space */
        {

            for (int i_37 = 1; i_37 < 1;i_37 += 1)
            {
                /* LoopNest 2 */
                for (int i_38 = 1; i_38 < 12;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 15;i_39 += 1)
                    {
                        {
                            var_62 = (min(var_62, var_2));
                            var_63 = (max(var_13, (min((max(var_9, var_5)), (arr_74 [11] [i_39])))));
                        }
                    }
                }
                arr_125 [7] [i_36] [i_36] [i_37] = (min(((min(120, 120))), (arr_41 [i_37 - 1] [i_33] [i_33])));
                var_64 -= (max((arr_70 [i_36] [i_33]), var_6));
                var_65 = ((((min(var_6, (max(var_13, var_0))))) ? var_4 : ((((max((arr_13 [i_37] [i_33]), var_3))) * ((max((arr_79 [i_33] [i_33] [1] [i_36] [1] [i_37]), var_7)))))));
                arr_126 [1] [i_36] [11] [11] = (max(var_2, var_3));
            }
            for (int i_40 = 0; i_40 < 15;i_40 += 1)
            {
                arr_129 [i_33] [10] [i_40] [i_40] = (min((max(var_12, (min(var_12, (arr_6 [i_33] [10] [i_36] [i_36]))))), (((max((arr_41 [i_33] [14] [14]), (arr_32 [i_33] [i_36] [i_40])))))));
                arr_130 [3] [0] [3] = ((max((min(34, 1316755452)), (((!(arr_5 [i_36] [5])))))));
                arr_131 [6] [1] [i_40] = var_6;
                var_66 = ((min((((var_10 <= (arr_43 [i_36] [i_36])))), ((var_7 ? var_3 : var_3)))));
                var_67 = (max(var_7, (arr_94 [10] [i_36] [i_36])));
            }
            for (int i_41 = 0; i_41 < 15;i_41 += 1)
            {

                for (int i_42 = 2; i_42 < 12;i_42 += 1)
                {
                    var_68 = (-((min((min(var_9, var_1)), var_9))));
                    arr_136 [i_41] = (max(((var_17 >> ((((max(var_13, var_4))) - 30381)))), (((!(arr_99 [i_33] [1] [i_33]))))));
                }
                var_69 = ((((max((arr_47 [i_33] [i_36] [i_41]), ((var_3 ? var_15 : var_9))))) ? (arr_52 [i_33] [11] [i_41] [i_41]) : ((var_9 << ((((((-(arr_85 [i_33] [i_41]))) + 1615193900)) - 4))))));
                /* LoopNest 2 */
                for (int i_43 = 0; i_43 < 15;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 15;i_44 += 1)
                    {
                        {
                            var_70 = (min(var_70, (min((arr_115 [1] [i_44]), (max(((max((arr_79 [i_33] [i_33] [i_33] [14] [14] [9]), var_13))), (((arr_121 [i_44] [i_44] [i_44] [i_44] [0] [0]) ? var_15 : var_11))))))));
                            arr_143 [i_33] [i_41] [i_33] = (max(((var_15 ? ((((arr_86 [i_41] [0]) ? var_4 : var_12))) : ((var_11 * (arr_37 [i_41] [12] [i_43] [10] [4]))))), var_1));
                            arr_144 [i_41] = var_12;
                        }
                    }
                }
            }
            for (int i_45 = 0; i_45 < 1;i_45 += 1)
            {
                arr_148 [i_33] [i_45] = (min(((var_5 ? (max((arr_95 [i_33] [i_33] [i_45]), var_13)) : var_17)), (arr_49 [i_33] [6] [6] [6])));
                arr_149 [i_45] [i_36] [i_33] [6] = var_5;
                /* LoopNest 2 */
                for (int i_46 = 0; i_46 < 15;i_46 += 1)
                {
                    for (int i_47 = 0; i_47 < 15;i_47 += 1)
                    {
                        {
                            arr_155 [i_46] [i_36] [3] [i_46] [10] = (arr_21 [i_46] [i_46] [i_45] [i_46]);
                            arr_156 [2] [i_47] [0] [i_46] [i_47] [i_46] [i_46] = (min(((var_17 | (((arr_22 [1] [i_46] [i_33] [i_33]) ? var_5 : var_2)))), var_2));
                        }
                    }
                }
                arr_157 [i_36] [i_36] [i_33] = (min((var_2 / var_1), (max(var_15, (arr_27 [i_36] [i_45])))));
                arr_158 [i_36] [i_33] = var_10;
            }
            arr_159 [13] = (max((((((max(var_17, var_11))) ? var_11 : var_8))), (max((arr_50 [10] [i_33] [i_36] [i_36]), ((min(var_12, (arr_59 [0] [i_33] [i_36]))))))));

            for (int i_48 = 4; i_48 < 14;i_48 += 1)
            {
                arr_163 [1] = (var_11 < 1375);
                arr_164 [i_36] = min(var_10, ((min((((arr_33 [i_48]) ? var_13 : var_13)), var_3))));
            }
            var_71 += (max(((min(var_9, (arr_29 [i_33] [i_36])))), ((var_11 ? var_16 : var_13))));
        }
        /* vectorizable */
        for (int i_49 = 0; i_49 < 15;i_49 += 1)
        {
            var_72 = (arr_124 [i_33] [i_33] [1] [13] [i_49] [i_33]);
            var_73 ^= (arr_13 [i_33] [i_49]);
            var_74 ^= (!1048575);
        }
    }
    var_75 = (min(var_2, ((min((max(var_15, var_4)), var_8)))));

    for (int i_50 = 0; i_50 < 19;i_50 += 1)
    {
        arr_169 [i_50] = (max(((((max(var_8, var_17))) ? (arr_168 [i_50] [i_50]) : ((var_1 ? (arr_167 [i_50] [i_50]) : (arr_167 [i_50] [0]))))), ((~(arr_168 [i_50] [i_50])))));
        var_76 = ((arr_167 [i_50] [i_50]) | ((min((arr_167 [1] [15]), var_3))));
        arr_170 [5] = (min(var_11, (!var_11)));
    }
    for (int i_51 = 1; i_51 < 21;i_51 += 1)
    {
        arr_174 [i_51 + 1] = ((arr_171 [i_51] [i_51]) ? var_7 : (((!(((arr_172 [i_51] [i_51]) < (arr_172 [1] [1])))))));
        var_77 = ((((arr_173 [i_51 - 1]) ? (min(var_14, var_12)) : var_10)));
        arr_175 [i_51] = (((max(var_1, var_0))) ? var_13 : (min(var_7, (((arr_172 [i_51] [i_51]) ? (arr_171 [i_51 + 1] [i_51]) : var_9)))));
    }
    var_78 = (((var_3 ? var_1 : (var_15 ^ var_1))));
    #pragma endscop
}
