/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 += ((6681915791665566420 ? 1 : (arr_1 [i_0 + 1])));
        var_21 = (-((var_19 ? (arr_1 [i_0]) : (arr_0 [i_0]))));
        arr_2 [i_0] = (((arr_1 [i_0 - 2]) ^ (arr_1 [i_0 - 1])));
    }
    var_22 = (max((var_0 >= var_12), (((-9223372036854775807 - 1) ? var_9 : 28))));
    var_23 = (max(var_23, (((max((var_1 & 57), (!var_16)))))));
    #pragma endscop
}
