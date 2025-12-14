/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (((var_15 + (min(var_2, 3389038053378800754)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((138 ? var_0 : var_4))) ? 3376 : var_5)) > ((((((var_8 ? var_15 : -23727))) ? var_8 : var_4)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = ((23723 ? 9223372036854775792 : -1));
            arr_7 [i_1] [i_1] [i_0] = 292204601;
            arr_8 [i_1] = var_6;
        }
        var_19 = min(-9223372036854775806, 9223372036854775787);
    }
    var_20 = (((((var_15 ? (((var_2 ? 7611682417596246003 : var_9))) : var_7))) ? (((max(var_0, 86)))) : var_1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (var_9 ? (!var_4) : ((min(255, var_11))));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_22 = (max((arr_0 [i_3]), var_12));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_3] [i_4] [i_3] [i_3] [i_2] = (((~var_5) <= -35));
                                arr_23 [i_3] = (1 > 1);
                                arr_24 [i_6] [i_4] [i_4] [i_3] [i_4] [8] [9] = (max((((var_8 ? 23715 : (~-7758)))), -13286376699529844729));
                                var_23 = ((((max(var_9, (max(var_8, var_5))))) / (var_4 & -28322)));
                                var_24 = (((var_2 ? (max(var_4, var_2) : var_12))));
                            }
                        }
                    }
                    arr_25 [i_2] [i_3] [i_2] = (((~95) ? (((0 == var_12) ? ((var_13 ? 1722700514 : 9223372036854775787)) : var_5)) : var_4));
                    var_25 = ((1 ? 40 : (max(var_2, (((var_11 ? 1414698895 : 255)))))));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_28 [i_2] [i_3] [i_7] [i_3] = ((((var_15 <= (arr_14 [i_3] [i_3]))) ? (((arr_14 [i_3] [i_3]) ? var_5 : var_15)) : 243));
                    arr_29 [i_2] [i_3] [i_7] [i_3] = var_11;
                    var_26 = 22996;
                    arr_30 [i_3] = max((((var_6 ? var_9 : 1))), ((var_14 ? var_12 : var_4)));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_33 [i_2] [i_3] [i_7] [i_3] [i_8] = ((var_14 >> (var_0 + 7217179311983092171)));
                        var_27 = (!9223372036854775795);
                        arr_34 [8] [i_3] [i_3] [i_7] [8] [8] = var_13;
                    }
                }
            }
        }
    }
    #pragma endscop
}
