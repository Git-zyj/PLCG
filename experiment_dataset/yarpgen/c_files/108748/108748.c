/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!11913800963067317396) ? var_4 : var_6))) ? (min(var_13, var_0)) : (((((min(15079853, -4638))) ? var_10 : (max(var_5, var_3)))))));
    var_20 = ((var_16 | 11783179347835183223) & var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (var_18 & 6532943110642234218);
        var_22 = ((277104501608053051 ? var_15 : -50));
    }
    var_23 |= -9223372036854775796;

    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = ((var_10 + ((-(12481920296827387247 ^ 3449502986)))));
        arr_8 [i_1] [i_1] = (((((min(var_6, var_12)) - (max(12481920296827387243, var_5)))) <= -52));
    }
    #pragma endscop
}
