/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_12 *= (((arr_1 [i_0 - 2]) == (arr_0 [i_0 - 1])));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_13 = arr_5 [i_1];
        var_14 = (arr_6 [i_1 + 1]);
        var_15 = ((+(((2903 != (max((arr_5 [i_1]), var_1)))))));
        var_16 = ((760976721 == (((arr_5 [i_1 - 1]) + (arr_5 [i_1 + 1])))));
    }
    var_17 += (min(55799, 10605));
    #pragma endscop
}
