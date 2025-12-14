/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(var_13, -var_5));
        var_14 += ((-((4105975414 ? 58 : 1))));
    }
    var_15 = (min(var_15, var_12));
    #pragma endscop
}
