/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_13;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_1 [i_0 + 1] [i_0 - 1]);
        var_17 = (~204);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 -= (((((arr_3 [i_1] [i_1]) < (arr_4 [i_1])))) >= ((((arr_1 [i_1] [i_1]) * (arr_1 [i_1] [i_1])))));
        var_19 |= ((!(arr_4 [i_1])));
        var_20 -= ((((((~(((((arr_2 [i_1]) + 9223372036854775807)) << (((arr_1 [i_1] [i_1]) - 32530)))))) + 9223372036854775807)) << ((((~((~(arr_0 [i_1]))))) - 2909746434))));
        var_21 = (max(var_21, (((1 << (2026962164 - 2026962156))))));
        var_22 += ((((0 >= 70) ? (49 != 1698558519) : (3767879681 - -9341))) + ((((!(!16400931965767380222))))));
    }
    var_23 = (max(var_23, var_3));
    #pragma endscop
}
