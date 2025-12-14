/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(-5739022966392116378, (((((var_0 ? var_13 : 21222))) ? (max(267386880, var_11)) : (-127 - 1)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (min(var_17, ((((~-5739022966392116377) / 8708)))));
        var_18 = (min(var_18, 1789154549));
    }
    #pragma endscop
}
