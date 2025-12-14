/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = ((var_4 > ((var_0 ? var_13 : -20931))));
        var_15 = ((((var_8 << (16256 - 16250))) ^ (var_1 + var_8)));
    }
    var_16 = ((var_14 ? ((var_4 + ((var_10 ? 1116892707587883008 : var_13)))) : var_0));
    #pragma endscop
}
