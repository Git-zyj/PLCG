/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_3, var_4)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 += ((!(((((max(var_10, 56480)))) <= ((9055 ? (arr_0 [i_0] [i_0]) : var_0))))));
        var_17 -= var_1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] &= min(((max((arr_4 [i_2]), (arr_4 [i_2])))), var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = ((-((-(arr_4 [i_0])))));
                                arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = (i_0 % 2 == 0) ? ((((((arr_9 [i_0] [i_0] [15] [i_0]) + 2147483647)) >> (((arr_8 [i_3 + 1] [i_4] [i_4] [i_4] [i_4]) ? 0 : var_13))))) : ((((((((arr_9 [i_0] [i_0] [15] [i_0]) - 2147483647)) + 2147483647)) >> (((arr_8 [i_3 + 1] [i_4] [i_4] [i_4] [i_4]) ? 0 : var_13)))));
                                var_18 &= ((((max(9040, 1))) ? (min(((var_9 ? var_7 : (arr_7 [i_4] [i_3] [3] [i_1]))), (((var_14 ? var_0 : var_6))))) : (((max((arr_5 [i_2 + 2] [i_4] [7]), (arr_5 [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_2] [i_2 + 2] [i_2 + 2] &= ((-(((((var_13 ? var_1 : (arr_0 [i_1] [i_2 + 2])))) ? (max((arr_0 [1] [i_1]), (arr_3 [i_0] [15] [5]))) : ((9620348971327539030 + (arr_15 [i_0] [3] [3] [i_0])))))));
                        var_19 = (min(var_19, (arr_0 [15] [8])));

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_20 = (min(var_20, ((min(((((min((arr_15 [i_0] [i_1] [i_5 - 1] [i_6 - 2]), (arr_22 [i_2])))) ? (((arr_12 [i_6 + 2] [i_6 + 2] [i_2] [i_2] [4] [i_1] [1]) ? 0 : -1782367715496540688)) : (arr_2 [i_2] [i_1 - 1]))), (arr_10 [i_0] [i_1 + 2] [i_2] [i_0] [i_0 - 1]))))));
                            var_21 += ((-((max(var_2, (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_7] [i_0] [i_2] [i_0] [i_0] = (arr_5 [i_5 + 3] [i_5 + 2] [i_1 + 1]);
                            arr_26 [i_0] = 1726079364;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_22 ^= (((1 * (arr_22 [i_2]))));
                            var_23 = (min(var_23, var_7));
                            arr_35 [i_8] [i_0] = (arr_11 [i_0] [i_1] [i_2] [12] [i_2] [i_1]);
                            var_24 = (min(var_24, ((((arr_18 [i_2] [i_8 - 1]) <= (arr_32 [i_0 + 1] [i_9] [i_9] [i_2 + 3] [1]))))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_38 [i_0] [i_8 + 1] [i_2] [i_1] [i_0] = (arr_31 [i_0] [i_0]);
                            var_25 = var_0;
                        }
                        var_26 = (max(var_26, (((var_12 ? (arr_30 [i_1] [1] [i_1 + 3] [i_2]) : var_0)))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_41 [i_2] [i_1 - 3] [i_1 - 3] [i_11] |= ((((-(max((arr_12 [i_0 + 1] [14] [i_2 + 1] [i_11] [13] [i_11] [7]), -3400098260834627782)))) & 236));
                        var_27 += (arr_11 [i_11] [i_2 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0 - 1]);
                        var_28 = (max(var_28, ((((((var_4 + (arr_1 [12] [i_2])))) ? (var_9 != var_6) : var_2)))));
                        var_29 = (min(var_29, (((-var_9 ? 4294967285 : ((((arr_9 [i_0] [i_2] [i_2] [i_0 - 1]) ? var_6 : ((var_7 ? var_14 : var_0))))))))));
                    }
                    var_30 = (max(var_30, (arr_36 [i_0 + 1] [i_1] [i_1 - 2] [i_0 + 1] [6])));
                }
            }
        }
    }
    #pragma endscop
}
