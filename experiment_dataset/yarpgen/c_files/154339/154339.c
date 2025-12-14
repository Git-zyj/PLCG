/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 += var_3;
        var_16 = (((2292341486 == var_9) < (arr_0 [i_0 + 2])));
        var_17 ^= (((arr_1 [i_0 - 1]) << (((~var_3) - 3174647216))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_18 = ((1 == (arr_3 [4])));
        var_19 += min((!-1971907569), ((!((min(1971907568, 9829029663829236727))))));
        var_20 = var_2;
        var_21 = (((((~(arr_4 [i_1] [3])))) * (((arr_6 [i_1]) ? ((var_3 << (var_11 - 154))) : 2002625793))));
    }
    var_22 = var_12;
    var_23 = ((var_14 ? (((((((var_2 ? -5709945041696023378 : var_2))) || (((6100263526509121576 ? var_3 : var_12))))))) : (((~var_14) ? (var_11 != var_3) : var_10))));
    var_24 = var_0;
    #pragma endscop
}
