/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 -= ((53244 || (~-46)));
        var_15 &= ((-47 ? ((-25 ? 131068 : 131068)) : var_3));
        var_16 = (((-131096 == 2663857167) ? var_9 : 29079));
    }
    var_17 = var_5;
    var_18 = ((~(min(131082, 131096))));
    var_19 = 0;
    #pragma endscop
}
