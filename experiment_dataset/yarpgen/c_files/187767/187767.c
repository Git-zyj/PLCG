/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((min(var_11, var_8)), ((var_3 ? var_15 : 7856082354520901795))))) ? (((var_2 ? (var_3 + 89) : (max(var_4, var_8))))) : ((var_2 ? var_14 : var_9))));
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) ? 1 : (arr_0 [i_0])));
        var_19 = (!33001);
        var_20 += -1015927913;
    }
    #pragma endscop
}
