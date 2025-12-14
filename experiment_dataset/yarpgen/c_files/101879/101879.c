/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-9970117477721771378 ? (!var_12) : var_12);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 *= max(var_7, (arr_2 [i_0]));
        var_15 = max((max((arr_1 [i_0]), (min(var_12, 15318810708275253315)))), -0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 += (var_12 ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]));
        arr_5 [i_1] = (~14085067561473713845);
    }
    #pragma endscop
}
