/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((-(-5651 + var_17))), ((var_6 - ((2476174865 ? var_12 : var_16))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = -65534;
            var_20 = var_17;
            var_21 = 65527;
            var_22 = (arr_0 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = 62483;
            var_23 = (min(var_23, (((-(3032 - 13))))));
        }
    }
    #pragma endscop
}
