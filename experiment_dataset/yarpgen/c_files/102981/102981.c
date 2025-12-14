/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 &= 10393961105717137421;
        var_16 = (min(var_16, (arr_1 [i_0] [6])));
        arr_2 [i_0] [i_0] = var_8;
        var_17 = ((((arr_0 [i_0] [i_0]) << (11855952009346522487 - 11855952009346522483))));
    }
    var_18 = var_2;
    #pragma endscop
}
