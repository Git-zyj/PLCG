/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max((!var_8), (min(((255 ? var_0 : var_12)), var_9))));
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((((arr_0 [i_0] [i_0]) ? 201 : 255)));
        var_17 = 1;
    }
    var_18 = var_6;
    #pragma endscop
}
