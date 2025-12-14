/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(-1, 4626)))));
    var_15 = (((((!((min(var_7, -1)))))) | ((var_6 ? var_3 : ((var_10 ? var_5 : var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [2] [i_0] |= ((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]));
        var_16 ^= ((var_12 > (((((arr_3 [i_0] [i_0]) >= (arr_2 [11])))))));
        arr_5 [1] [1] |= 1;
    }
    #pragma endscop
}
