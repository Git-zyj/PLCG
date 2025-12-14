/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = ((((var_0 % (arr_0 [i_0]))) > ((((arr_0 [i_0 + 1]) * 0)))));
        arr_2 [i_0] = ((var_13 ? var_13 : (arr_0 [i_0 - 1])));
        var_17 = (arr_1 [i_0]);
        var_18 = (((((150 | (arr_0 [i_0])))) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])));
        var_19 = arr_0 [i_0];
    }
    var_20 = var_15;
    var_21 = ((((~(var_14 | var_7))) & ((~((var_9 ? var_12 : var_1))))));
    #pragma endscop
}
