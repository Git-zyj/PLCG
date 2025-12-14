/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((var_10 != var_6), (~var_9)))) ? ((var_8 + (var_9 && var_0))) : ((((var_4 / var_2) / var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) && (arr_1 [i_0])));
        var_12 += (((((arr_1 [i_0]) && (arr_1 [i_0]))) && (arr_0 [i_0])));
        var_13 *= (((arr_0 [i_0]) && (((arr_1 [i_0]) && (arr_0 [i_0])))));
    }
    var_14 = ((-((var_1 ? (~var_3) : var_1))));
    var_15 = (~(max(var_5, (max(var_3, var_9)))));
    #pragma endscop
}
