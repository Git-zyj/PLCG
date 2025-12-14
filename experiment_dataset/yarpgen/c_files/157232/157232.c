/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (var_13 != 1);
    var_21 = (max(var_21, var_17));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (((arr_2 [i_0] [i_0]) ? (((((min(0, 4294967295)) >= (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))) : (min(-4853331327649231976, (-2147483647 - 1)))));
        var_23 = (arr_0 [19]);
    }
    var_24 *= var_17;
    var_25 = var_10;
    #pragma endscop
}
