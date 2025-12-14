/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = min((--2484814925), (!var_1));
        var_18 = ((max((arr_1 [i_0]), var_4)));
        var_19 = var_1;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = (min((!var_13), (~var_0)));
        var_20 = (min(var_20, var_15));
    }
    var_21 = (!var_4);
    #pragma endscop
}
