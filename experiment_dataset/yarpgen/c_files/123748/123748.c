/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? 3584 : (arr_1 [i_0])))) ? ((((min(var_5, var_3))) ? ((max(5079, var_0))) : ((((arr_0 [i_0]) > 52385))))) : (((((2676242554205077543 ? var_7 : var_9)) <= ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
        var_10 ^= ((((((arr_1 [i_0]) ? (4342 != 52) : (min((arr_1 [i_0]), -4343))))) ? (max(var_2, (arr_1 [i_0]))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_11 = 112;
        arr_5 [i_1] = ((-(((-127 - 1) ? (arr_4 [i_1]) : var_1))));
        var_12 = (((var_1 ? 0 : var_5)));
    }
    var_13 = 3;
    var_14 = (((26958 ? var_3 : var_3)));
    #pragma endscop
}
