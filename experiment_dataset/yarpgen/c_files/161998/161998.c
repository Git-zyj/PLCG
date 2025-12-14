/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = ((~(((((~(arr_0 [i_0] [5])))) ? ((max(var_11, 0))) : (max((arr_1 [6]), (arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] [2] = 1;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (min(((((min(var_5, var_9))) ? (((max(9, 33742)))) : var_7)), (!1)));
        var_23 = (min(var_23, (-127 - 1)));
    }
    var_24 = (max(((-(!var_3))), var_17));
    var_25 = (~var_15);
    var_26 = var_16;
    #pragma endscop
}
