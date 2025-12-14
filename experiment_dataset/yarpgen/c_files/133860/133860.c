/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? var_11 : ((var_15 ? (((var_12 ? var_15 : -1))) : ((var_10 ? 9593904064043686712 : var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((16287133474037371307 ? var_5 : var_10));
        var_18 *= (((((9593904064043686712 ? 1 : var_9))) ? (((arr_0 [i_0] [i_0]) ? 17592185913344 : 9593904064043686696)) : ((((arr_0 [1] [i_0]) ? 127 : var_0)))));
        arr_2 [i_0] = ((arr_0 [i_0] [i_0]) ? 78 : (arr_0 [i_0] [i_0]));
    }
    #pragma endscop
}
