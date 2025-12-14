/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_8, var_2)) >= var_5));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (min(var_14, ((((arr_1 [i_0 + 1]) ? ((75 ? -645821456 : 112)) : var_0)))));
            var_15 *= (((arr_4 [i_1] [i_0 - 1]) ? (arr_4 [i_1] [i_0 - 1]) : (arr_4 [i_1] [i_0 + 1])));
        }
        arr_5 [6] |= (((arr_1 [i_0 - 1]) ? (arr_4 [10] [10]) : (((arr_1 [i_0 + 1]) ? (arr_2 [11]) : var_2))));
    }
    #pragma endscop
}
