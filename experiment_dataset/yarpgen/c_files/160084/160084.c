/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_19;
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((-var_6 ? ((max(var_3, (var_14 - -18406)))) : (((arr_1 [i_1]) * (!var_16)))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 = ((~(arr_1 [i_2])));
            var_22 = ((1328154476 ? (arr_0 [i_2]) : ((min(1328154476, var_11)))));
            arr_10 [i_2] = var_17;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_23 = min(var_6, ((var_4 ? (((arr_8 [i_1] [i_1] [i_1]) ? 1023881925 : (arr_7 [i_1] [i_1]))) : var_11)));
            var_24 = (min(((2966812837 ? 0 : 14445)), ((-(!var_4)))));
            arr_13 [i_1] [i_1] = var_13;
        }
        var_25 = 36283;
        arr_14 [i_1] = ((-((~(((arr_1 [i_1]) ? (arr_5 [i_1] [4]) : var_15))))));
    }
    var_26 = 1328154476;
    #pragma endscop
}
