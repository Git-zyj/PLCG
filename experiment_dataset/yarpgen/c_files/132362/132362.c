/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(var_8, 170))) ? ((7 ? 64 : var_9)) : 79))) ? 36028797018963936 : ((78 ? ((26 ? var_7 : var_0)) : 1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 += ((-((var_5 ? 127 : 1))));
        var_12 = 1;
    }
    #pragma endscop
}
