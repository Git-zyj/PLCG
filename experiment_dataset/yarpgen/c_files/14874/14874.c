/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((169 * (max(127, ((var_1 ? 1230486536 : var_5))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (+((-1230486536 ? (1230486534 >= -1230486523) : (-13486 && 3934365991))));
        var_13 = (-1741493203 / -var_3);
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_14 = ((var_10 ? var_6 : (arr_6 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [7] [i_1] [i_4] [7] [7] [i_1] = 0;
                                var_15 = var_3;
                                arr_17 [i_1] [i_4] [i_4] [i_4] [i_1 + 1] = (((arr_5 [i_1 - 1]) ? 1230486522 : var_3));
                                var_16 *= ((-(((arr_13 [i_5] [17] [i_2] [i_2] [i_1]) ? var_6 : var_6))));
                                arr_18 [i_1 - 2] [i_2] [i_3] [i_4] [13] = (arr_13 [i_4 - 1] [i_2] [i_3] [i_3] [i_1 + 1]);
                            }
                        }
                    }
                    var_17 *= ((((1230486523 % (arr_12 [i_2] [i_2]))) << (var_3 - 23666)));
                }
            }
        }
        var_18 = (((arr_3 [i_1 - 1] [i_1]) < (arr_3 [i_1 - 3] [i_1])));
        var_19 = ((var_0 ? (arr_2 [i_1 - 2]) : var_6));
        var_20 += ((arr_0 [i_1 - 1] [i_1 - 2]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 3] [i_1 - 1]));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = (((arr_1 [5]) <= (arr_1 [i_6])));
        arr_22 [i_6] [i_6] = arr_9 [i_6] [5];
        var_22 = ((1230486523 ? (arr_13 [i_6] [2] [i_6] [i_6] [i_6]) : ((-(arr_21 [i_6])))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_6] [13] = (((((-1803011880 ? (arr_26 [i_6]) : var_4))) ? (((((arr_23 [i_10] [i_6]) > (arr_31 [i_6] [i_6] [i_6] [i_6] [i_9] [i_10]))))) : ((var_4 ? -30919 : var_2))));
                            arr_33 [i_6] [i_6] [i_6] [14] = -var_11;
                            var_23 = (arr_28 [i_9 + 2] [i_10] [i_6] [i_6] [9]);
                            arr_34 [i_6] = ((-(arr_23 [i_6] [i_7])));
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_6] [i_9 + 3] [i_8] [i_7] [i_6] = (((arr_31 [i_11] [i_11] [1] [2] [i_11 + 1] [i_9 + 2]) ? (arr_31 [i_11 + 3] [i_11] [i_11] [i_11] [i_11 + 1] [i_9]) : 1870849775));
                            var_24 = (64348 ? 1870849774 : 64348);
                        }
                        for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] = ((-(((arr_11 [i_6] [i_6] [i_8]) - (arr_26 [i_6])))));
                            arr_42 [i_6] [i_6] [i_8] [i_8] [i_9] [i_8] = ((0 % (arr_15 [i_12 + 3] [i_9] [i_9] [i_9 - 2] [i_8])));
                            var_25 = (min(var_25, (((arr_13 [i_6] [i_12 + 2] [i_12 - 1] [i_9 + 3] [i_8]) / 1))));
                            arr_43 [i_6] [i_6] = (((arr_21 [i_12 - 1]) ? 1071644672 : (arr_21 [i_12 - 1])));
                        }
                        var_26 = var_7;
                        arr_44 [10] [i_6] [i_6] [i_6] [10] [i_6] = var_10;
                        var_27 = (((((var_3 ? -647185988 : 1970528460))) ? var_9 : ((var_4 ? (arr_9 [i_6] [7]) : (arr_10 [13] [i_7] [2] [i_9])))));
                    }
                }
            }
        }
        var_28 = ((-(arr_11 [i_6] [i_6] [i_6])));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_29 += ((~(((arr_23 [i_13] [i_13]) ? (((min(var_1, (arr_12 [i_13] [i_13]))))) : (max(16769024, var_2))))));
        var_30 = ((-((var_1 ? -877470925 : (arr_21 [i_13])))));
    }
    var_31 -= max((var_8 <= 647185988), (max((var_5 || 56), (max(var_7, var_4)))));
    var_32 = var_10;
    #pragma endscop
}
