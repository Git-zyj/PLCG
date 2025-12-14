/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((!(var_0 && var_14))), (!94)));
    var_17 = ((-(((24 | 4440811388927906991) ? var_15 : var_4))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((-(arr_1 [9] [i_0]))))));
        var_18 = 14005932684781644624;
        arr_5 [i_0] = ((!(arr_3 [i_0])));
        arr_6 [i_0] = var_8;
        var_19 = (arr_0 [i_0] [i_0]);
    }
    var_20 = 26122;
    #pragma endscop
}
