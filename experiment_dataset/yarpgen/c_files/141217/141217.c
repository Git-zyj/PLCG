/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((!var_0), ((-((var_4 ? var_5 : var_6))))));
    var_14 = var_5;
    var_15 = ((var_3 ? (min((max(var_9, var_11)), var_3)) : var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_12;
        var_17 = (max(7089756285414544299, -7089756285414544299));
    }
    var_18 = var_4;
    #pragma endscop
}
