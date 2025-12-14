/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_17 | ((32767 ? 24 : (-32767 - 1))))) - var_16));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_20 += ((-47 - (!var_2)));
        arr_4 [i_0] = ((~-47) | ((((var_8 & var_3) ^ (35703 ^ 14281)))));
        var_21 &= 578695442;
    }
    var_22 = (~-47);
    var_23 *= ((var_10 < (var_11 < var_11)));
    #pragma endscop
}
