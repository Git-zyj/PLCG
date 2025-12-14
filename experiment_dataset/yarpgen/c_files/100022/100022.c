/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_4));
    var_17 -= var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 -= (max(var_7, var_9));
        var_19 = (min(var_19, (((1459055760 ? -1130453186 : 4651)))));
    }
    var_20 = (((var_8 * -1895912760) - ((min(var_14, var_12)))));
    #pragma endscop
}
