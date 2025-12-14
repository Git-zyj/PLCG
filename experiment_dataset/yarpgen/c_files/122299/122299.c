/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [1] = ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_11)) < (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))));
        arr_3 [7] [7] &= ((arr_1 [i_0] [3]) ? (min((arr_0 [i_0]), var_1)) : (max(0, var_6)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] |= (((arr_1 [i_1] [6]) << (((arr_5 [i_1] [i_1]) - 708354815))));
        var_14 = (arr_0 [10]);
        var_15 ^= (arr_1 [0] [i_1]);
        var_16 = (max(var_16, (((var_8 ? (var_8 & var_2) : (arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_17 *= (arr_7 [i_2]);
        arr_9 [i_2] = (((arr_7 [i_2 + 4]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 2])));
        arr_10 [5] = (arr_7 [i_2]);
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_18 = (arr_12 [i_3 - 1] [i_3]);
        arr_13 [i_3] = (((((arr_11 [i_3 - 1]) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 - 2]))) - (arr_11 [i_3 + 1])));
        var_19 = var_9;
        arr_14 [i_3] = (arr_11 [i_3]);
        arr_15 [i_3] = ((((((arr_11 [i_3]) ? 8659059101386723366 : (arr_11 [i_3 - 1])))) ? (arr_11 [1]) : var_12));
    }
    var_20 += var_7;
    #pragma endscop
}
