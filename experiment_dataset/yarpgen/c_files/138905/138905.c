/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 433230300;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = -109;
        var_22 = (15360 & (min(15364, 15360)));
    }
    var_23 = ((((((1 ? 1279501106 : -32135)))) || 1752651388));
    #pragma endscop
}
