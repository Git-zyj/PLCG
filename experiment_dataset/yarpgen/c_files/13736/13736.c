/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_15;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0 + 2]) || ((max((arr_0 [i_0]), var_13)))))) ^ (arr_1 [i_0])));
        arr_2 [i_0] = ((var_11 ? (12587 & 7725798729535718472) : -1829464557));
    }
    var_18 = var_11;
    #pragma endscop
}
