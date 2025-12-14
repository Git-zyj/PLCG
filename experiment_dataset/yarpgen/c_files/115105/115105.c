/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 + (min((min(var_4, var_5)), (((9633 ? var_0 : var_4)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((!(((((min((arr_2 [i_0]), 40))) / -118)))));
        var_14 = (max(1899815088, 124));
    }
    #pragma endscop
}
