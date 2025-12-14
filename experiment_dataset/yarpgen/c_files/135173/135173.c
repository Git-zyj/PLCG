/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((!(!var_5))))));
    var_21 = (min(36, (!-23641)));
    var_22 = max((~32256), (max(-var_19, var_14)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_23 = ((+((+(min((arr_1 [i_0]), var_11))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_4 [4] [4] = ((-(max(var_0, var_15))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                var_24 = ((~(((!(arr_3 [i_2]))))));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] [14] = ((~(~var_19)));
                    var_25 = (max(var_25, var_17));
                    arr_10 [10] |= ((~(arr_1 [i_0])));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_26 *= ((!((!(arr_6 [i_1] [i_2] [i_4])))));
                    arr_13 [0] [i_1] [i_1] [i_1] [i_1] = var_6;
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_27 = (((~(arr_11 [i_0] [i_0] [i_0]))));
                            arr_18 [i_6] [i_5] [i_0] [i_1] [i_0] = (arr_15 [5] [i_1] [i_2 - 3] [i_5]);
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_2] [i_0] = var_13;
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_28 |= ((!((!((max(60782, 20547)))))));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_25 [i_7] [i_8] = (~(min(((~(arr_5 [i_0] [i_1] [i_0] [i_8]))), (~var_2))));

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        var_29 = ((!(((~((max(22326, 33301))))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(~var_7)));
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_7] [i_10] = (max((min(var_11, (((-(arr_31 [12] [i_1])))))), (min(((-(arr_1 [i_0]))), -var_16))));
                        var_30 = ((max(var_18, 0)));
                        var_31 = (min(var_31, (((~(max((~var_13), ((~(arr_21 [i_8]))))))))));
                        arr_33 [11] [0] [i_7] [i_7] [i_7] = ((~(!var_2)));
                        arr_34 [i_0] [i_1] [14] [i_8] [i_8] [i_8] [i_10] = ((!((max((~var_17), (min(var_11, (arr_5 [i_10 + 2] [i_8] [i_1] [7]))))))));
                    }
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        var_32 = ((~(arr_22 [i_11])));
                        arr_39 [i_7] [i_0] [i_11 - 2] &= ((+(max((!var_0), (~var_14)))));
                        arr_40 [i_0] [i_1] [i_11] [i_8] [i_8] [8] [i_8] = min(((-(arr_15 [i_0] [i_7] [i_8] [4]))), (~-86));
                    }
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_44 [i_0] [i_1] [i_7] [i_12] = var_5;
                    var_33 ^= (((-(arr_8 [i_0] [i_7] [i_12]))));
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_50 [i_1] [i_1] [i_14] [i_7] [i_14] = (arr_45 [i_1] [i_7] [i_13] [i_14]);
                        var_34 = (((-((~(arr_37 [i_0] [i_14] [i_7] [i_13] [i_14]))))));
                        var_35 = min(((~(~var_5))), ((~(min(var_6, var_2)))));
                    }
                    for (int i_15 = 3; i_15 < 12;i_15 += 1)
                    {
                        var_36 = (min(var_36, ((min(var_3, (min((arr_7 [i_0] [i_1] [i_13] [i_15 + 2]), (arr_42 [i_0]))))))));
                        arr_54 [7] [i_1] [10] = ((~(min((~var_3), (max(var_3, (arr_16 [i_0] [i_0] [i_13] [i_0] [i_1] [i_1] [i_0])))))));
                        arr_55 [10] [i_0] [i_1] [i_7] [3] [i_7] = (max((((!((!(arr_38 [i_1] [8] [i_0] [i_1])))))), (~var_15)));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_37 ^= var_11;
                        var_38 = ((min((((~(arr_8 [i_7] [i_1] [i_0]))), ((-(arr_11 [i_0] [i_0] [i_0])))))));
                        arr_58 [i_0] [i_1] [i_1] [i_1] = (min((arr_17 [i_0] [i_0] [i_1] [i_7] [i_13] [i_13] [i_16]), (arr_22 [4])));
                        var_39 = (min(var_39, ((min(var_8, (min((((!(arr_14 [i_0] [i_0] [i_0] [i_0])))), (max(var_3, (arr_45 [i_0] [i_0] [i_16] [7]))))))))));
                    }
                    var_40 = (max(var_40, var_8));
                    var_41 = (max(var_41, var_9));

                    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        var_42 = (max(var_42, ((min(var_2, var_1)))));
                        var_43 = (min(var_43, var_9));
                        var_44 *= (min((arr_5 [i_0] [i_1] [i_1] [i_17]), (max(var_12, (arr_60 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_45 = ((!(!32237)));
                    }
                    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        arr_63 [i_13] [i_13] [i_13] = (max(((min((min(var_4, (arr_56 [i_7] [i_1] [i_7] [i_13] [i_18] [i_18]))), (!var_14)))), (arr_5 [i_18] [i_13] [i_7] [6])));
                        arr_64 [i_0] [i_0] [i_0] [12] [i_0] &= (((min(var_16, (arr_26 [i_0] [13] [i_13])))));
                        var_46 = (max(var_46, var_8));
                    }
                }
                for (int i_19 = 3; i_19 < 13;i_19 += 1)
                {
                    var_47 = (arr_61 [i_0] [i_0] [i_1] [i_0] [i_19] [i_0]);
                    arr_67 [i_0] [i_1] [i_7] [2] [i_19 - 2] = ((!((min(var_4, (max(var_6, (arr_43 [i_0] [i_1]))))))));
                    var_48 = (min(var_48, (((~((min(var_12, (arr_16 [i_1] [i_7] [i_7] [i_7] [i_1] [i_0] [i_0])))))))));
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 13;i_21 += 1)
                    {
                        {
                            arr_72 [i_0] [i_0] [i_0] [i_20] [i_0] = (arr_8 [1] [8] [i_21]);
                            var_49 = -var_8;
                            arr_73 [i_21] [i_21] [i_21] [i_20] [i_7] [i_1] [i_0] = -var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 14;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 14;i_23 += 1)
                    {
                        {
                            var_50 = (min(var_50, (arr_8 [i_0] [i_1] [i_7])));
                            arr_80 [i_0] [i_0] [7] [i_0] [i_0] = (~var_18);
                            arr_81 [i_23 - 1] [i_23] [i_23] [i_23 - 1] [i_23] [i_23 - 1] [6] = (min((((-(arr_66 [i_0] [10] [10])))), (max((min((arr_46 [i_0] [0] [i_7] [i_22]), var_12)), var_17))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                var_51 = (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 14;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 11;i_26 += 1)
                    {
                        {
                            var_52 = (min(var_52, (((~(~var_6))))));
                            var_53 = (min(var_53, (((~((-(arr_51 [6] [i_0] [i_1] [i_24] [1] [1] [i_26]))))))));
                        }
                    }
                }
            }
        }
        for (int i_27 = 0; i_27 < 15;i_27 += 1) /* same iter space */
        {
            var_54 = ((~(min((~var_13), 4722))));

            for (int i_28 = 2; i_28 < 13;i_28 += 1)
            {
                var_55 = var_8;

                for (int i_29 = 1; i_29 < 14;i_29 += 1) /* same iter space */
                {
                    arr_98 [i_0] = ((-(arr_14 [13] [i_27] [i_28 + 2] [i_27])));
                    var_56 = (!-20547);
                }
                /* vectorizable */
                for (int i_30 = 1; i_30 < 14;i_30 += 1) /* same iter space */
                {
                    var_57 = (max(var_57, 20562));
                    arr_102 [i_30] [i_30 - 1] [i_30 - 1] [i_30] = ((-(!var_13)));

                    for (int i_31 = 0; i_31 < 15;i_31 += 1)
                    {
                        var_58 = -var_14;
                        arr_106 [i_0] [i_27] [i_28 - 2] [i_30 + 1] = -var_12;
                        var_59 += (~var_3);
                        var_60 ^= (~var_14);
                    }
                    for (int i_32 = 1; i_32 < 13;i_32 += 1)
                    {
                        var_61 &= (~var_11);
                        arr_109 [6] [i_27] = (!var_0);
                    }
                }
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 15;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 15;i_34 += 1)
                    {
                        {
                            var_62 = ((-((min(244, -29)))));
                            arr_115 [i_0] [i_0] [i_0] [i_0] [10] = max((min(((-(arr_79 [i_27] [12] [5] [5]))), (arr_71 [i_0] [i_0] [i_28]))), (((!(!var_1)))));
                            var_63 += (arr_70 [i_0] [i_27] [i_34] [i_27] [i_34] [i_33] [i_33]);
                            var_64 += (!-var_19);
                        }
                    }
                }
                var_65 = (min(var_65, ((max(var_19, var_4)))));
            }
        }
        for (int i_35 = 0; i_35 < 15;i_35 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 15;i_36 += 1)
            {
                for (int i_37 = 1; i_37 < 11;i_37 += 1)
                {
                    {
                        arr_122 [i_37] [i_36] [i_36] = -9223372036854775807;
                        var_66 ^= (min(((~(min(var_19, (arr_88 [3] [3] [i_36]))))), (arr_62 [3] [3] [i_36] [i_37] [i_37])));
                    }
                }
            }
            arr_123 [i_0] = (min((!var_7), var_0));
            var_67 = (min(36215, (-32767 - 1)));
            /* LoopNest 2 */
            for (int i_38 = 1; i_38 < 14;i_38 += 1)
            {
                for (int i_39 = 2; i_39 < 13;i_39 += 1)
                {
                    {
                        arr_129 [i_35] [i_38] [i_35] = (min((max((arr_53 [7] [i_35] [i_35] [i_35] [i_39 - 2]), (((-(arr_103 [i_0] [i_0] [i_38] [i_38] [i_38])))))), (max(-60784, (~var_18)))));
                        arr_130 [i_0] [i_38] [i_0] [i_35] = (min(((~((-(arr_116 [i_38] [i_35] [13]))))), (arr_93 [5] [i_39])));

                        for (int i_40 = 3; i_40 < 13;i_40 += 1)
                        {
                            arr_135 [i_0] [i_0] [i_0] [i_0] [i_0] [i_38] = var_19;
                            var_68 *= var_18;
                        }
                        var_69 = var_18;
                    }
                }
            }
            arr_136 [i_0] [i_35] = ((!((!((max(var_5, (arr_112 [i_35] [i_35] [i_35] [9] [0] [i_0]))))))));
        }
        for (int i_41 = 0; i_41 < 15;i_41 += 1)
        {
            arr_140 [i_41] = ((~(max((!var_14), ((-(arr_87 [2] [i_41] [i_41] [7] [i_0] [i_41])))))));
            arr_141 [i_0] [i_0] = (~var_12);
            var_70 = var_2;
        }
        arr_142 [i_0] = (min(((~(arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max((min(var_19, var_5)), (!var_4))))));

        for (int i_42 = 0; i_42 < 15;i_42 += 1)
        {
            var_71 -= (arr_69 [i_0] [i_42] [13] [i_42] [i_42] [i_42]);
            arr_145 [i_42] [i_42] = var_1;

            /* vectorizable */
            for (int i_43 = 0; i_43 < 15;i_43 += 1)
            {
                arr_148 [i_0] [i_42] [i_42] [6] = var_11;
                /* LoopNest 2 */
                for (int i_44 = 0; i_44 < 15;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 15;i_45 += 1)
                    {
                        {
                            arr_153 [i_0] [i_42] [i_42] [i_44] [i_45] = ((~(arr_121 [i_0] [i_44] [9])));
                            var_72 = (max(var_72, (((~(~var_13))))));
                            var_73 = (min(var_73, var_8));
                        }
                    }
                }
                var_74 = (max(var_74, (((!(~var_7))))));
            }
            var_75 = ((!(((+(max((arr_37 [i_0] [i_42] [i_42] [i_42] [i_42]), (arr_71 [i_0] [i_0] [14]))))))));
        }
    }
    for (int i_46 = 0; i_46 < 15;i_46 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_47 = 3; i_47 < 11;i_47 += 1)
        {
            for (int i_48 = 0; i_48 < 15;i_48 += 1)
            {
                for (int i_49 = 1; i_49 < 13;i_49 += 1)
                {
                    {
                        var_76 = var_1;
                        var_77 = (~((~(arr_37 [i_46] [i_48] [6] [i_48] [i_49]))));
                        arr_167 [i_49 + 2] = ((min(((~(arr_116 [i_46] [i_46] [i_48])), ((min((arr_101 [i_46] [13] [i_46] [4] [i_46] [i_46]), var_7)))))));
                    }
                }
            }
        }
        var_78 -= var_8;
        arr_168 [i_46] = (min((max((!var_15), (arr_24 [i_46] [i_46] [i_46] [i_46]))), (arr_157 [i_46] [i_46])));
    }
    #pragma endscop
}
