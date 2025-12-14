/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (~17);
        var_20 = ((((min(var_10, (min(var_14, 40878))))) ? 1 : -109));
        var_21 ^= ((109 ? -19319 : 1));
    }
    var_22 = var_13;
    var_23 = ((-(min(-var_9, var_5))));
    var_24 ^= ((~(var_9 ^ 1)));
    #pragma endscop
}
