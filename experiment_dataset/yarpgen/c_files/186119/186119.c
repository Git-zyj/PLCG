/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (arr_1 [i_0]);
        var_14 ^= ((!(arr_1 [i_0])));
        arr_3 [i_0] = ((((2147483647 != (arr_0 [5]))) ? (((arr_0 [i_0]) ? var_7 : (arr_1 [i_0]))) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (arr_5 [i_1]);
        var_15 = ((((max((((arr_4 [i_1 - 4]) ? (arr_6 [i_1 - 4]) : var_1)), (max((arr_6 [i_1 + 1]), var_11))))) ? (min((min((arr_6 [i_1]), (arr_5 [i_1]))), (arr_5 [i_1]))) : (arr_5 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_16 = var_9;
                                arr_18 [i_5] [i_3] [i_2] = ((+((max((arr_4 [i_4]), 46762)))));
                                var_17 -= ((((((max((arr_8 [i_1 - 3] [i_2] [i_5]), -911101324))) ? (((arr_15 [12]) & (arr_11 [i_5]))) : (((arr_13 [i_5] [i_3] [i_2] [i_1 + 2]) >> (((arr_10 [i_1 + 2]) + 614088236)))))) | (((arr_5 [1]) ? 32767 : (((arr_16 [i_2] [i_2] [i_4] [3]) >> (var_7 + 2097926823)))))));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_2] [i_3] = (((min(var_7, var_10)) * (((arr_12 [i_1 - 4] [i_1 - 1] [6] [i_1 + 2]) * (arr_12 [i_1 - 2] [i_1 - 2] [3] [i_1 - 4])))));
                }
            }
        }
        arr_20 [i_1 - 1] [i_1] = ((+(((arr_17 [i_1] [i_1 - 2]) ? (arr_17 [i_1 - 3] [i_1 + 1]) : var_6))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6 + 2] = (arr_17 [i_6] [i_6]);
        arr_24 [i_6] [23] = (((!13043017250765040328) + (arr_22 [i_6 - 3])));
        var_18 *= ((((arr_8 [i_6 + 1] [i_6 - 2] [i_6 + 1]) - (arr_4 [i_6]))));
    }
    var_19 = (min(var_19, ((max((var_6 != var_2), var_6)))));
    #pragma endscop
}
