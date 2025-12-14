/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_17 += -0;
        var_18 = (2452426282 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1]));
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 -= (((arr_0 [i_0 + 3]) ? (((arr_1 [i_0]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0]))) : var_7));
    }
    var_21 &= var_3;
    var_22 ^= max((min((min(var_4, var_13)), var_13)), (!-6817447096841045381));
    var_23 += min(140, var_3);
    var_24 = (min(var_24, ((max((max(((min(var_11, var_1))), ((112 ? -3462857366620767908 : var_9)))), var_2)))));
    #pragma endscop
}
