/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_14 = (((((var_2 ? (arr_1 [i_1] [i_0]) : (-9223372036854775807 - 1)))) ? 7723998645676286356 : var_10));
            var_15 = var_3;
        }
    }
    var_16 = (((((var_3 ? (var_11 < 0) : ((var_6 ? var_7 : var_3))))) && (((1 >> (var_2 - 26))))));
    #pragma endscop
}
