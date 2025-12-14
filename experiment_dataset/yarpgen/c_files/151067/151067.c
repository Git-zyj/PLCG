/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_10 << ((max(var_8, var_7)))))) ? (((((min(var_11, var_0)))) + 268435455)) : var_1);
    var_13 = var_7;
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0] = ((min((((arr_1 [i_0]) + 1)), (arr_1 [12]))));
        var_15 ^= (~0);
        var_16 = (min(var_16, ((((min(var_5, (arr_1 [i_0 - 1])))) && 0))));
        arr_3 [i_0] [i_0] = (min(((((((arr_0 [1] [i_0 - 1]) ? (arr_1 [i_0]) : 1))) ? ((1 ? (arr_1 [i_0]) : var_5)) : (((arr_0 [i_0] [i_0]) * 3984446762863085417)))), (arr_1 [i_0])));
    }
    #pragma endscop
}
