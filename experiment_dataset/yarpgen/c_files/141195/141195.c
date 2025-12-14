/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] |= ((var_9 ? 2700526569329363335 : (((499211631 ? 72 : -73)))));
        var_19 ^= (max(-70, var_7));
        var_20 = (((var_17 <= (arr_1 [i_0 + 1]))));
        arr_5 [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (max(var_21, ((((arr_7 [i_1]) ? 515396075520 : (arr_3 [i_1] [i_1]))))));
        var_22 = var_9;
        var_23 *= ((((var_6 + 9223372036854775807) >> (var_14 - 1532589107))));
        var_24 = (arr_1 [i_1]);
    }
    var_25 -= (((min(var_8, var_18)) ? var_1 : ((var_12 >> (var_11 - 3346320411)))));
    var_26 += var_4;
    #pragma endscop
}
