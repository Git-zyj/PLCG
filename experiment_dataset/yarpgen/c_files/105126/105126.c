/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = 255;
        var_19 = var_7;
    }
    var_20 = (max(var_20, 2639313488));
    var_21 = (min(var_21, var_0));
    var_22 = var_0;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = (max(var_23, (arr_4 [i_1] [i_1])));
        var_24 = 8292119518920124913;
        var_25 = var_2;
        arr_6 [i_1] = var_14;
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
    }
    #pragma endscop
}
