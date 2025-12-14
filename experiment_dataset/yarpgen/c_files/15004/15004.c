/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 -= ((var_10 ? var_11 : (((-var_4 / (((-1778053736837839828 ? -121 : var_6))))))));
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 |= 3320;
        var_18 *= (((((-3320 % (arr_0 [i_0] [i_0])))) ? var_12 : ((((max(3679506484, (arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), var_9)) : (((2438211556 ? 56 : 22540)))))));
    }
    #pragma endscop
}
