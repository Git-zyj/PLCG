/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-51 != (!var_6))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (~255);
        arr_3 [i_0] = var_8;
        var_17 += ((-(-32767 - 1)));
    }
    #pragma endscop
}
