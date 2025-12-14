/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max((!var_13), 1))), ((((min(1, 1))) | ((var_6 ? 0 : var_2))))));
    var_17 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [0] [i_0] = ((((arr_11 [i_2]) ? (arr_7 [i_3] [i_1 - 1] [i_0]) : var_8)));
                                var_19 = var_6;
                                var_20 = (var_11 ? (arr_0 [i_0 - 1]) : (arr_4 [i_4] [i_0 - 1] [i_1 + 2]));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, var_2));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_22 = (min(var_22, (0 >= 1)));
        var_23 ^= (((max((!-13), (1 <= 1)))) % 1);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_6] [i_8] = (((arr_18 [i_6]) / ((min((arr_21 [i_6] [i_6] [i_8]), 1)))));
                    var_24 += (22 ? (((arr_19 [i_6]) ? (arr_16 [i_6]) : ((max(0, (arr_22 [i_6] [i_7] [i_8])))))) : (((!(arr_20 [i_6] [i_6] [i_6])))));
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_25 = (arr_23 [i_6] [i_9] [i_6] [i_6]);
            var_26 ^= (-1 - var_5);
            var_27 = (1 || 1);
            var_28 = (max(var_28, ((((arr_18 [1]) ? 1 : var_5)))));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_29 *= ((((arr_27 [i_6] [i_10] [i_10]) < (arr_27 [i_6] [i_10] [i_10]))) ? (((arr_29 [i_6]) ^ (min(-1858759338, (arr_24 [6]))))) : ((var_13 ? (arr_27 [1] [1] [i_10]) : (((arr_17 [17]) ? (arr_19 [i_10]) : (arr_29 [1]))))));
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        var_30 = (((((arr_31 [i_6] [i_6] [i_11 - 1] [1]) ? -1345921384 : 1))) ? (((!(1 > -2077812861)))) : (((arr_32 [i_11]) ? (max(var_7, var_10)) : (arr_29 [i_11 - 1]))));
                        var_31 = (max(var_31, (((((((-(arr_18 [i_12]))))) | (1 == 1))))));
                        arr_37 [i_6] [i_6] = (((((arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]) < (arr_22 [3] [6] [i_6]))) ? ((((!(arr_32 [3]))) ? ((var_11 ? 1879048192 : 1)) : 1)) : 0));

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_41 [i_13] [i_6] [i_11 - 2] [i_6] [i_13] = (((((arr_24 [i_6]) * ((((arr_40 [2] [1] [i_11] [i_12] [i_13]) > var_5))))) * ((max((arr_32 [5]), (min(1, 1)))))));
                            arr_42 [i_6] [5] [8] [i_6] [i_6] [1] [i_6] = (((arr_22 [i_6] [i_11 + 1] [i_6]) ? ((var_4 ? (arr_31 [i_13] [11] [i_6] [i_6]) : (arr_39 [i_6] [i_10]))) : (((arr_16 [i_12]) * var_3))));
                            var_32 = (((((~var_5) + (arr_40 [i_11 + 1] [i_11 - 3] [i_11] [i_11] [i_11 + 1])))) ? (max(var_7, (arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]))) : ((max((arr_32 [i_12]), var_0))));
                        }
                        for (int i_14 = 4; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            var_33 = (((!1) ? (1 < 1) : ((((arr_31 [i_11 - 4] [i_14 - 2] [i_14 - 1] [i_14 - 1]) >= (arr_31 [i_11 + 1] [i_14 + 2] [i_14] [i_14]))))));
                            var_34 = arr_30 [i_6] [1];
                            var_35 = (arr_38 [i_6] [i_10] [i_6] [i_14]);
                        }
                        for (int i_15 = 4; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            var_36 += (min(1, 1));
                            var_37 = (((!var_2) ? (max(((1 ? var_15 : (arr_29 [i_11]))), ((var_1 + (arr_47 [i_6] [4] [4] [i_6] [i_6]))))) : (((arr_30 [i_6] [i_10]) - (arr_30 [i_6] [i_10])))));
                        }
                    }
                }
            }
            arr_49 [i_6] [i_6] [i_10] = 1;
            var_38 *= (arr_30 [6] [i_6]);
            arr_50 [i_6] = ((9 ? (-2147483647 - 1) : (arr_16 [i_10])));
        }
    }
    var_39 = (var_10 * var_1);
    #pragma endscop
}
