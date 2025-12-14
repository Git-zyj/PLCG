/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (!var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 += var_6;
        var_17 = (arr_3 [11] [i_0]);
        arr_4 [i_0] = ((((((arr_1 [11] [i_0]) % var_2))) ? var_13 : var_6));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = (((arr_7 [i_1]) > var_5));
        arr_9 [i_1] [0] = arr_0 [0];
        arr_10 [i_1] = arr_7 [9];
        var_19 = (max(var_19, var_5));
    }
    #pragma endscop
}
