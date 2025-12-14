/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((var_5 / var_4) ? -var_1 : var_17));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (!-8047924492096816029);
        var_21 = ((0 + (arr_1 [i_0] [i_0 - 4])));
    }

    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1] = ((!(arr_5 [i_1])));
        arr_8 [i_1] = (((arr_4 [i_1]) ^ (((arr_1 [i_1] [i_1 - 1]) / -1772369203))));
    }
    #pragma endscop
}
