/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = 4094;
        var_13 = var_6;
    }

    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_14 = (arr_3 [i_1]);
        var_15 |= (max((1 || -4091), (((!var_1) ? var_8 : var_1))));
    }
    var_16 = (var_1 + var_5);

    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_8 [10] |= (!(((var_9 ? var_9 : (arr_2 [i_2])))));
        var_17 = (1792 < var_3);
    }
    #pragma endscop
}
