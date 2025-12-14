/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!var_11)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_15 = ((~(var_10 | var_9)));
        arr_4 [i_0 + 3] = (~-var_0);
        arr_5 [i_0] [i_0 + 3] = (~var_10);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (max(var_16, (((-(((var_4 * var_5) / (~var_11))))))));
        var_17 = ((~(~var_3)));
        var_18 = (((min(-var_12, var_2)) % (((((min(var_5, var_2))) & (~var_4))))));
    }
    var_19 = (min(var_19, (((-var_6 >= (min(-80, -109)))))));
    #pragma endscop
}
