/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (1 && 1)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, (((1 << (((max(4092, ((max((arr_1 [i_0]), (arr_1 [i_0])))))) - 13546)))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] = ((19 ? -1 : 19));
            arr_5 [i_1] [i_0] [i_0] |= ((((min((arr_2 [19] [14] [i_0]), (arr_1 [i_1])))) ? ((((min((arr_0 [i_1]), -32238)) <= var_3))) : ((1 ? ((var_9 - (arr_1 [i_0]))) : (221 % var_2)))));
        }
        var_12 = 0;
    }
    var_13 = (min(var_13, ((((((max(91, var_4))) ? (49152 || 1) : var_9)) ^ var_2))));
    var_14 = ((((max(var_0, 3416252953))) ? ((((((65535 ? 63 : 1))) < var_1))) : 1));
    #pragma endscop
}
