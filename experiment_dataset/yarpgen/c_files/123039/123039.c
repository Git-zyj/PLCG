/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_22 = ((((-(((arr_6 [i_4] [i_2] [i_0] [i_0]) % (arr_4 [7] [i_2] [5]))))) - ((~(arr_11 [i_4] [i_3] [i_2] [i_0] [i_0])))));
                            var_23 = ((((min((arr_10 [i_3] [i_1] [i_2] [i_3] [i_3]), (!1)))) ? ((((!(arr_9 [i_1] [6] [i_1] [i_0]))))) : (((((632713310 ? 3223580265 : 8948635573051172808))) ? (arr_3 [i_0] [i_4]) : ((-(arr_6 [0] [i_2] [i_3] [i_3])))))));
                        }
                    }
                }
            }
            var_24 = (arr_5 [i_1] [2] [i_1] [i_0]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_25 = (~(!var_19));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((~(!2748292045))))));
                            arr_22 [i_7] [i_6] [1] = (arr_8 [i_8]);
                            var_27 = (var_0 ? ((var_0 ? (arr_10 [i_0] [5] [i_6] [i_7] [i_6]) : (arr_11 [i_0] [i_0] [i_0] [1] [i_0]))) : (arr_10 [i_0] [i_5] [i_6] [i_7] [i_8]));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_25 [9] [i_6] [i_6] [1] = ((!(arr_4 [i_9] [i_6] [i_5])));
                    var_28 = ((-2134813189 ? (2748292045 < 193) : (((arr_10 [i_0] [3] [4] [i_9] [i_5]) ? (arr_18 [i_6] [i_6]) : (arr_23 [9] [i_6] [i_6])))));
                    arr_26 [i_6] [8] [8] [i_9] = ((-(arr_9 [11] [i_5] [5] [i_9])));
                    var_29 |= ((-(arr_16 [i_5] [i_0])));
                    arr_27 [i_9] [i_6] [i_6] [i_0] = (arr_3 [i_0] [i_0]);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_30 = (((arr_13 [i_0] [i_10]) ? (arr_13 [i_5] [12]) : (arr_24 [i_0] [i_0] [5] [i_5] [i_6] [i_0])));
                    arr_30 [9] [i_6] [5] [i_10] = (arr_14 [i_0] [i_0] [i_0]);

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_31 *= (((((arr_1 [10] [i_5]) - (arr_14 [i_0] [6] [i_6]))) ^ (((var_8 << (((arr_15 [i_6]) - 60)))))));
                        arr_34 [i_6] [i_5] [i_6] [i_10] [i_11] = ((var_5 / (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_15))));
                        var_32 |= (((arr_33 [i_11] [i_5] [i_6] [i_10] [i_11] [i_11]) ? (arr_20 [i_0] [i_0] [8] [i_5] [i_0] [i_0]) : var_18));
                    }
                }
            }
        }
        var_33 = (((((((arr_10 [i_0] [i_0] [i_0] [1] [9]) ? (arr_10 [i_0] [7] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) << (((((arr_10 [9] [i_0] [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) + 9492))))));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_34 = (min(var_34, ((((((arr_35 [i_12] [i_12]) / (((arr_35 [i_12] [i_12]) ? var_12 : (arr_35 [i_12] [i_12]))))) - (!var_13))))));
        arr_37 [i_12] [i_12] = min(((((arr_36 [i_12]) * var_5))), (arr_35 [i_12] [i_12]));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        arr_40 [i_13] = (arr_21 [0] [i_13] [i_13] [i_13] [i_13]);
        var_35 = (((arr_29 [i_13] [4] [1] [i_13]) % -2137166209));
    }
    var_36 = (max(var_36, var_13));
    #pragma endscop
}
