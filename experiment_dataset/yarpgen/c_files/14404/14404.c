/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_17;
    var_20 &= (((var_1 | 0) ? var_8 : var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        var_21 = var_9;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_22 ^= ((((~(max(var_5, var_9)))) ^ var_3));
        var_23 &= (((((-(max((arr_2 [i_1]), var_4))))) ? 1659817131 : (arr_4 [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_24 &= (arr_0 [8]);
        var_25 ^= 1;
        var_26 = (min(var_26, (arr_0 [20])));
        var_27 *= (((arr_7 [i_2]) != (arr_1 [i_2])));
        var_28 = arr_1 [i_2];
    }
    #pragma endscop
}
