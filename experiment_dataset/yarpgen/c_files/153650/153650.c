/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = var_9;
        var_13 = (((arr_0 [i_0] [i_0]) >= ((var_8 ? var_6 : 14422))));
        var_14 = (((!22288) <= (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = 274494128;
        arr_5 [i_1] |= (((arr_2 [i_1] [i_1]) ? var_6 : (arr_2 [i_1] [i_1])));
    }
    var_16 ^= ((var_11 ? var_11 : (max((~-22297), -484976981))));
    var_17 = var_1;
    var_18 = ((~(var_8 / var_1)));
    var_19 = ((var_11 ? ((var_0 ? (!var_5) : (~var_7))) : (var_11 % 548858478284211776)));
    #pragma endscop
}
