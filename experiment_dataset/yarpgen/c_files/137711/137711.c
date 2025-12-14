/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = arr_1 [i_0];
        var_11 = (max(var_11, -0));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_12 = ((-(((arr_4 [i_1]) * var_5))));
        var_13 = (min(var_13, (var_3 / var_2)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_14 -= ((5493 ? ((5493 ? 5493 : 5764)) : ((var_6 + (arr_6 [i_2] [3])))));
        var_15 = ((var_7 ? (arr_6 [i_2 - 2] [i_2 - 1]) : (arr_6 [i_2 + 3] [i_2 + 3])));
    }
    var_16 = -1250641360;
    var_17 = ((!-1) + var_6);
    var_18 = ((var_3 ? var_4 : ((1705224819 ? 2 : 4294967295))));
    #pragma endscop
}
