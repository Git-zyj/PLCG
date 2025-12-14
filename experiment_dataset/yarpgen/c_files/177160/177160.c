/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (!var_9);
        arr_4 [16] [i_0] &= (arr_1 [i_0] [i_0]);
    }
    var_16 = (-194 & 255);
    var_17 *= ((((((4294967295 ? var_15 : var_12)))) ? ((var_10 ? ((var_1 ? 511057551 : var_15)) : (min(var_14, var_10)))) : 15304913963797077764));
    var_18 = (!15304913963797077764);
    var_19 = (!var_13);
    #pragma endscop
}
