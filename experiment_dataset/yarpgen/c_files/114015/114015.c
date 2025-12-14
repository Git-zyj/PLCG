/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1 ? var_1 : (((max(194, -14191))))))) ? -14191 : 18446744073709551606));
    var_15 = 14191;
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((39 / -1) + (1 ^ 118)));
        arr_2 [11] [i_0] = (min(((~((min(1, var_7))))), -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = 662674050;
        var_19 = (min(var_19, ((((arr_6 [0]) >> var_5)))));
    }
    var_20 = ((var_5 ^ 9223168486349447348) ? ((((!0) && (((var_9 ? var_13 : 76)))))) : (~var_10));
    #pragma endscop
}
