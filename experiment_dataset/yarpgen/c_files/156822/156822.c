/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = var_11;
        var_15 = (min(var_15, (arr_0 [i_0] [i_0])));
    }
    var_16 = 17302853852439361983;
    #pragma endscop
}
