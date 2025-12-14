/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((51 / ((min(var_8, var_0)))));
        var_14 = ((~(min(1597170803, ((36 ? var_11 : var_8))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (max((((!((min(-1597170803, 1)))))), ((-(min(var_0, var_11))))));
        var_15 = ((((max((arr_2 [i_1] [i_1]), var_2))) / (max((arr_4 [i_1]), var_0))));
        var_16 = (((arr_4 [i_1]) ? (var_5 & -117) : ((((-2393433441094061938 ? 32767 : 51)) * (arr_2 [i_1] [i_1])))));
    }
    var_17 = (~var_8);

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] |= ((-(min(((var_6 ? (arr_1 [5] [i_2]) : var_3)), ((min(var_7, var_7)))))));
        var_18 += (~var_5);
    }
    var_19 = ((var_6 ? var_7 : ((((max(var_12, 13470730996040130984))) ? var_6 : ((var_6 ? var_8 : var_12))))));
    var_20 = (!80);
    #pragma endscop
}
