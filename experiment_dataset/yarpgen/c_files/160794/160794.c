/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2010158569;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 &= (!0);
        arr_3 [i_0] = ((max(((-15320 ? 0 : -8164661395343076037)), ((var_12 ? (arr_2 [i_0 + 1]) : (arr_0 [i_0] [i_0]))))));
    }
    var_17 = ((((5 ? var_2 : 1))) ? var_0 : (min((var_8 + var_7), (var_9 & var_2))));
    #pragma endscop
}
