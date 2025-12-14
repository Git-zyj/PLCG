/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [15] [i_0] = var_0;
        arr_4 [i_0] [i_0 - 1] = ((var_10 ? var_4 : ((((~(arr_0 [i_0]))) ^ 4294967295))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3] [5] = (arr_0 [i_0]);
                            var_12 = (max(var_12, ((((arr_2 [i_1 - 1]) ? (arr_12 [i_0] [i_1] [i_1] [i_4 - 1]) : (arr_5 [i_3]))))));
                        }
                        arr_18 [10] [i_1] &= (~0);
                    }
                }
            }
        }
        var_13 = var_8;
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_14 = (arr_12 [0] [14] [14] [i_5]);
        arr_21 [i_5] = 4294967294;
        var_15 = (min(var_15, ((((var_3 == var_5) || (((var_3 | (arr_1 [18] [i_5 + 1])))))))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        var_16 = (max(var_16, ((((((((var_9 ? (arr_11 [i_6 + 1] [6] [6] [i_6 - 1]) : (arr_24 [4]))) ^ var_6))) || ((!(arr_19 [1]))))))));
        var_17 = (min(var_17, var_1));
        arr_25 [i_6] = (arr_13 [i_6] [i_6 - 1]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_18 &= ((!(arr_9 [i_7])));
        var_19 &= (arr_19 [i_7]);
        var_20 = (arr_29 [i_7] [i_7]);

        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_33 [i_7] [i_7] &= (((arr_20 [i_8]) ? var_3 : (arr_13 [i_7] [i_8])));
            arr_34 [10] [10] [i_8] = (var_9 ? var_11 : (((((arr_19 [i_8]) || (arr_26 [i_7] [i_8]))))));
            var_21 = 43669169;
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_22 = (((arr_28 [1] [i_9]) ? var_2 : (arr_28 [i_7] [i_9])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_8 [5] [i_11])));
                        arr_42 [i_11] [10] [i_7] [i_9] [i_9] [i_7] &= var_8;
                        var_24 = (max(var_24, (((!(((4294967293 ? (arr_9 [i_7]) : var_2))))))));
                    }
                }
            }
            arr_43 [0] = var_2;
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            var_25 = ((!(arr_29 [i_7] [i_12 + 1])));

            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_26 = var_11;
                var_27 = (((arr_45 [i_12] [i_13]) == 2));
                var_28 = (min(var_28, (arr_39 [i_12 + 2] [4] [i_12 + 1])));
                var_29 = (3051 & 194);

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_50 [i_7] [i_12] [0] [0] &= (arr_29 [i_14] [i_7]);
                    var_30 = (max(var_30, ((((arr_46 [i_12 + 1]) <= (arr_46 [i_12 + 1]))))));
                    arr_51 [i_14] [i_14] [i_14] [0] [i_7] = ((-(!var_11)));
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_31 = ((-10709 ? ((37669334 ? 3559 : 100)) : (arr_36 [7] [i_12 - 1] [i_13])));
                    var_32 += ((!(arr_26 [i_12 + 1] [i_12])));
                    var_33 = ((~(arr_28 [i_12 + 1] [i_12 + 1])));
                    var_34 = ((var_2 ? (arr_9 [i_12 - 1]) : (arr_9 [i_13])));
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    var_35 = ((17983971733007437734 / (arr_10 [i_12 - 1] [i_16] [i_13] [i_7])));
                    arr_57 [10] [2] [2] [10] [i_16] [i_16] = (arr_54 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12] [i_12 + 1]);
                }
            }
        }
    }
    var_36 = (max(var_36, var_11));
    var_37 = 4294967289;
    #pragma endscop
}
