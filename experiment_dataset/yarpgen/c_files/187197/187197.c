/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [3])));
        var_13 = (max((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])));
    }
    var_14 = (max(var_7, (min(-2651, 2069471396))));
    #pragma endscop
}
