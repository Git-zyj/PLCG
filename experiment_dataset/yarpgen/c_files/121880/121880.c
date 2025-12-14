/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [11] = (((((35044 << (1206985332 - 1206985331)))) ? (arr_2 [i_0]) : (arr_1 [i_0])));
        var_11 ^= (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((-5852534730085038017 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_12 = (((((~(arr_0 [i_0])))) ? (((arr_1 [i_0]) ? 57 : (arr_2 [i_0]))) : 102));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_13 = (((arr_2 [i_1 - 1]) - (arr_2 [i_1 - 1])));
        arr_8 [i_1] [i_1 - 1] = ((!(arr_5 [i_1 + 1])));
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_14 = (((arr_9 [i_2 - 1]) ? (((((~(arr_9 [i_2 + 1])))) ? (((arr_10 [i_2 + 1]) ? 0 : 63048)) : 511)) : (((((30492 << (1280 - 1273))))))));
        var_15 = (max(-3741885484968474510, (max((arr_9 [i_2 + 1]), 65003))));
    }
    var_16 = var_2;
    #pragma endscop
}
