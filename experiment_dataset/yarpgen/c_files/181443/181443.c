/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(205, ((~((max(-117, 50)))))));
    var_17 = (max(var_15, var_5));
    var_18 = (var_2 | ((((var_13 & 9173) >> (min(1, var_2))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 *= ((var_11 == (((var_8 == (max(var_15, 1)))))));
        var_20 = (~(((((max(-31, 55))) >= (var_10 > 175)))));
    }
    #pragma endscop
}
