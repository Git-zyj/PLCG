/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        arr_2 [9] = (arr_0 [5]);
        var_16 = ((!(((((!(arr_0 [i_0]))) ? (arr_0 [i_0]) : ((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 646853393))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (arr_3 [i_1] [i_1]);
        var_18 = (arr_1 [7]);
    }
    var_19 = (min(var_19, -var_10));
    var_20 = ((((var_0 ? var_8 : var_13))));
    #pragma endscop
}
