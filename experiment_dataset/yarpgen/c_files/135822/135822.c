/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (min(var_12, ((max((arr_1 [i_0]), (arr_0 [2]))))));
        arr_2 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = ((arr_3 [i_1]) - var_2);
        var_14 = ((((((arr_4 [i_1] [i_1]) <= 562949953421308))) == (arr_4 [i_1] [i_1])));
    }
    var_15 = (max(var_10, (max(((var_9 ? var_11 : 934909362425299869)), (var_11 <= var_4)))));
    #pragma endscop
}
