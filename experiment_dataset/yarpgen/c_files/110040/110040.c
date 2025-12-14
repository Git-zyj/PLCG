/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, 18));
        var_22 = 2797197471;
    }
    var_23 = (min(var_23, -24116));
    #pragma endscop
}
