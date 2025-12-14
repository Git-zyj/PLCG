/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 -= -255;
    var_16 = (((((min(var_11, 1))) ? var_6 : (min(var_0, var_6)))) | var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_17 = ((var_6 + ((((arr_1 [i_0] [i_0]) ? var_8 : 32)))));
        var_18 -= (!var_1);
        arr_3 [i_0] = ((!(var_9 || var_4)));
        var_19 = var_10;
    }
    var_20 = var_12;
    #pragma endscop
}
