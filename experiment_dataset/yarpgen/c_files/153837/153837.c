/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_3) ? 524287 : 96));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [7] [i_0] = (-var_6 <= var_11);
        var_20 = (((var_8 + 11519) ? (((((var_2 ? var_7 : var_18))) ? ((var_17 ? 41478 : 64)) : 189)) : ((~((var_6 ? 4 : var_9))))));
        var_21 = var_4;
    }
    #pragma endscop
}
