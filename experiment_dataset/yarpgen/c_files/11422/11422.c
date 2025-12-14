/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (((arr_0 [i_0] [i_0]) / 29618));
        arr_3 [i_0] = (arr_2 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (1 || 1);
        arr_8 [i_1] [20] = (arr_4 [i_1]);
        var_17 = (arr_4 [i_1]);
        var_18 = (max(var_18, ((((arr_4 [i_1]) > (arr_4 [i_1]))))));
        arr_9 [0] = (arr_6 [7]);
    }
    #pragma endscop
}
