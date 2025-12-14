/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 += ((!(arr_0 [i_0])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_18 *= (((arr_2 [i_0 - 1] [i_1 + 1]) ? 16352 : var_12));
                                var_19 &= var_0;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_1 + 1] [1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = (-4725269008905978741 + var_3);
                                arr_25 [i_6] [i_1] [i_0] [i_6] [i_7 + 1] [i_5] [i_0] = ((max(((29423 ? var_4 : 193)), ((max((arr_1 [i_7]), 101))))));
                                arr_26 [i_0] [i_1 + 1] [i_1 + 1] [i_7] [i_7] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_20 = var_2;
                        arr_35 [i_8] [2] [i_8] [i_11] [i_8] &= (min(var_3, (arr_31 [i_8 + 1])));
                    }
                }
            }
        }
        var_21 = var_8;
        arr_36 [i_8 - 2] = ((var_3 ? var_12 : 1136099612));
    }
    var_22 = var_13;
    var_23 = ((37440 > (var_6 / var_0)));
    #pragma endscop
}
