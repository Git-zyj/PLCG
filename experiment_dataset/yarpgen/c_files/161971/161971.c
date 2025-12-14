/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((!(arr_0 [i_0])));
                            var_10 = (max(var_10, ((max((arr_12 [2]), var_4)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] = (arr_11 [i_1 + 1] [15] [i_4]);
                                var_11 = (max(var_11, var_7));
                                var_12 *= min(((((max(var_5, (arr_11 [i_0 + 3] [i_0 + 3] [9]))) <= (var_6 || var_8)))), var_6);
                                var_13 = (((var_6 - (arr_8 [i_2] [i_2] [i_2 + 1] [i_2 - 1]))));
                                var_14 = ((arr_14 [i_0 + 2]) + var_7);
                            }
                        }
                    }
                }
                arr_17 [i_0 + 3] [14] [i_0] |= (max(var_6, (((!(arr_11 [i_0 - 1] [14] [i_0 - 1]))))));

                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (32767 ? -70 : 77);
                    arr_21 [i_0] [i_0] = var_5;

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_15 = (min(var_15, (((-(min((var_5 * var_3), var_0)))))));
                        var_16 = (min((arr_6 [i_5] [i_1]), 78));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = (arr_7 [i_0 + 2] [i_0 + 2] [1]);
                        var_18 = (var_0 - -70);
                        var_19 = (max(var_19, (((!(arr_24 [i_0] [i_0 + 1] [i_7] [i_0 + 2]))))));
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_0 + 1] [i_1] [i_0] [i_8] = (arr_2 [i_1]);
                        var_20 = (max((max(var_4, (arr_28 [i_8] [i_8 - 3] [i_5 - 1] [i_5 - 2] [i_1] [i_0]))), ((+(min((arr_14 [i_5]), var_0))))));
                        var_21 = (max(var_21, ((max(var_3, var_3)))));
                        var_22 = ((arr_11 [i_0] [i_1] [i_5 - 3]) ? var_3 : ((max(var_3, (arr_10 [i_0 + 2] [i_0] [i_0] [i_0 + 1])))));
                    }
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_5] [i_9 + 1] [i_1] = (min(79, -70));
                        var_23 = (max((arr_5 [i_0]), ((-(arr_11 [i_0] [i_0] [i_0])))));
                    }
                }
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    var_24 = (((arr_29 [i_0] [i_0] [i_10] [i_0] [i_10]) > (arr_11 [i_0] [i_1] [i_10 - 3])));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_43 [i_0] [i_1] [i_0] [i_11] = (arr_15 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0] [i_0]);
                        var_25 = (arr_6 [i_0] [i_1]);
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_26 -= ((var_1 <= (min((~var_8), (~var_6)))));
                        arr_46 [i_0] [i_1 - 1] = (min(((111 ? 1073741824 : -7894200512717912458)), (arr_4 [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_27 *= ((min((arr_42 [i_13] [i_1 + 1]), (arr_42 [i_13] [i_13]))));
                        var_28 = (min(var_28, ((max((((arr_41 [i_0] [i_0 + 2] [i_10 - 1] [i_10] [i_13]) & (arr_30 [i_1] [i_1] [i_1 + 1] [i_13]))), var_7)))));
                        arr_51 [i_0] [i_13] [i_13] &= var_3;
                        arr_52 [i_0] = var_8;
                    }

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_55 [i_0] [i_0] [i_0 + 2] [i_0] = (max((((~(arr_53 [i_0 + 2] [i_1 + 1] [i_1 + 1])))), var_3));
                        var_29 = min((!var_2), (max((max(var_8, var_1)), var_6)));
                    }
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    arr_58 [i_0] [i_1] [i_0] = var_6;
                    var_30 = (((((~(min(var_5, (arr_23 [i_0] [i_0 - 1] [i_0] [i_1] [i_15])))))) ? ((min((((arr_6 [i_0] [i_0]) ? var_2 : var_1)), (arr_11 [i_0 + 2] [i_0 + 2] [i_1 + 1])))) : (min((arr_54 [i_0] [i_1 - 1] [i_15] [i_15] [i_0]), (min(var_6, var_4))))));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_63 [i_0] [i_17] [i_0] [i_17] [i_17] [i_17] [i_0] = var_0;
                                var_31 = var_5;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    arr_66 [i_0 + 1] [i_1] [i_0] = (((arr_28 [i_0] [i_1] [6] [i_0 + 2] [i_1] [i_0]) + var_5));
                    var_32 = (!var_0);
                    arr_67 [i_0] [i_0] [i_18 - 1] [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);
                    arr_68 [i_0] [i_0] [i_0] = (arr_27 [15] [15] [i_1 - 1] [i_0] [15] [15]);
                    arr_69 [i_0] [i_1] [2] [i_18 - 1] |= var_3;
                }
            }
        }
    }
    var_33 = var_4;
    #pragma endscop
}
