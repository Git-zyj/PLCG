/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(((var_11 + (262143 - -262144))), (((!(arr_1 [i_0]))))));
        var_15 = (min(((min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))), ((min((arr_0 [i_0]), -6825)))));
    }
    var_16 = ((var_6 ? (max((max(var_2, var_9)), (90 | 0))) : ((((var_11 ? var_2 : var_12)) | (~var_2)))));
    var_17 = (min((((var_12 | var_13) & -62)), -262155));
    #pragma endscop
}
