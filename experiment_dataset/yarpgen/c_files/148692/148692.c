/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 -= 0;
        var_17 = var_4;
    }
    var_18 = (min(var_18, (((((1 ? 0 : var_13)) >= (-2147483647 - 1))))));
    var_19 = (max(var_19, (((((-804368475 ? (max(var_13, var_14)) : var_8))) ? (((-127 - 1) ? -77 : 1)) : ((1 ? var_5 : (~75)))))));
    var_20 -= ((0 != (((1 ? 77 : 1)))));
    #pragma endscop
}
