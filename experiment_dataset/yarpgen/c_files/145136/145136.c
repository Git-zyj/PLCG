/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_2;
        var_11 *= (((arr_0 [i_0 + 3]) << (var_6 - 64)));
    }
    var_12 = (min(var_12, (((((max(-127, var_1))) ? 63 : var_8)))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((63 | (min(((min(var_3, 1))), -7037574652435741347))));
        var_13 = (max(var_13, (~1)));
    }
    #pragma endscop
}
