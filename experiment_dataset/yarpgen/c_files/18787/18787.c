/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(2132235369, (2162731927 | 2162731926)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (max(var_8, var_6));
        var_22 |= var_19;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = (max(var_15, (min((var_15 / var_19), (min(var_8, var_9))))));
        var_24 = 2132235369;
    }
    #pragma endscop
}
