/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (+((((var_11 == var_14) > ((min(var_3, var_10)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((max((arr_0 [i_0]), 104))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        var_17 = ((-((var_1 & ((max((arr_0 [i_0]), (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
