/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= -var_2;
    var_13 &= ((((((1905331202 ? -1905331188 : 67)) / var_3)) * (min((var_2 / -1905331202), 1))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0 + 3])));
        var_14 = ((!((!(((-1905331202 ? var_0 : var_1)))))));
    }
    #pragma endscop
}
