/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0]) ? (arr_0 [i_0]) : -1));
        var_18 = ((var_8 | (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = ((((min(1023, 21064))) << ((((arr_4 [i_1]) && (arr_4 [i_1]))))));
        var_20 = (((((((arr_5 [i_1]) ? ((min((arr_1 [i_1]), -21922))) : (arr_2 [i_1]))) + 2147483647)) << (((((1039 - (arr_1 [i_1])))) - 1038))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 = (-28043 + 3941849722);
        var_22 ^= ((-(arr_8 [i_2])));
    }
    var_23 &= (((0 % var_12) >= var_4));
    var_24 = (min(var_24, ((((((-115 ? 3941849722 : 1010)) >> ((15 ? 1 : 1275944901))))))));
    var_25 = (((!1) ^ (1 << 24)));
    var_26 -= ((((min(((166 ? 1 : var_8)), var_14))) ? (~1) : var_9));
    #pragma endscop
}
