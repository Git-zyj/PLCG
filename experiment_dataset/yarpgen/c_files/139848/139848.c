/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, var_14));
        var_21 |= var_2;
        var_22 = (~var_15);
    }
    var_23 = (min(var_23, (var_3 * var_9)));
    var_24 = (min(var_24, ((min(var_8, (min(var_0, var_9)))))));
    #pragma endscop
}
