/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((~(arr_1 [i_0 + 1] [i_0 + 1]))) & ((~(min((arr_1 [1] [1]), var_10))))));
        var_19 = (max(var_19, ((((((~((-1592161136 ? -1 : 15574))))) ? var_1 : (min(6987912642218878017, -4032302370483268755)))))));
    }
    var_20 = (max(var_20, -4032302370483268751));
    var_21 = var_15;
    #pragma endscop
}
