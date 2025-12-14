/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((-(~8388607)));
                    arr_7 [i_1] [i_1] [i_1] [i_0] = ((-(arr_4 [i_0 + 1] [i_1 - 1] [i_2 - 1])));
                    var_16 = var_14;
                }
            }
        }
    }
    var_17 = (max(((max(79, var_14))), -209042834));
    var_18 = var_12;
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                var_20 = (min(var_20, ((((((arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 2]) ? (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 1]))) - var_8)))));

                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [i_3] [i_4] [i_6] = (min(13514, (!-34)));
                                arr_21 [i_3] [i_4 - 2] [i_4 - 1] [i_5] [i_6] [i_6] |= (min(((var_6 ? (arr_5 [i_5 - 1] [i_6 - 1] [i_5 - 1] [i_4 + 1]) : var_9)), var_4));
                                arr_22 [i_7] [i_6] [i_5] [i_4 + 1] [i_3] = ((((((arr_17 [i_5] [i_4 - 2] [i_4 - 2] [i_6]) ? (arr_8 [i_4 - 1]) : (arr_17 [i_3] [i_4 - 1] [i_5 - 1] [i_5 - 1])))) ? (!10934417167934604737) : (arr_8 [i_4 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_21 = ((-(((arr_14 [i_3] [i_3]) >> (((((arr_16 [i_5] [i_3]) - var_1)) - 2628894038))))));
                                arr_27 [i_9] = 13;
                                var_22 = (min(var_22, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_23 = (0 ^ 99);
                                var_24 = -0;
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_43 [i_12] [i_12] = ((~(arr_37 [i_3] [i_4] [i_12] [i_14])));
                                var_25 = var_8;
                            }
                        }
                    }
                    arr_44 [i_12] [i_12] [i_3] = (((arr_41 [i_3] [i_3] [i_3] [i_3] [i_3]) && (~var_5)));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                arr_50 [i_3] [i_12] [i_16] = (0 >> var_7);
                                var_26 = (max(var_26, (((max((arr_13 [i_16] [i_12 - 1] [i_4 - 2] [i_3]), ((var_0 ? var_10 : (arr_49 [i_3] [i_3] [i_12] [i_12] [i_3] [i_12])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_27 = (((((arr_52 [i_12 - 1] [i_17 - 3]) - (arr_52 [i_3] [i_17]))) % var_6));
                                var_28 = ((+(max((max((arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1]), var_0)), (arr_25 [i_18] [i_17] [i_12] [i_4 + 2] [i_3])))));
                                var_29 = (min(var_29, (((min(var_11, (var_9 % -3793896755565334467)))))));
                                arr_56 [i_3] [i_12] [i_3] [i_17 - 1] = (((((!(((arr_54 [i_12] [i_4 + 2]) <= 7512326905774946878))))) >> ((((max((arr_19 [i_3] [i_3] [i_3] [i_3]), (arr_40 [i_3] [i_4 + 2] [i_12 - 1])))) - 65444))));
                            }
                        }
                    }
                }
                for (int i_19 = 1; i_19 < 1;i_19 += 1) /* same iter space */
                {
                    var_30 = (!var_12);
                    var_31 = (max(var_31, var_10));

                    for (int i_20 = 2; i_20 < 9;i_20 += 1) /* same iter space */
                    {
                        var_32 = ((((((arr_23 [i_20] [i_20] [i_20 + 1] [i_20 + 3]) ? (arr_23 [i_19] [i_19 - 1] [i_20 - 1] [i_19 - 1]) : (arr_23 [i_4] [i_19] [i_20 + 2] [i_19])))) ? ((max((arr_32 [i_4] [i_4] [i_20 + 3] [i_20 - 1] [i_20] [i_20] [i_4]), (arr_32 [i_4] [i_4] [i_20 + 3] [i_4] [i_20] [i_20] [i_20])))) : (max((arr_32 [i_3] [i_3] [i_20 - 2] [i_3] [i_3] [i_20] [i_20 + 2]), (arr_23 [i_19] [i_20 + 2] [i_20 + 1] [i_20 + 1])))));
                        arr_61 [i_3] [i_4] [i_3] [i_3] &= ((min(var_5, -5)));

                        for (int i_21 = 1; i_21 < 11;i_21 += 1)
                        {
                            arr_64 [i_19] [i_19] [i_19 - 1] [i_19] [i_4] [i_19] = (((((((var_13 ? var_9 : var_4))) && (!-34))) ? (((arr_16 [i_20] [i_4]) + ((~(arr_5 [i_3] [i_4 - 2] [i_19 - 1] [i_20 - 2]))))) : (~-1573724849)));
                            var_33 = ((~(arr_41 [i_3] [i_4 - 2] [i_19] [i_4 - 2] [i_21])));
                            arr_65 [i_3] [i_19 - 1] [i_19] [i_3] = -34;
                            var_34 = arr_15 [i_3];
                            var_35 -= (-var_1 || 1);
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 12;i_22 += 1)
                        {
                            arr_68 [i_3] [i_4] [i_19 - 1] [i_19] [i_20 - 2] [i_22] [i_4] = -6522557638800286071;
                            var_36 ^= ((((arr_1 [i_20]) + 9223372036854775807)) >> (((arr_1 [i_3]) + 7385609579769897658)));
                            var_37 += ((~(arr_54 [i_3] [i_4 + 2])));
                            var_38 = (arr_34 [i_19] [i_20 + 3] [i_22]);
                            var_39 -= var_11;
                        }
                        var_40 = (arr_25 [i_20] [i_4] [i_4] [i_4] [i_3]);
                    }
                    for (int i_23 = 2; i_23 < 9;i_23 += 1) /* same iter space */
                    {
                        arr_71 [i_19] [i_19] [i_4] [i_19] = 2623458302;
                        var_41 += (min(((min((((arr_33 [i_23] [i_19 - 1] [i_4] [i_3]) ? (arr_4 [i_3] [i_3] [i_3]) : var_4)), (arr_35 [i_19])))), (((arr_13 [i_23] [i_19 - 1] [i_4] [i_3]) ? (((-(arr_10 [i_3] [i_4])))) : (arr_1 [i_3])))));
                        var_42 = (min(var_42, ((max(((-(arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]))), (min((arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]), (arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]))))))));
                        var_43 = var_5;
                        arr_72 [i_3] [i_19] [i_3] = 147372804;
                    }
                }
            }
        }
    }
    #pragma endscop
}
