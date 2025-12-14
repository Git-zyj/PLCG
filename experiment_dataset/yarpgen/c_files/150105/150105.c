/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max(-9975, var_1)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(-2578175928, (((arr_0 [i_0 - 2] [i_0 - 2]) * (arr_2 [i_0 - 1])))));
        var_15 = (min(var_15, ((max((max(var_4, (arr_2 [i_0 + 1]))), (arr_2 [i_0]))))));
    }
    #pragma endscop
}
