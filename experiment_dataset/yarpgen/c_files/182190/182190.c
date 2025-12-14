/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(-1200521336533496262, 7370557485880590905)));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) == (((!(arr_0 [8]))))));
        var_18 = ((-1 < (((~637715694) ^ (arr_1 [i_0 + 1])))));
        var_19 ^= ((+(((~var_13) ^ ((0 ? (arr_2 [i_0] [12]) : var_13))))));
    }
    #pragma endscop
}
