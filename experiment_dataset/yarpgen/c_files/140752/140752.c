/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 7743033532604862134;
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += (34 ? 10080712403806879436 : 8552130378178565385);
                            arr_10 [i_1] = -var_8;
                            var_14 = ((var_2 ? 1 : (min((arr_5 [i_0 + 1] [i_0] [i_3 - 1]), ((max((arr_1 [i_0]), var_5)))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((var_6 ? 14150 : ((var_2 ? 1 : 83))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] = (min(59, (min(-99, 8552130378178565385))));
                        }
                    }
                }
                var_15 -= (max(174, (min(1, (arr_8 [i_0 + 4])))));
                var_16 = ((34 ? 7826513126280706956 : -51385));
                arr_13 [i_1] [i_0] = ((51385 ? ((min((arr_8 [i_0 + 1]), ((var_10 ? 35 : -65))))) : (((var_3 | var_9) - (((var_4 ? var_8 : var_1)))))));
                var_17 = (~119);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_18 = 0;

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_19 = (max(var_19, (((-99 < (arr_21 [i_6] [i_5] [i_5 + 1]))))));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_20 += (arr_1 [i_4]);
                    arr_25 [i_7] [i_6] [i_5] [i_4] = 51376;
                    arr_26 [i_4] [i_4] [i_4] [i_4] = (-2147483647 - 1);
                    arr_27 [i_4] [i_4] [i_5] [i_4] [i_7] [i_7] = ((var_3 ? 1760849952 : 57));
                }
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                arr_30 [i_4] [i_4] [i_4] = -94;
                arr_31 [i_4] [i_5] [i_8] = (((arr_15 [i_4] [i_5 - 2]) ? var_7 : (arr_15 [i_4] [i_5 + 4])));
                var_21 = ((((arr_29 [i_4] [i_5] [i_4]) ? var_0 : var_0)));
                arr_32 [i_8] [i_4] [i_4] = ((!(arr_21 [i_5 + 2] [i_8] [i_8 - 2])));
                arr_33 [i_8] [i_4] [i_4] = (((arr_6 [i_8 - 1] [i_8 - 2] [i_5 + 2]) ? -25 : (arr_6 [i_8 - 1] [i_8 - 2] [i_5 + 2])));
            }
            var_22 = (max(var_22, 99));
        }
        arr_34 [i_4] = var_6;
    }
    #pragma endscop
}
