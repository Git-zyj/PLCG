/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 -= (arr_1 [i_0]);
        var_18 ^= (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 = (min((arr_3 [i_1 - 1] [i_1]), (((((13175936598579494652 ? (arr_3 [i_1] [i_1]) : 9473585295439422036))) ? ((max(var_2, (arr_4 [i_1])))) : var_1))));
        var_20 = 63488;
        var_21 = (min(var_21, ((min(429, 1)))));
    }
    var_22 = var_3;
    var_23 = 127;
    #pragma endscop
}
