/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 ^ var_11);
    var_16 *= ((var_14 ? var_7 : ((((min(-6, -1))) ? ((20 ? 32753 : 20)) : var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (0 && 32753);
        arr_3 [i_0] [i_0] = ((var_7 / (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_18 = (min(var_18, 48826));
        var_19 = (max(var_19, 16717));
        arr_6 [i_1] = (((-2147483647 - 1) ? (arr_5 [1] [i_1]) : var_0));
    }
    #pragma endscop
}
