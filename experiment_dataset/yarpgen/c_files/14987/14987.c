/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 &= ((var_6 ? (((1674222005 >= 1) - 32416)) : (-27045 - var_7)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = 2620745307;
        var_17 = (max(var_17, ((max(1674221988, (min(2620745285, 2620745310)))))));
    }
    var_18 = ((((max(var_0, 2620745310))) ? ((var_9 - ((min(86, var_0))))) : ((((var_0 % var_10) == var_11)))));
    #pragma endscop
}
