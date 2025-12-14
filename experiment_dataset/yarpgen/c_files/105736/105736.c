/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((180591109 ? 4294967278 : var_11)) * (min(var_11, 14909729837734756535))))));
    var_17 = ((((var_6 >> (84 == -6501539918846878088))) == (((var_6 ? var_8 : 0)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 += 979425360;
        var_19 = (1 >> (268435200 - 268435175));
        var_20 = 1;
        arr_3 [1] = 1119206771;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] &= (arr_4 [5] [15]);
        var_21 = (-(min((arr_5 [i_1] [i_1]), 3733392675)));
        var_22 = (arr_4 [i_1] [i_1]);
    }
    #pragma endscop
}
