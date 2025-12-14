/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] |= (((((((7 ? 128 : var_0))) ? 128 : 128)) == 128));
        var_18 = (max(var_18, 2277223672));
    }
    var_19 = (((128 & var_14) ? (((((var_2 ? var_17 : var_3))) ? ((345655809 ? 128 : 4002350654818380876)) : var_15)) : -7036491612083665856));
    #pragma endscop
}
