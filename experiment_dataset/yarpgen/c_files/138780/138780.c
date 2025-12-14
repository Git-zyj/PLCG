/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 += -30286;
        var_16 = var_3;
        var_17 = (max(var_17, ((min(-1319867305, (((((var_9 ? var_9 : var_4))) ? (-32767 - 1) : (min(var_9, var_12)))))))));
        var_18 -= (1319867305 ? ((min(1, var_3))) : 73);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 -= var_9;
        var_20 *= ((225 ? var_13 : ((((((var_9 ? -1 : var_1))) ? var_6 : ((4016 ? var_5 : 63)))))));
    }
    #pragma endscop
}
