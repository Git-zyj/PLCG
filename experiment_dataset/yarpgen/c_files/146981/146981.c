/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 = (min(var_16, ((((arr_0 [i_0] [i_1]) ? -25426 : (arr_4 [i_0]))))));
            arr_6 [i_1] [i_1] = (max((arr_1 [i_1] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1])))));
            var_17 = ((var_11 ? var_5 : (max((var_9 > var_10), 291813842))));
            arr_7 [i_1] [i_1] = ((((((arr_4 [i_1]) - (arr_3 [i_1] [i_1]))) >> (((((arr_5 [i_1] [i_0]) ? var_7 : 255)) - 27460)))) * (((arr_4 [i_0]) % -10911)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = (max(((((max((arr_8 [i_0] [i_2]), 25425))) ? (max((arr_5 [i_2] [11]), var_9)) : var_9)), ((-(arr_5 [i_0] [i_2])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_18 = 109470315;
                            arr_19 [i_5] [i_4] [i_3] [i_0] [i_0] = ((!((((arr_12 [i_4] [i_4]) ? ((var_13 ? (arr_1 [i_5] [i_0]) : var_4)) : (((max((arr_16 [i_0]), var_9)))))))));
                        }
                    }
                }
            }
        }
        var_19 = (max(var_19, (arr_12 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] = var_1;

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_20 ^= ((4003153453 ? ((max((arr_9 [i_9 - 1]), (arr_18 [i_9 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 + 2])))) : ((var_4 ^ (((0 ? 1 : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_31 [1] [1] [1] [4] [i_6] [i_6] [4] = ((((((((arr_20 [i_9] [i_0] [i_0]) <= var_9))) - (arr_27 [i_0] [i_0] [i_6] [i_9 + 4]))) | (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])));
                            var_21 |= ((((~(arr_18 [i_7] [i_7] [i_9 + 4] [i_7] [i_7]))) >= (((!(((~(arr_5 [i_8] [11])))))))));
                        }
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            var_22 = var_2;
                            var_23 = (max(var_23, (arr_5 [i_10] [12])));
                            arr_35 [i_8] [i_6] [8] [8] [i_8] = (arr_8 [i_6] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_7] [i_6] [i_6] [i_0] [i_0] = var_5;
                            arr_40 [i_6] [i_0] [i_7] [i_7] [9] [i_6] = var_14;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_43 [i_0] [i_6] [i_7] [i_8] [i_12] [i_7] = ((33 ? ((((((arr_42 [i_12] [i_7] [4] [i_0]) + 2147483647)) << (1 - 1)))) : (min((((62261 ? (arr_42 [i_6] [i_8] [i_7] [i_6]) : 0))), 123))));
                            var_24 ^= ((min((arr_16 [i_7]), (arr_21 [i_0] [8]))));
                        }
                    }
                }
            }
        }
        var_25 = (((-127 - 1) && (((var_8 + (arr_0 [i_0] [i_0]))))));
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        arr_47 [i_13] |= ((((((min((arr_34 [i_13] [i_13] [i_13] [i_13] [0]), -1)) * ((var_4 ? (arr_13 [i_13] [i_13] [1] [5] [i_13] [i_13]) : (arr_14 [i_13] [i_13])))))) ? (min((((~(arr_22 [i_13])))), (arr_24 [i_13]))) : (((max((arr_8 [i_13] [i_13]), (arr_0 [i_13] [1])))))));

        for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
        {
            arr_51 [i_14 + 2] [i_14] [i_13] = (((max((arr_42 [i_13] [3] [i_14 - 1] [i_13]), (arr_42 [i_13] [1] [i_14 + 2] [i_14])))) ^ (min((arr_32 [i_13]), (((arr_49 [i_13] [i_13] [i_14]) ? (arr_38 [i_14] [i_13]) : (arr_1 [i_13] [i_13]))))));
            var_26 = (min(var_26, var_15));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
        {
            arr_54 [i_15] [i_15] = var_7;
            arr_55 [i_15] [i_15] = 1372309633;
        }
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
    {
        var_27 = ((var_10 > (arr_30 [10] [10] [i_16] [i_16] [i_16])));
        arr_58 [i_16] = (arr_48 [i_16] [i_16] [i_16]);
    }
    var_28 = 25425;
    var_29 = (+((var_15 ? (!var_4) : var_15)));
    #pragma endscop
}
