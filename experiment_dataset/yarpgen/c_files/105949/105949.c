/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((var_7 ? 26225 : ((31 ? -115 : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((!(~var_5)));
        arr_3 [i_0] [i_0] = (~4202324642);
        arr_4 [i_0] [i_0] = -104;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_14 ^= (18446735277616529408 * var_7);
        arr_9 [9] [i_1] = ((var_12 ? -110 : var_8));
    }
    var_15 = (max(var_15, (-1762 + var_11)));
    #pragma endscop
}
