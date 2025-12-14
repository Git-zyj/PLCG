/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = -1270482610;
        var_12 = (max(var_12, (((1 ? 1 : 0)))));
        arr_2 [20] [6] = ((18446744073709551612 ? 1 : ((-538323723 ? 0 : 217))));
        var_13 ^= 39;
        var_14 = (4 ? 11 : 38);
    }
    var_15 |= var_0;
    #pragma endscop
}
