/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = (arr_2 [3] [3]);
        var_21 |= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((var_10 & ((((!(arr_4 [i_1])))))));
        var_22 = (max((min((arr_4 [i_1]), (arr_4 [i_1]))), (min((arr_3 [i_1] [i_1]), (arr_4 [i_1])))));
    }

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_23 *= (arr_3 [i_2 - 2] [i_2 + 1]);
        var_24 = var_18;
        var_25 = (arr_3 [i_2] [i_2 + 2]);
    }
    var_26 = var_13;
    #pragma endscop
}
