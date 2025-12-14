/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (((62229 - 43) ? (arr_2 [i_0 + 1]) : (!var_9)));
        var_15 = (min(var_15, ((((-1 & 0) >> (var_1 - 173))))));
    }
    var_16 = ((62220 ? 29871 : 3306));
    #pragma endscop
}
