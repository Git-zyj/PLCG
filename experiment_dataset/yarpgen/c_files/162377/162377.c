/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((((var_11 ? var_7 : 0)))) ? var_8 : ((((max(16252928, var_4))) ? var_1 : -var_6))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 += var_0;
        var_21 = -1;
    }
    #pragma endscop
}
