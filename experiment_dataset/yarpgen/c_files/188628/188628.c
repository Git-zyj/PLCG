/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        var_12 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 += 1076148913;
        var_14 += (arr_3 [i_1]);
    }
    var_15 = ((115 ? ((((max(var_6, 1027874234))) ? var_9 : (max(3395346577, 3)))) : var_5));
    #pragma endscop
}
