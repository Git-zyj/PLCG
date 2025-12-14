/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 *= var_6;
        var_16 = (max(var_16, var_5));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_17 -= ((~(~var_5)));
        var_18 = ((!(((-(arr_1 [i_1 + 1]))))));
    }
    var_19 = var_11;
    #pragma endscop
}
