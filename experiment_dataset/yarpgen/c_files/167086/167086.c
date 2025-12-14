/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_11);
    var_15 = ((var_0 ? 0 : (min(201326592, -1418661419))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (max(var_16, (((~(1418661415 | 1))))));
        arr_2 [i_0] [i_0] = 4294967295;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = -121;
        arr_6 [i_1] = ((var_3 ? var_6 : (!var_13)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (max(var_17, (var_10 <= 1)));
        var_18 = var_7;
        var_19 = var_7;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_15 [i_3] [i_3] [i_3] = -6271626224820996809;
            var_20 *= (!var_0);
        }
        arr_16 [i_3] = (112 ? (max(0, 3590669162570545690)) : ((((65535 <= (-127 - 1))))));
        arr_17 [i_3] [i_3] = (max(((((var_11 ? var_2 : 127)) | 1)), ((var_5 ? (arr_11 [i_3]) : var_7))));
        arr_18 [i_3] [i_3] = (max((((!1) % -var_3)), ((max((var_11 <= 17179869120), (var_13 <= var_5))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_21 = (max(var_21, ((min((((var_7 | var_7) | (min(2938468188415339376, var_3)))), (~-1))))));
        var_22 *= var_6;
    }
    var_23 = ((((min(2185624467, 1))) ? ((-((var_0 ? var_8 : var_0)))) : var_1));
    #pragma endscop
}
