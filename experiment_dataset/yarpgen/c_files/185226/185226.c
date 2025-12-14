/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((3842195001 ? var_17 : var_10))) ? ((min(1, 35706))) : ((min(var_2, 35706)))))) ? var_4 : (((((var_7 ? 2436755063 : 1))) ? 21 : (((min(0, 47874))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_5;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_20 = var_17;
            var_21 -= ((-var_15 ? (!19363) : (26723 | 1858)));
        }
        arr_6 [i_0] [i_0] = ((min((min(56608, var_4)), var_9)));
        var_22 = (arr_5 [i_0 + 1] [i_0 + 2]);
        var_23 = ((-((((!(arr_0 [i_0] [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (var_1 ? (((arr_7 [i_2]) ? (arr_8 [i_2] [i_2]) : var_10)) : ((((var_16 ? (arr_8 [i_2] [i_2]) : (arr_7 [13]))) / (((max(251, var_2)))))));
        var_24 = ((arr_8 [i_2] [i_2]) + (((arr_7 [i_2]) ? (arr_8 [i_2] [i_2]) : ((var_0 ? (arr_8 [i_2] [i_2]) : (arr_8 [7] [i_2]))))));
        var_25 = var_11;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_26 = var_18;
        arr_12 [i_3] = ((!var_13) * (14488993215465900052 == 2714));
    }
    var_27 = (((max((var_2 * var_8), var_6)) << (((max((var_1 * var_16), var_4)) - 320))));
    #pragma endscop
}
