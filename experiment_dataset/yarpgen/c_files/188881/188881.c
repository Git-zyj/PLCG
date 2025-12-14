/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [1] [i_0] = max((((1 ? 33109 : 32439))), (min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1]))));
        arr_4 [i_0] = ((!((((var_1 || (arr_2 [i_0])))))));
        var_16 = ((((arr_0 [i_0 + 1]) ? var_11 : (arr_0 [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (((arr_0 [i_1]) << (((arr_6 [i_1]) - 32736))));
        var_18 = -7125483408096148365;
    }
    var_19 = var_1;
    #pragma endscop
}
