/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (17 >= 8155);
        var_17 = (min(var_17, var_2));
    }
    var_18 = (max(var_18, var_6));
    #pragma endscop
}
