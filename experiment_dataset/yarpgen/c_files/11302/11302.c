/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min((-3948255165414457383 || var_3), var_12)), var_2));
    var_16 = (min(var_16, (((var_12 & (((4294967288 ? var_10 : var_5))))))));
    var_17 -= ((var_9 ? var_14 : ((var_5 ? (12078 - var_6) : var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((-(arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (((66846720 ? -3948255165414457376 : 1)));
        var_19 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 1));
        var_20 |= (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0])));
    }
    var_21 = var_7;
    #pragma endscop
}
