/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~((var_6 ? var_9 : 8213630248097986647)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) > (arr_0 [i_0])));
        var_14 ^= ((var_1 ^ ((min(((min(127, (arr_0 [i_0])))), (((arr_0 [9]) ? var_7 : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = -0;
        var_16 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_17 -= (((arr_6 [i_1]) ? ((var_5 ? (arr_6 [i_1]) : 395267835)) : ((((arr_6 [i_1]) ? var_9 : var_9)))));
        var_18 = (((arr_5 [i_1]) * var_11));
    }
    var_19 = (min(var_7, var_9));
    #pragma endscop
}
