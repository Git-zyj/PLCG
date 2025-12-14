/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (max((min(((0 >> (1483351823320432135 - 1483351823320432132))), (7680 || 7699))), (arr_0 [i_0 + 1] [10])));
        var_17 *= 7680;
    }
    var_18 = -7680;
    #pragma endscop
}
