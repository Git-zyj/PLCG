/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_13));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(11999, 0))) ? ((-3 ? -66 : var_7)) : (-66 || 97857566763512201)));
        var_17 = var_12;
    }
    #pragma endscop
}
