/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 += (8589934591 - 18);
                var_13 += ((18 ? 4294967278 : -6752605490578384222));
                arr_6 [i_0] = (!-1100986454);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_14 = ((!(((15819098023404182072 || 6) && (691127297554760566 && 2)))));
                    arr_14 [i_2] = (min((arr_2 [i_2] [i_3 - 3] [i_2]), (((var_7 < ((var_0 ? var_7 : var_5)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                var_15 = (max((((-31 > (arr_7 [i_6 - 1] [i_6 + 2])))), ((var_0 - (arr_7 [i_6 + 2] [i_6])))));
                var_16 = 12695437297964318495;
                arr_21 [i_5] [i_6] = ((((((arr_15 [i_6 - 1]) * var_6))) - (min((arr_15 [i_6 + 1]), var_2))));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_26 [i_5] = var_7;
                    var_17 = var_3;
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_18 = (min(-8589934581, 12695437297964318494));

                    for (int i_9 = 4; i_9 < 15;i_9 += 1)
                    {
                        var_19 = var_9;

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_20 = (max(var_20, (((127 & (min((min(var_2, (arr_32 [i_10] [0] [i_6]))), 13337)))))));
                            var_21 = (min(-8059507692418792398, 32));
                            var_22 = (max(var_8, (!8589934584)));
                            arr_35 [i_10] [i_10] [i_9] [i_9] [i_8] [i_6] [i_10] = ((min(16143260952177378618, var_10)));
                            arr_36 [i_5] [14] [i_10] [1] = ((!((!(arr_9 [i_6 + 2] [i_10] [i_6 - 1])))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_23 *= (((arr_30 [i_11] [i_6] [i_8] [i_6 + 2] [i_6] [i_11]) ? ((min((arr_25 [i_6 + 1] [i_6 + 2]), (arr_27 [i_6] [i_6 - 1] [i_8])))) : (((arr_27 [i_5] [i_6 - 1] [i_8]) ? (arr_25 [i_6 - 1] [i_6 - 1]) : (arr_30 [i_5] [i_5] [i_8] [i_6 - 1] [i_5] [i_5])))));
                        var_24 = (max(var_11, ((((var_3 ? var_7 : var_5)) - var_10))));
                    }
                }
            }
        }
    }
    var_25 = var_8;
    var_26 = (min(var_26, (((((((var_8 ? var_3 : 55)))) ? (((!(!var_6)))) : ((((1 <= 179) < -8589934568))))))));
    #pragma endscop
}
