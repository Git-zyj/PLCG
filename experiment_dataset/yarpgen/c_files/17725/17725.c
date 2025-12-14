/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 *= ((var_5 * ((((var_5 ? var_8 : 65)) / ((min(-114, var_5)))))));
        var_11 = var_6;
        var_12 |= (+(max((var_3 + var_7), (var_3 / -13370))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_1 [i_1 - 1]);

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] = (~var_4);
            arr_9 [i_1] [i_1] = 191;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_13 = var_0;
            var_14 = (((arr_6 [i_1]) ? (arr_6 [i_1]) : var_4));
        }
        arr_13 [i_1] = ((+(((var_2 + 120) ? ((114 ? var_5 : 233)) : var_3))));
        arr_14 [i_1] = ((((max((var_5 + 0), (((arr_12 [17] [i_1 - 2]) / 172222106))))) && ((max(((min(var_1, var_6))), (max(var_5, -32334)))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 = (min(var_15, (((~(((var_0 && 61435066449554667) ? ((66 ? (arr_18 [7]) : 0)) : (1404375451 < 1404375451))))))));
        arr_19 [i_4] = ((((max(13105, 114))) < (((arr_12 [i_4] [i_4]) ? var_2 : var_4))));
        var_16 += (min((arr_3 [i_4] [i_4]), (((((arr_10 [11] [13] [i_4]) && (arr_7 [i_4]))) ? var_3 : ((((arr_15 [i_4] [i_4]) ? var_4 : var_4)))))));
    }
    var_17 = (max(var_17, (max((!var_0), var_9))));
    var_18 = -127;
    var_19 = ((190 ? var_2 : var_4));
    #pragma endscop
}
