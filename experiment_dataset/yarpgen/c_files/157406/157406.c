/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 -= ((((((0 | 1) ? (arr_1 [i_0 - 2]) : var_5))) ? (arr_0 [i_0 - 2]) : (((arr_1 [6]) ? ((var_1 ? (arr_0 [i_0 - 2]) : var_14)) : var_10))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0 + 2] = (arr_3 [i_1] [4]);
            arr_6 [9] = (((((var_8 ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 = (((arr_1 [i_0 + 1]) ? (((arr_1 [i_0 + 2]) * (arr_1 [i_0]))) : ((((arr_1 [i_0 + 2]) < (arr_1 [i_0 - 1]))))));
            arr_9 [i_0 - 2] [i_2] = ((((((arr_0 [i_0 - 1]) ^ (arr_3 [i_0 - 2] [i_0 - 1])))) ? (((((~(arr_3 [i_0 - 1] [i_2])))) ? (max((arr_7 [i_0 - 2] [8] [i_2]), var_16)) : ((var_15 | (arr_8 [3]))))) : (((!((((arr_1 [3]) ? var_12 : var_13))))))));
        }
        var_22 ^= ((((((arr_0 [i_0 - 2]) - (arr_7 [i_0 + 2] [i_0 - 2] [i_0 - 2])))) ? (max((arr_0 [i_0 + 2]), (arr_7 [i_0 - 1] [i_0 - 2] [i_0 + 2]))) : (((arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 + 1])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 ^= ((0 ? 0 : 14382098637921695613));
        var_24 = ((((((arr_0 [i_3]) & (arr_0 [i_3])))) ? (arr_0 [i_3]) : (((min(0, 28))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_16 [15] [i_4 + 1] = ((var_18 ? ((var_11 ? var_6 : (arr_14 [7]))) : (((arr_15 [i_4]) - var_14))));
        var_25 = ((((var_4 ? (arr_15 [9]) : (arr_14 [1])))) >= (arr_13 [6]));
        var_26 = (max(var_26, ((((arr_13 [i_4 + 2]) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 + 2]))))));
    }
    var_27 |= ((((var_15 ? var_4 : var_7))));
    var_28 |= ((var_19 ? ((var_16 ? var_1 : var_5)) : var_3));
    var_29 = ((-var_7 ? (((var_16 ? var_9 : ((var_14 ? var_6 : var_18))))) : (((max(var_9, var_2)) + var_0))));
    #pragma endscop
}
