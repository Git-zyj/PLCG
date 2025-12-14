/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(7590373694015129109, 22421));
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (!1);
        var_18 &= (-(((arr_1 [i_0] [i_0]) / var_5)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = 221;
        arr_4 [i_1] = (-((1 ? -6934034564155749339 : 1)));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_20 = ((var_3 * (var_2 - -73)));
        arr_7 [i_2] = (((arr_6 [i_2]) & (arr_6 [i_2])));
        var_21 = min((((arr_6 [i_2]) | (arr_3 [10]))), (((min((arr_6 [i_2]), 1)))));
    }
    var_22 = (max(var_22, var_6));
    #pragma endscop
}
