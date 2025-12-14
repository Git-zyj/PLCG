/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 -= (max((((((var_8 ? 28273 : 4116031786))) ? (min(4116031786, 28273)) : (((178935509 ? (arr_1 [i_0] [i_0]) : 66))))), 247));
        var_21 = ((((((42579 == var_13) & ((1 ? 0 : var_4))))) ? ((((((arr_2 [i_0] [i_0]) ? var_15 : var_13))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0 - 2]))) : (((((121 ? 4090830610 : var_6))) ? ((var_9 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : -1426531226))));
        arr_3 [i_0] [i_0] |= ((!((min((arr_2 [i_0] [i_0]), var_7)))));
    }
    var_22 = (!4);
    #pragma endscop
}
