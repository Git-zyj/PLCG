/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = 1;
        arr_3 [i_0] [i_0] = ((2350031874159323790 ^ (((((~(arr_1 [i_0 - 1] [i_0])))) ? (((arr_1 [i_0 - 1] [i_0]) - -2350031874159323798)) : (min(var_3, 0))))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = 0;
        var_19 = (min((min(2350031874159323790, 7875957127925987252)), (min(119, (max(var_2, (arr_5 [i_1])))))));
        var_20 = (max(var_20, var_8));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_21 = ((0 % (arr_4 [11] [i_2])));
        var_22 = (((((arr_6 [i_2] [i_2]) ? var_9 : 1)) >> (var_4 + 1811934904)));
    }
    var_23 = ((~((~(~var_9)))));
    #pragma endscop
}
