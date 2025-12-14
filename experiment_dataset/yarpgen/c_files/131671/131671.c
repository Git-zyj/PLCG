/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? ((((var_19 * 1) ? 2136237743289508574 : var_4))) : (((var_2 ? var_17 : var_13)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) + (((arr_0 [14]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = (min((max((arr_2 [i_0]), -42)), ((((max((arr_1 [i_0]), var_17))) ? (arr_2 [i_0]) : (1 ^ 26273)))));
    }
    var_21 = var_10;
    #pragma endscop
}
