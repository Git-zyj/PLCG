/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = var_4;
        var_12 -= -var_9;
    }
    var_13 = (((((1621427016516732149 | var_8) >= (var_2 > 0))) ? ((min((0 | var_3), ((var_9 ? var_3 : -5827))))) : var_7));
    var_14 = var_4;
    #pragma endscop
}
