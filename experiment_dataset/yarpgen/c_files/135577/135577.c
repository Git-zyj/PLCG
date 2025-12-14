/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, ((min(4156431364, ((min(14649, 0))))))));
        arr_4 [i_0] = var_6;
    }
    var_17 &= var_7;
    #pragma endscop
}
