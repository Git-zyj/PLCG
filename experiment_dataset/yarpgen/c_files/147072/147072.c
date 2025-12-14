/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((127 ? ((~(arr_1 [i_0]))) : 65024)) == (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_12 = ((((127 ? (min((arr_4 [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_1]))) : 108))) ? (arr_4 [i_0] [i_1]) : ((((((1 ? 1547490209 : (-127 - 1)))) ? ((var_1 ? 127 : (arr_3 [i_1] [i_0] [i_0]))) : ((min((arr_0 [i_0]), 19)))))));
            arr_5 [i_0] [i_1] = (((arr_4 [i_0] [i_1]) ? (((var_2 >= 128) ? (((arr_4 [i_0] [i_1]) ? var_2 : 0)) : (((73 && (arr_4 [i_0] [i_1])))))) : ((max(var_9, (((!(arr_0 [i_0])))))))));
            arr_6 [i_0] [i_1] = ((13 ? 1031236678 : (((max((max(127, 20005)), (arr_0 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = (arr_8 [i_2] [i_2]);
            var_13 = (max(var_13, ((-13 ? (arr_8 [i_0] [i_2]) : ((min((arr_8 [i_0] [i_2]), (arr_8 [i_0] [i_2]))))))));
            arr_10 [i_0] [i_2] [i_0] &= (min(((((((arr_0 [i_2]) == var_8))) ^ (arr_8 [i_0] [i_2]))), (var_5 | 65523)));
            var_14 = (((-(arr_4 [i_0] [i_2]))));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_0] [i_3] = (arr_4 [i_3 - 1] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((min((arr_0 [i_4 - 1]), var_8))) ? 56683 : ((((((-127 - 1) ? (arr_12 [i_0] [i_0]) : -5))) ? ((var_3 ? (arr_4 [i_0] [i_4]) : (arr_20 [i_0] [i_0] [i_0] [i_0]))) : (((~(arr_16 [i_4] [3]))))))))));
                        arr_21 [i_0] [i_0] [i_0] |= (min((((!(~122)))), 122));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_16 = ((!(((65535 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))));
            var_17 = (arr_22 [i_0] [i_0]);
        }
        arr_25 [i_0] = ((((max((arr_3 [1] [i_0] [i_0]), 4095))) ? (((var_7 <= (arr_3 [i_0] [i_0] [i_0])))) : ((-(arr_3 [i_0] [i_0] [i_0])))));
    }
    var_18 = (var_5 / var_8);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                arr_30 [i_7] = (arr_29 [i_7] [i_7] [i_8]);

                /* vectorizable */
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    var_19 = (max(var_19, var_11));
                    arr_33 [i_7] [i_8] [i_7] = ((1042587080 ? -65541 : 168));
                }
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    arr_36 [i_7] [i_7] [i_8] [i_7] = arr_20 [i_10 + 3] [i_10 + 1] [i_10 - 2] [i_10];
                    arr_37 [i_7] [i_7] [i_7] = (min((((arr_19 [i_7] [i_10 + 1] [i_7] [i_7]) > (arr_19 [i_7] [i_10 - 2] [i_7] [i_7]))), (arr_19 [i_7] [i_10 + 1] [i_7] [i_7])));
                    var_20 = (arr_17 [i_7]);
                    arr_38 [i_7] [i_8] [i_10] = ((((~(arr_15 [i_8] [i_10 - 1] [i_10])))) ? var_7 : var_8);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_45 [i_7] [i_8] [i_8] [1] [i_7] = (((var_5 + -4095) == ((((min(27857, (arr_24 [i_7])))) ? (((min(var_3, var_10)))) : (arr_40 [i_8] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 + 1])))));
                                arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((4095 ? ((min((arr_4 [i_7] [i_7]), (arr_4 [i_7] [i_7])))) : (~var_0)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    var_21 ^= (((arr_43 [i_7] [i_13 + 3] [i_7]) > (arr_43 [i_7] [i_13 - 2] [i_13 - 2])));
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_22 = ((+((0 ? (arr_20 [i_7] [i_7] [i_13] [i_13]) : (arr_4 [i_7] [i_7])))));
                                arr_54 [i_7] [i_7] [2] [2] [i_7] [2] [i_7] = (((arr_20 [i_8] [i_13 + 3] [i_14] [i_15]) || (arr_35 [i_7] [i_8])));
                            }
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
                {
                    arr_58 [i_7] [i_7] [i_7] [i_7] = ((!(((var_5 ? (arr_22 [i_7] [i_16]) : (arr_40 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                    var_23 -= (arr_55 [i_7] [i_8] [i_8] [i_16]);
                }
                for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    var_24 -= (((((var_5 ? (arr_12 [i_8] [i_8]) : 27857))) - ((-107 ? (0 & 65523) : ((~(arr_35 [i_8] [i_8])))))));
                    var_25 = (min(((max(1263, (var_4 >= var_9)))), ((var_0 ? ((((arr_18 [i_7] [i_8] [i_8]) <= 921838201))) : (arr_17 [i_7])))));
                }
            }
        }
    }
    var_26 = ((var_3 ? var_9 : (max(-31744, (!var_7)))));
    #pragma endscop
}
