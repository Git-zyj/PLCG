/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (-7697637797125414286 | 1588610885);
        var_21 *= (max((var_5 - var_14), var_1));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_22 *= (var_17 > var_16);
        var_23 = (max(var_23, (var_13 & var_14)));
    }
    var_24 = (min(var_24, (var_0 || var_0)));
    #pragma endscop
}
