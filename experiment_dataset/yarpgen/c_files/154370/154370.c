/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] |= -var_4;
        var_16 = (max(var_16, ((((arr_2 [i_0 + 2]) == var_9)))));
        var_17 = ((arr_1 [i_0]) ? var_14 : ((15067752603764949199 / (arr_2 [6]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 -= (min((((arr_6 [i_1] [2]) ? (arr_6 [i_1] [i_1]) : var_11)), (((!(((0 ? var_4 : var_14))))))));
        var_19 = (((arr_5 [i_1]) / (min(var_4, var_11))));
        arr_7 [i_1] |= -255778162;
    }
    var_20 -= var_1;
    #pragma endscop
}
