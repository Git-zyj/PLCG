/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_13 = (max(var_13, 115));
            var_14 = (((((arr_0 [i_0]) ? (arr_3 [11] [i_0] [11]) : -110)) * (arr_1 [i_1 - 1] [i_1 - 2])));
            arr_4 [6] = (-1446692391 ? (((arr_3 [i_0] [i_1] [i_1]) ? var_3 : (arr_3 [i_0] [1] [i_1 - 1]))) : ((var_4 ? (-32767 - 1) : var_3)));
            var_15 = (max(var_15, (arr_3 [i_1] [i_0] [i_0])));
        }
        var_16 = (max(var_16, (arr_0 [i_0])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_17 = (min(var_17, var_11));
        var_18 = (min(var_18, (min((arr_5 [i_2] [i_2]), (min((max((arr_6 [i_2]), 1797674736)), (((arr_5 [i_2] [8]) % (arr_5 [i_2] [i_2])))))))));
        arr_7 [i_2] = (max((((var_12 <= (var_5 != 0)))), (max(113, (((arr_5 [i_2] [i_2]) ? 1979617736 : var_12))))));
        var_19 = (min(var_19, -1797674742));
    }
    var_20 = ((((var_3 * (19619 > -1)))) ? var_4 : (max(-112, (-13 > 3))));
    var_21 = var_1;
    var_22 = var_7;
    #pragma endscop
}
