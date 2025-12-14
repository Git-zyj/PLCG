/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 -= ((var_7 ? ((-var_16 + ((var_13 ? -8897627479869326674 : (arr_2 [i_0] [i_1]))))) : (((var_10 ? ((min(-1, 1))) : ((0 ? 3393607057 : (arr_5 [i_1]))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = var_9;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 = (((-122 <= var_2) << (((min((arr_6 [i_0] [i_1] [i_3]), (((!(arr_1 [i_0] [i_1])))))) + 2068427228022127000))));
                        arr_12 [i_1] = ((((arr_2 [i_2 + 2] [i_3]) & 565890576801682659)));
                        var_21 = (var_11 ? (arr_0 [i_1]) : (max((~17199133440313117679), (arr_9 [i_1] [i_2 + 4] [i_2 + 3] [i_2 - 2]))));
                        var_22 -= var_7;
                        arr_13 [i_0] [i_1] = 39167;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1] = ((~(min((arr_11 [i_5] [i_4] [i_2 + 1] [i_1]), (arr_11 [i_0] [i_2 + 1] [i_4] [i_5])))));
                            arr_21 [i_1] [i_2 - 1] [i_1] = var_13;
                        }
                        arr_22 [i_1] = (((min(((max(var_11, var_8))), (max(1748109549055812070, -122))))) ? (((var_4 >= 21) ? ((min(2318855612, -122))) : (((arr_17 [i_0] [i_0] [i_0] [1] [i_0] [i_0]) ? var_17 : 1247610633396433937)))) : ((16026685787228149295 * (arr_0 [i_1]))));
                        arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_1 [i_1] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_1] = ((((6 ? -1 : 1)) != 4398046511103));
                        var_23 = (min(var_23, ((((((9223372036854775807 % ((var_9 / (arr_1 [i_0] [i_0])))))) ? ((((arr_3 [i_2 + 3] [i_2 + 4] [i_2 + 1]) / (arr_3 [i_2 + 4] [i_2 - 2] [i_2 + 1])))) : (arr_11 [i_0] [i_1] [i_2 + 1] [i_6]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((-((var_9 ? var_8 : var_1))));
                        arr_30 [i_0] [i_1] [i_2] [i_2] [i_2 + 4] [i_2 + 4] = (min(((((((arr_19 [i_0] [i_1] [i_1] [i_7] [i_2 + 1] [i_0] [i_7]) ? (arr_25 [i_2]) : var_10))) ? ((17199133440313117690 ? 17340000238869655862 : 1)) : var_16)), ((((max(var_17, (arr_5 [i_7]))))))));
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = (((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [4] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_10))) ? ((max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 7))) : ((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        arr_32 [i_0] = (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) / ((((var_9 * var_1) ? (arr_3 [i_0] [i_0] [i_0]) : var_1)))));
        var_25 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 17;i_8 += 1)
    {
        arr_36 [i_8] [2] = (((arr_35 [i_8 + 2]) ? (arr_35 [i_8 - 1]) : var_14));
        arr_37 [i_8 + 2] = ((4653396567343921020 ? (arr_24 [i_8] [8] [i_8 - 4] [i_8]) : (((var_5 ? var_16 : var_11)))));
    }
    #pragma endscop
}
