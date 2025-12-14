/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_15 = 29432;
        arr_2 [i_0] = 26877;
    }
    var_16 = (((min((!1), 2147483647))) ? 5599420943137610661 : var_1);
    var_17 = var_11;
    var_18 = (!38659);
    #pragma endscop
}
