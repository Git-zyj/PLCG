/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 ? var_13 : (max(var_19, ((0 ? var_6 : 2877470552))))));
    var_21 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = var_9;
        var_23 *= (((((var_16 ? (arr_0 [i_0]) : (arr_1 [i_0] [6])))) ? ((var_15 ? var_15 : var_6)) : (arr_1 [i_0] [4])));
    }
    #pragma endscop
}
