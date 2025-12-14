/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_17 |= (((-(arr_0 [0]))));
        var_18 = (min(var_18, -7295328188236320171));
    }
    var_19 -= var_4;
    var_20 *= ((~(~13681)));
    #pragma endscop
}
