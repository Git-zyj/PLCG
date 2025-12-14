/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (~15108943945975559356);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_8 [8] [i_1] [i_1] = 1924148724;
            var_15 = (max(var_15, ((((((65535 ? var_8 : var_3))) ? (140737487831040 >> 0) : (((arr_1 [i_0]) & 140737487831028)))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = 805306368;
            var_17 = ((arr_5 [i_2] [i_2] [i_0]) ? (arr_2 [4]) : (arr_2 [i_0]));
        }
    }
    var_18 = var_13;
    #pragma endscop
}
