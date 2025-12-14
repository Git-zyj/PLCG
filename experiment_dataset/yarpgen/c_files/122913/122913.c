/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 |= (!-var_9);
        var_18 |= (arr_2 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = (max(((((var_8 ? (arr_4 [i_1]) : var_8)) + (((var_0 ? var_13 : var_7))))), ((((-(arr_4 [i_1])))))));
        var_20 = (min(var_20, (arr_5 [i_1])));
    }
    var_21 = ((((max((min(var_6, var_14)), (var_7 <= var_14)))) || (6997643163898800888 + var_1)));
    var_22 = (max(var_22, (((var_11 & ((((max(var_14, var_5))) ? -4454874192053304171 : (min(-4454874192053304161, var_1)))))))));
    var_23 = (((((((18521 ? var_13 : var_10)) & (var_5 > var_0)))) ? (((~(~var_6)))) : var_4));
    var_24 = (max(var_24, ((max(var_13, var_15)))));
    #pragma endscop
}
