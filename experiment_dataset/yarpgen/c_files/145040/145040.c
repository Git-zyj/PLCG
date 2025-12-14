/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 |= (((var_14 < var_3) ? 30287 : ((((max(var_2, 8238026358670829213))) ? 34583 : (~var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [15] [i_0] = (((arr_2 [i_0]) + (~132)));
        var_19 ^= (59 + 49152);
        var_20 *= (((arr_1 [i_0]) | (arr_1 [i_0])));
    }
    #pragma endscop
}
