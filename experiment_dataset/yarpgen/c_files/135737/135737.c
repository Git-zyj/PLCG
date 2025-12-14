/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = (!0);
                    arr_10 [i_2] [i_2] [i_2] [i_2] &= var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] [i_0] = (((min((-1865670638 - 2483), (arr_0 [16])))) ? (!var_6) : (arr_3 [i_0] [i_0] [i_0]));
                                arr_17 [i_2] [i_0] [i_0] = (((((3552916102 ? (var_14 + var_11) : (0 - 2861909031)))) ? ((((max((arr_1 [i_0]), var_14))) ? var_6 : (var_0 + var_6))) : -var_12));
                                arr_18 [i_0] [i_1] [i_0] [i_3 + 1] [i_1] = ((!((((!1433058265) ? ((var_13 / (arr_11 [i_2] [i_2] [i_2] [i_4]))) : (((var_12 >= (arr_7 [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((!(((((max(0, 9))) ? -2683021380 : ((56 ? 2861909024 : 81)))))));
    var_17 = (~var_4);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] = var_12;
                                arr_35 [i_5] [6] [i_6] [i_5] [i_5] [6] [i_9] = (((-2214568246756480089 <= 2861909031) | 44572));
                            }
                        }
                    }
                    arr_36 [2] [i_6] [i_7] [4] = (arr_19 [i_5] [i_6]);
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    arr_40 [1] &= var_7;
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] = ((~(((1 >= 31) ? -2214568246756480090 : (arr_41 [i_5 + 4] [i_5 + 4] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 1])))));
                                arr_47 [i_5] [i_6] [i_5] [1] [i_6] = ((!(((((max(var_0, var_6))) ? ((var_0 ? var_4 : var_0)) : ((20964 ? 173 : 612990053)))))));
                                arr_48 [i_5] [i_11] [i_5] [i_6] [2] = (((!var_10) >= ((-(arr_26 [i_5])))));
                                arr_49 [i_11] [i_6] [i_10] [i_11 - 1] [i_12 - 1] [i_6] = (-(max(((var_8 ? var_1 : var_13)), (!2861909031))));
                            }
                        }
                    }
                    arr_50 [i_5] [i_10] [i_5] [i_5] = (max((!var_8), var_7));
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    arr_55 [i_5] = ((~((-(arr_25 [i_5] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_62 [i_5] [i_6] [i_13] [i_14] [i_6] [i_5] = (((((arr_60 [i_5 - 1]) ? var_5 : (arr_60 [i_5 - 1]))) ^ (arr_60 [i_5 + 2])));
                                arr_63 [i_5] [i_6] [i_5] [i_14] [i_15 - 1] = ((var_3 ? (((-(arr_30 [14] [i_6] [i_6] [i_6] [i_6])))) : (var_13 + var_13)));
                            }
                        }
                    }
                    arr_64 [i_13] [i_5] [i_13] [i_13] = (min(var_5, (max(var_8, (arr_39 [14])))));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_69 [i_5] [16] [i_6] [i_6] [i_16] [i_17] = ((((((arr_37 [i_5] [i_6]) ? (arr_37 [2] [i_6]) : (arr_37 [i_5 + 3] [i_17])))) >= (((var_5 & (arr_65 [i_6] [i_13] [i_16]))))));
                                arr_70 [i_5] [i_16 - 2] [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5] = ((((!(arr_29 [i_5 + 2] [i_6] [i_13] [i_16 + 3] [i_17]))) ? (((var_5 == (arr_59 [i_5 + 2] [i_6] [i_5] [i_16 - 2] [i_17])))) : ((~(arr_25 [i_5] [i_13])))));
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                {
                    arr_73 [i_5] [i_18] = (max(((min((((!(arr_51 [i_18])))), var_12))), (min(((var_2 ? (arr_23 [i_5 + 2] [i_6] [i_18]) : var_2)), var_14))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            {
                                arr_80 [i_19] [i_6] [i_19] [i_6] = (min((((~var_14) ? var_5 : (min(var_7, var_1)))), (((((((arr_52 [i_5 - 1]) << (((arr_44 [i_5] [i_6] [i_18] [8]) - 21084))))) ? ((min(var_5, var_13))) : ((min(var_5, var_13))))))));
                                arr_81 [i_5] [i_6] [i_19] [i_19] [i_20] = ((!(!var_0)));
                            }
                        }
                    }
                    arr_82 [i_5] = ((min(2861909024, (arr_54 [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 19;i_22 += 1)
                        {
                            {
                                arr_89 [i_5] [i_5] = ((!(!var_12)));
                                arr_90 [i_5] [i_5 + 4] [i_5] [i_5] [i_5] [i_5] [i_5] = (min(((((arr_28 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1]) * (arr_28 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1])))), (((arr_61 [i_5] [i_6] [i_18] [1] [i_5]) ? ((((arr_87 [i_5] [i_6] [i_5] [i_22] [i_5]) ? var_10 : var_11))) : ((var_9 ? (arr_37 [i_5] [i_5]) : var_5))))));
                            }
                        }
                    }
                }
                arr_91 [i_5] [1] |= var_5;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        {
                            arr_97 [i_5] [i_5] [i_23] [i_23] [i_6] [i_5] = ((-((var_0 ? var_15 : (var_3 ^ var_1)))));

                            for (int i_25 = 0; i_25 < 19;i_25 += 1)
                            {
                                arr_100 [i_5] [i_5] [i_5] [i_5] [8] [i_23] [i_24] = (arr_26 [i_5]);
                                arr_101 [i_23] [i_24] [i_23] = (max(((((arr_27 [i_5 + 3] [i_24 - 1] [i_24] [i_24 - 1]) ? var_6 : (arr_29 [i_5] [i_24 - 1] [i_23] [i_23] [i_5 + 3])))), (max((arr_29 [i_5] [i_24 + 1] [i_23] [i_23] [i_5 - 1]), (arr_24 [i_5 + 1])))));
                            }
                        }
                    }
                }
                arr_102 [i_5] [i_5] [i_5] = (((!2214568246756480066) + (arr_30 [i_5] [16] [i_6] [i_5] [i_5])));
            }
        }
    }
    #pragma endscop
}
