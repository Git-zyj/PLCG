/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = ((-((1 ? ((var_11 ? 65513 : 788015638)) : 19))));
        arr_2 [12] [i_0] = 120;
    }
    var_16 = (!1);
    var_17 = min(48983, 185);
    #pragma endscop
}
