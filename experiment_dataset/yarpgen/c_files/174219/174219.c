/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((((((min(var_2, var_6))) && ((max(var_4, var_0))))) ? var_12 : ((((1 && var_5) ? var_1 : var_2)))));
    var_19 = var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, ((((max(var_0, var_7)))))));
        arr_3 [1] = var_7;
    }
    #pragma endscop
}
