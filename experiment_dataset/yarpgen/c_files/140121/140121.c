/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_0) ? (((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_10)))) : ((min((arr_0 [i_0] [i_0]), 9755)))));
        arr_3 [i_0] [i_0] = ((((-(var_1 >> var_10))) | var_0));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (((arr_4 [i_0 - 2] [i_1] [i_0]) == (1 | 1)));
            arr_9 [i_0] = var_4;
        }
        var_16 = (max(var_16, (((~((~((-(arr_5 [8] [i_0]))))))))));
        var_17 = (max(var_17, (((arr_4 [0] [i_0] [0]) ? ((((arr_1 [i_0]) ? (((arr_7 [i_0]) ^ var_11)) : (((arr_0 [i_0] [2]) ^ var_11))))) : 8156041133984092041))));
    }
    var_18 = ((var_8 % var_12) ? (((~var_4) ? ((min(-1584552990, 210269444))) : var_3)) : (((var_0 ? (var_6 > var_1) : ((0 ? var_13 : 0))))));
    #pragma endscop
}
