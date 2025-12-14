/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [6] = (((!14670538668855677601) ? (arr_0 [4] [4]) : var_16));
        arr_3 [i_0] [i_0] = 2003901906;
        var_20 = (((14670538668855677601 ? -1975303367 : 2840545343409834673)));
    }
    var_21 = (min(var_14, ((-(!5084336873413582226)))));
    var_22 = (((min(var_10, 8350))));
    #pragma endscop
}
