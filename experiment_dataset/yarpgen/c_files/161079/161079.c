/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((!var_1) / var_9));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, ((((((arr_1 [i_0]) ? (max(var_0, 19)) : ((((arr_2 [i_0 - 1] [i_0 - 1]) ? -16450 : 16449))))) == (((1 + (arr_2 [i_0] [i_0])))))))));
        var_19 += arr_0 [i_0] [i_0];
    }
    #pragma endscop
}
