/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((max((-107 != var_11), var_9))), var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((54 ? (arr_0 [i_0]) : var_9)) : var_1));
        var_16 |= (((((arr_0 [i_0]) + (arr_0 [i_0]))) + (24 == -55)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (-8760297110972712210 > var_5);
        arr_7 [i_1] = (min(-116, ((~((max((arr_1 [i_1] [i_1]), (arr_4 [i_1]))))))));
        arr_8 [i_1] = -6992520511746256851;
    }
    var_18 -= ((18446744073709551615 ? 31053 : var_3));
    #pragma endscop
}
