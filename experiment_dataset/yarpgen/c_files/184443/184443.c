/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((((max(((~(arr_0 [i_0]))), var_7))) ? ((max((arr_1 [i_0 - 1]), (min(17155, 38))))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0 - 1] = ((((((1230712576 + (arr_1 [i_0]))))) ? ((-(arr_0 [i_0 - 1]))) : ((min((arr_0 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_5 [i_1 - 2]) ? (arr_5 [i_1]) : 3));
        arr_7 [i_1 - 2] = (arr_4 [i_1 - 1]);
    }
    var_14 += ((1 ? ((var_13 ? var_3 : (((-3 ? var_2 : var_0))))) : ((min(((min(var_13, var_7))), ((var_12 ? var_2 : var_7)))))));

    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (arr_5 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, ((max((arr_8 [i_2 + 1]), var_3)))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_4] [i_2] [i_2 + 1] [i_5] [i_3 - 3] = (~-14);
                        var_16 = (((arr_13 [i_3 + 1] [i_3 + 1] [i_2 + 1]) | (((!(arr_12 [i_5]))))));
                        arr_24 [i_5] [i_2] [i_2] [i_2] = var_8;
                        arr_25 [i_5] [i_2] [i_5 - 2] [i_5 + 1] = (arr_20 [i_5 + 1]);
                        var_17 = (max(var_17, (((-(arr_17 [i_5 - 1] [i_4] [i_2]))))));
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_18 = (((((min(var_5, 1))) ? (arr_27 [i_6 + 1] [i_2 - 2]) : (arr_5 [i_2 - 2]))));
                        var_19 = (min(var_19, (((arr_18 [i_4] [i_4] [i_4] [12]) ? (max((max((arr_22 [i_2] [i_2 - 3] [i_2 - 1]), var_8)), (arr_9 [i_6 - 1]))) : (((~(min((arr_21 [i_2] [i_3] [i_3] [i_4] [i_6 + 1]), (arr_9 [i_4]))))))))));
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (max(var_20, (min(-11087, var_9))));
                        arr_32 [i_2] = ((1 - (min(1, ((65535 ? (arr_28 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2]) : 11086))))));
                        var_21 = (min(var_21, ((((arr_15 [i_3] [1] [i_3 + 1] [i_7]) - (((11081 != (((-(arr_28 [i_2 - 3] [i_2 - 3] [i_3] [i_2 - 3] [i_7]))))))))))));
                        arr_33 [i_2] [i_3 - 2] [i_7] [i_2] [i_3 - 1] = ((!((max((79 != 8), (((arr_5 [i_4]) - var_10)))))));
                        arr_34 [i_4] [i_4] [i_2] = (min((((min(var_11, (arr_17 [13] [i_3] [i_4]))))), (max((var_1 > var_10), var_6))));
                    }
                    var_22 = (((((((min(1, (arr_11 [i_2] [i_2] [i_4])))) ? (arr_21 [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_4]) : (((((arr_4 [i_2]) != (arr_20 [i_4])))))))) ? (((1 > -11087) ? (var_11 | var_11) : -255)) : ((min((arr_20 [i_2 - 3]), (arr_20 [i_2 - 3]))))));
                }
            }
        }
        arr_35 [i_2] [i_2] = 8795824586752;
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                {
                    arr_43 [i_8] [i_8 - 2] [i_8] = (arr_20 [i_8 + 1]);
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_50 [i_8] [i_8] [i_9] [i_8] [i_10] [i_11 - 2] [i_12] = (max(var_11, 3));
                                arr_51 [i_10 + 3] [i_8] [i_10 + 3] [i_8 + 1] [i_8] [i_8 + 1] = (max(((var_10 ? (arr_22 [i_12] [i_9] [i_8 + 1]) : (arr_12 [i_10 + 3]))), ((min((arr_28 [i_8] [i_9] [i_10] [i_11] [1]), 21119)))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max((((((arr_21 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) ? 14 : (arr_36 [i_8] [i_8 + 1]))))), (((arr_4 [i_8 - 1]) % (arr_4 [i_8 + 1])))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 13;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            {
                                arr_65 [i_8] [i_15 - 1] [i_15] [i_15] [i_14] [i_13] [i_8] = (min((arr_64 [i_8 - 2] [2] [i_14] [i_15 - 1] [i_16 + 1]), (((!(arr_53 [i_16 + 2]))))));
                                var_24 ^= ((((min((((var_6 ? var_13 : var_13))), (max((arr_27 [i_15] [i_13]), 5754))))) ? var_9 : var_6));
                                arr_66 [i_8] [i_15] [i_13] [i_13] [i_8] = ((21130 ? 32752 : 32778));
                            }
                        }
                    }
                    var_25 = ((((var_1 ? (arr_40 [i_8 + 1] [i_13]) : (arr_17 [i_8 - 3] [i_13] [i_14 - 2])))));
                    arr_67 [i_8] = (min((((((((arr_16 [i_8] [i_8] [i_14 + 1]) <= var_5))) >= (arr_40 [i_8] [8])))), (min(((var_2 ? (arr_60 [i_8] [i_13] [i_13] [i_14] [i_14]) : 66)), ((((((arr_46 [i_8] [9] [9] [i_14] [i_14] [i_13]) + 2147483647)) >> 1)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 3; i_17 < 13;i_17 += 1) /* same iter space */
    {
        var_26 = (((arr_39 [i_17]) * var_5));
        /* LoopNest 3 */
        for (int i_18 = 1; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_80 [i_17] [i_17] = (((arr_52 [i_18 + 3]) ? (arr_4 [i_19]) : ((((arr_36 [1] [i_19]) >> (var_8 - 3204726003570175974))))));
                        arr_81 [1] [i_18] [6] [i_18] |= (~3489194523140470778);
                        arr_82 [i_17] [i_18] [i_18 - 1] [i_17] [i_20] [i_20] = (((arr_18 [i_17 - 3] [i_17] [i_18 + 2] [i_19 - 1]) | (arr_11 [i_17] [i_19 - 1] [i_20])));
                        arr_83 [i_19 + 1] [i_18] [i_20] [i_17] = (((((-(arr_30 [i_17] [i_20] [6] [i_20])))) ? ((var_3 ? 4294967295 : (arr_60 [i_17 - 1] [i_18] [i_19 + 1] [i_19] [i_20]))) : -30842));
                    }
                }
            }
        }
        var_27 = var_0;
        var_28 -= (-6380565500147349654 < -3341178829039732684);
    }
    var_29 = (((var_7 < (1 <= var_11))));
    #pragma endscop
}
