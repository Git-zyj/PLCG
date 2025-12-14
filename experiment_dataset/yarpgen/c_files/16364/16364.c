/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(((max(var_7, var_7))), var_17)) >= ((min(-30435, 2717282342)))));
    var_21 = (min(var_16, (min((~363267050), ((-64 ? 31 : 15790175161361812158))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_22 += ((~(((arr_1 [i_0]) ? ((-(arr_0 [i_0 + 1]))) : (((((arr_1 [i_0]) != -45))))))));
        var_23 ^= (((((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (~512) : ((((arr_0 [3]) && 30439)))))) - (max(((2108236590602184933 ? (arr_1 [i_0]) : (arr_0 [13]))), ((max((arr_1 [i_0 - 4]), 114)))))));
    }
    var_24 = ((+((((-1 / var_0) >= var_16)))));
    var_25 = ((~(-var_15 >= var_1)));
    #pragma endscop
}
