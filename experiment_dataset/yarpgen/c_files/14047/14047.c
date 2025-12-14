/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((var_5 % ((43 ? 62880 : -1664279686)))))));
    var_12 = ((var_6 ? (min(var_5, var_6)) : var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = ((var_7 || (arr_3 [i_0])));
        arr_5 [i_0] |= (((arr_2 [i_0 + 1]) ? (arr_0 [i_0]) : (~1)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_8 [6] &= ((+((min((arr_7 [i_1 + 3]), 65075)))));
        arr_9 [4] &= var_6;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_13 += (~var_10);
        var_14 &= ((((var_0 % (arr_11 [i_2]))) << (var_10 - 94)));
    }
    #pragma endscop
}
