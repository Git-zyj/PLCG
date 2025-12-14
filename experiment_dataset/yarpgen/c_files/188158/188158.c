/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? 15 : ((((min(11245, var_0))) ? var_1 : (var_4 & var_8)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_2;
        var_14 = (!((min(1929, (~var_7)))));
    }
    #pragma endscop
}
