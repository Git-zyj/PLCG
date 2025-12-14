/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 ? var_10 : ((((!(var_12 || var_5)))))));
    var_18 = (((((((var_9 ? var_10 : var_7)) >> ((var_7 ? var_5 : var_4))))) ? var_2 : -var_4));
    var_19 = var_10;
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_1 [i_0 - 1]);
        var_22 |= (((arr_0 [i_0 - 1]) ? (var_4 >> 1) : (arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
