/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = var_3;
        var_17 = ((((max(198, 26338))) - (arr_1 [i_0])));
    }
    var_18 ^= -32757;
    #pragma endscop
}
