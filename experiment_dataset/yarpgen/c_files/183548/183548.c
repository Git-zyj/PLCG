/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 > var_7);
    var_13 -= (((((((var_11 ? 21659 : var_0))) ? (min(var_6, var_6)) : 157)) + var_0));
    var_14 = (((((var_2 - 114) - var_10)) / var_11));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((-(((157 - var_7) << ((((131071 ? var_1 : 53)) - 11127273370725015099))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] = ((!(var_9 < 45)));
                    arr_8 [i_0] [3] [i_1] [i_2] = -16692823266731825011;
                    var_17 = (arr_2 [i_0 - 1] [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 &= (((arr_6 [i_0] [5]) ? (3918 + var_0) : ((1753920806977726604 ? 112 : var_10))));
                        arr_12 [10] [10] [5] [0] = ((((arr_5 [7] [7] [i_2]) <= (arr_11 [i_2]))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_6 >= ((~(arr_10 [10] [i_0 - 1] [i_2] [i_0]))));
                        arr_14 [i_0] [3] [3] [i_2] [i_2] [10] = (((arr_0 [i_0 + 1]) >= (((var_2 & (-127 - 1))))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_19 = (((arr_10 [i_4 - 1] [8] [i_4 - 2] [i_4]) - (arr_9 [i_4 - 1] [i_4] [i_4] [i_4] [7] [i_4 + 1])));
                        var_20 = ((((arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_7)));
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_0] = ((-((-(arr_1 [i_0 + 1] [i_0 + 1])))));
                    var_21 *= 65535;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_22 = (((max((((arr_10 [i_0] [i_0] [2] [i_1]) ? 11 : (arr_0 [i_5]))), ((var_11 ? 11 : var_3)))) >= (max(((var_1 ? var_1 : (arr_11 [i_0]))), 94754981))));
                                arr_25 [2] = ((-64 ? (1753920806977726629 >= 1753920806977726604) : 16692823266731825011));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_23 = (((arr_28 [i_8] [i_8] [i_8]) ? (((arr_21 [i_0 - 1] [i_1] [0] [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (((1 ? -29493 : -32))))) : (arr_10 [3] [i_0 - 1] [2] [3])));
                    arr_29 [10] [3] [i_8] = (max(16692823266731824983, 1664053727));
                    arr_30 [i_0] [1] [i_0] [i_0] = 1;
                    arr_31 [i_0] = ((-((((arr_21 [i_1] [i_1] [i_0 + 1] [i_0 - 1]) >= 124)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_24 = ((1 ? (arr_22 [i_0 + 1] [0] [2] [i_0] [i_0 + 1] [i_0 - 1]) : var_3));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 8;i_11 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_17 [i_11 - 3] [i_0 + 1] [i_9])));
                                arr_40 [i_0 - 1] [i_0 - 1] [1] [i_0] [6] = 72057593769492480;
                                arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((1 ? 0 : 1));
                            }
                        }
                    }
                    var_26 = ((((((arr_33 [4] [7] [4] [4]) ^ var_0))) ? (arr_18 [i_0] [i_1] [i_1] [i_9]) : 0));
                    var_27 = (1 >= 26078);
                }
            }
        }
    }
    #pragma endscop
}
