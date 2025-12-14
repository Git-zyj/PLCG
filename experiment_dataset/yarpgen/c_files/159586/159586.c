/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_13 |= var_4;
            var_14 = var_5;
            arr_5 [i_1] = ((((min((((-1 ? (arr_4 [i_0] [i_0]) : var_2))), (max(var_7, 4109843826508475826))))) ? (max((arr_1 [i_1 - 3] [i_1 - 1]), 2598356304522592388)) : (min((var_3 / var_2), var_6))));
            var_15 = ((~((-1 ? 0 : 28))));
        }
        var_16 = (((1 != ((var_12 ? var_3 : var_3)))));
        var_17 *= var_7;
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
