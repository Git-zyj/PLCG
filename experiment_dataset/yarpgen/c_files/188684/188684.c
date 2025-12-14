/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 &= arr_1 [i_0];
        var_21 = (!(((1 ? 1 : 1803025082))));
    }
    var_22 = ((var_17 ? (((!((max(var_19, var_2)))))) : var_2));
    var_23 = 144115153716117504;
    #pragma endscop
}
