/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (((((max((arr_1 [i_0]), 2031132957896613002))) ? 3014485333879580972 : var_5)));
        arr_2 [i_0] = ((var_5 > ((1016503967 ? (max(10531008489187808413, 1716708768)) : var_7))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_12 &= (max((arr_0 [i_1]), (arr_1 [i_1])));
        var_13 = ((!(((min(-104, var_6))))));
    }
    #pragma endscop
}
