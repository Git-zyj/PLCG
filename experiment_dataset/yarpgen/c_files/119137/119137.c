/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_4;
    var_14 = (((~var_4) & var_5));
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = ((39990 > (((arr_0 [i_0]) ? 38 : 156))));
        arr_2 [i_0] = var_8;
    }
    #pragma endscop
}
