/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 1;
        var_20 -= (-31311 & 1);
        var_21 = -868088200;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = 963;
        var_22 = (((4256238630 & 38) - 92));
    }
    var_23 = var_18;
    #pragma endscop
}
