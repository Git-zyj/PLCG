/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_7;
        var_14 -= 2108271718;
    }
    var_15 = (max(var_15, var_1));

    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_16 = ((((((min((arr_4 [i_1]), (arr_4 [i_1 + 2]))))) | (min(4, 3061760573)))));
        var_17 -= ((((var_10 ? 4 : (arr_3 [0])))));
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = ((~(min((~252), var_5))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (((234 & 248) ? var_11 : (arr_9 [i_2])));
        arr_11 [i_2] [i_2] = ((((~(arr_3 [1])))) <= ((var_11 ? (arr_9 [i_2]) : (arr_10 [i_2]))));
        arr_12 [i_2] = (((243 / var_3) < (arr_4 [i_2])));
    }
    #pragma endscop
}
