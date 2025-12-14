/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0 + 2] [i_0 + 2]) ? var_4 : var_13));
        var_17 = (max(var_17, (1 % 1)));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1 + 1] &= var_14;
        arr_6 [i_1 + 2] = (max((max(var_8, 8280249609929639207)), var_3));
        arr_7 [i_1] = var_6;
    }
    var_18 = (max(var_9, (((!(((1 ? 1731603514 : 1))))))));
    var_19 = min(1, var_9);
    #pragma endscop
}
