/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = var_7;
        var_12 = 437195735;
        arr_2 [i_0] = -1;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 ^= (arr_3 [3]);
        var_14 ^= min((arr_4 [6]), ((((min(var_1, (arr_1 [7])))) ? (arr_3 [i_1]) : (437195735 != var_1))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_7 [i_2] = (!var_4);
        var_15 = var_10;
        var_16 = (!3535);
    }
    var_17 = ((!(var_0 <= var_7)));
    var_18 += (min(133, 437195732));
    var_19 = ((var_4 ? (((437195735 ? var_9 : 210921664933982846))) : ((max(var_1, ((var_4 ? var_6 : var_1)))))));
    #pragma endscop
}
