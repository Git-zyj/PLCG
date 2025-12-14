/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((var_0 ? var_6 : var_0))) ? var_13 : (((arr_1 [14]) ^ 0)));
        var_19 = (max(var_19, ((!(arr_2 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) & (arr_0 [i_0])))) ? ((var_11 ? (arr_2 [5] [i_0]) : (arr_0 [i_0]))) : ((8600 ? var_6 : var_9))));
        var_20 = ((1063903680424963378 ? (arr_2 [i_0] [i_0]) : var_5));
        arr_5 [i_0] = ((0 ? var_10 : var_5));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (arr_7 [i_1] [i_1]);
        var_22 ^= (min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])));
        arr_9 [13] = arr_7 [i_1] [i_1];
        var_23 -= ((~(max(((var_9 ? (arr_6 [7]) : var_17)), ((min(var_7, (arr_8 [i_1]))))))));
        arr_10 [i_1] = ((((~(arr_8 [i_1]))) ^ (((arr_8 [i_1]) - (arr_8 [i_1])))));
    }
    #pragma endscop
}
