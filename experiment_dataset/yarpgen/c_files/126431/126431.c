/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = -var_2;
        var_13 = ((var_7 ? (min((arr_1 [i_0]), (var_7 ^ var_10))) : (((~((var_7 << (17916652219893825255 - 17916652219893825240))))))));
    }
    var_14 -= var_0;

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = var_2;

        for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_16 = ((!((max(-31376, ((1 ? 4287954556272238216 : -19719)))))));
            arr_8 [i_1] = var_9;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_1] [i_4] [i_5] = (min((max((arr_17 [i_1] [i_4 + 2] [i_1] [i_1] [15]), var_10)), (!4287954556272238216)));
                            var_17 *= (arr_10 [i_1]);
                            var_18 = (min(4287954556272238216, 14158789517437313404));
                        }
                    }
                }
            }
            arr_19 [i_1] [i_1] = var_8;
            arr_20 [i_1] = (min(var_6, var_6));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_19 = (~var_11);
            var_20 = (arr_10 [i_1]);
            var_21 &= (((((-13 ? var_0 : var_9))) ? (arr_15 [i_1] [0] [i_6] [0]) : var_11));
            var_22 = ((var_7 >> (var_11 - 103)));
        }
        var_23 -= min(var_11, 0);
        arr_23 [12] [i_1] &= (~(41 || 22));
    }
    var_24 = (min(var_24, var_11));
    var_25 = (((((~var_3) || var_1)) ? (max((max(var_3, var_1)), 17059274254420676250)) : var_6));
    #pragma endscop
}
