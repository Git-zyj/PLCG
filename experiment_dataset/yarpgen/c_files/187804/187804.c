/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(var_13, var_11));
        var_14 = (max(var_14, -var_1));
        arr_2 [i_0] [i_0] = ((25375 <= (1 || 40167)));
    }
    var_15 = ((((((!2097151) ? var_4 : (var_5 && var_3)))) ? ((var_9 ? ((min(32767, var_1))) : var_5)) : (((var_11 * 40174) ? (var_4 & var_4) : var_5))));
    var_16 |= var_7;
    var_17 = (((!var_10) || var_4));
    #pragma endscop
}
