/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((((((var_0 ? 18 : -6733770712070302440))) ? -18954 : 6472))) ? var_15 : -8582112821162492815));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_21 &= ((8582112821162492815 ? 9610513237159103304 : 8582112821162492816));
        arr_3 [i_0] [i_0] = 63553;
    }
    #pragma endscop
}
