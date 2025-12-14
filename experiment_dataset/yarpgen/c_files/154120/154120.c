/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((0 ? 1073676288 : 8));
    var_14 = ((var_2 ? (((15746 ? var_9 : var_4))) : var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = var_6;
        arr_3 [i_0] = ((14143 ? var_8 : ((~((min((arr_0 [i_0]), (arr_2 [i_0]))))))));
        arr_4 [i_0] = (arr_1 [i_0] [12]);
        var_16 = (min(var_2, var_4));
        arr_5 [i_0] [i_0] = ((1 ? 1401036492 : 5494638173800138459));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [11] = (((arr_6 [i_1] [i_1]) ^ (~1401036492)));
        arr_9 [i_1] = 98;
        var_17 = (((arr_2 [i_1]) ? (arr_6 [i_1] [i_1]) : var_8));
    }
    #pragma endscop
}
