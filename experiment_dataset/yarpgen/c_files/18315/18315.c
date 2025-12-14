/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (min(var_11, (4294967288 ^ var_14)))));
    var_18 = (min(var_18, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = arr_0 [i_0] [i_0];
        var_20 = ((((3263681487 ? 0 : 2908277539))) ? ((124515758 ? 1034034203 : 1468584229)) : 1975663542);
    }
    var_21 = ((var_14 && (((var_15 ? var_9 : (min(var_13, var_1)))))));
    var_22 -= var_11;
    #pragma endscop
}
