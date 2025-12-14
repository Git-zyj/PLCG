/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = var_1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        var_18 = -6;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((-(var_10 && var_6))))));
        arr_8 [i_1] = (arr_7 [i_1 - 1] [i_1 - 1]);
        arr_9 [i_1] [i_1] = var_9;
    }
    #pragma endscop
}
