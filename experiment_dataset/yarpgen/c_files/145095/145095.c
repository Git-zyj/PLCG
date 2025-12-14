/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -23537));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = 5873817993537316096;
        var_22 -= -2895;
    }
    var_23 = (min(var_23, (((var_3 << (min(((49 ? 49 : 0)), 0)))))));
    var_24 |= var_11;
    #pragma endscop
}
