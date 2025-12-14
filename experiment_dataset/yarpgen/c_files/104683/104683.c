/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 0;
    var_18 = -4441234780578583711;
    var_19 = 4441234780578583711;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((arr_1 [i_0]) - 96);
        var_20 += (((arr_0 [i_0]) && (arr_1 [16])));
        var_21 *= -9084144239357561994;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((10197278210331211498 ? var_12 : (((arr_7 [16]) ? ((-4441234780578583703 ? (arr_7 [19]) : (arr_5 [5]))) : (~var_9)))));
        var_22 = (min(var_22, ((((((arr_6 [i_1]) - ((var_15 ? (-9223372036854775807 - 1) : var_7)))) - (arr_7 [i_1]))))));
        var_23 = (49183 ? (((((15 ? (arr_7 [i_1]) : var_12))) / var_7)) : (((~((-131072 ? 0 : -131051))))));
    }
    #pragma endscop
}
