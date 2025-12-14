/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, (~0)));
        var_12 += ((~((1532576157 ^ (6877373587401513398 & -6877373587401513398)))));
    }
    var_13 = (min(var_13, ((max((((max(-2402190738215895092, -39)))), var_0)))));
    var_14 = var_9;
    #pragma endscop
}
