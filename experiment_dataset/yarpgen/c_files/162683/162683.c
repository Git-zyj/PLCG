/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 255;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (1 && 5);
        var_15 = (255 ^ 255);
        var_16 = (min(var_16, 1));
        var_17 = (min(var_17, 1));
    }
    var_18 = 30765;
    var_19 |= ((((-9223372036854775807 - 1) ^ (((2080217716 ? 123 : 804183030))))));
    #pragma endscop
}
