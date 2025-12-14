/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (7531610484352851024 ? (max(((min(254, -2507827656494976494))), var_9)) : 41147);
    var_17 = min(((((~0) ^ -var_8))), var_13);
    var_18 = ((((((!0) + 10932765675527987953))) ? (min(var_7, ((var_15 ? 576460614864470016 : 6498496895993871585)))) : (110 & 42116)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] = ((2 ? (((arr_0 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))) : (max(47, var_11))));
        var_19 *= ((((max(-9880, -32722))) ? var_0 : ((min((arr_0 [i_0] [i_0]), 0)))));
    }
    #pragma endscop
}
