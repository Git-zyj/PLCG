/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 18158513697557839872;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] [i_0] = var_7;
                                var_19 = ((48 ? (((((arr_6 [i_2] [i_1 - 1] [i_1]) || 55630)) ? (!var_1) : (((arr_12 [i_0] [i_2] [i_2] [i_3 - 1] [i_4]) / -856724527)))) : var_3));
                            }
                        }
                    }
                }
                var_20 = -17;
                arr_14 [i_0] = ((-(((!(arr_2 [9] [1]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = ((((((arr_20 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? (arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]) : var_1))) ? (((arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) ? (arr_20 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : -89)) : ((((arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) || (arr_20 [1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))))));
                                var_22 = ((var_17 >= (((max((arr_19 [i_1 - 1] [16] [i_0] [i_0] [i_0]), var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_23 = (((var_8 - -126) && 33523));
                arr_28 [i_8] [i_9] = ((var_7 <= ((((arr_22 [i_8]) ? (arr_6 [i_9] [i_8] [i_9]) : -89)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_35 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = (min((((arr_11 [i_8]) ? (arr_34 [i_11 + 1] [i_8] [i_9] [i_8]) : (arr_3 [9] [9]))), (arr_10 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 2])));
                            arr_36 [i_9] [i_9] [i_10] [i_11] = ((((+(((arr_34 [i_8] [i_8] [i_9] [i_8]) >> (var_0 - 50))))) * (((58137 ^ 0) ? (((arr_19 [i_9] [15] [7] [i_9] [i_8]) >> (var_16 - 53334))) : 20))));

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_24 = 66;
                                var_25 = (((arr_12 [i_11 - 1] [i_9] [i_11 - 1] [13] [i_11]) ? (arr_20 [i_11 - 1] [i_11] [i_11 + 2] [i_11] [i_11 + 2] [i_11]) : (arr_20 [i_11 - 1] [i_11] [i_12] [i_12] [2] [i_12])));
                                arr_39 [i_8] [i_9] [i_9] [i_10] [i_11 + 2] [i_12] = 4088;
                            }
                            arr_40 [i_9] = 2625187110;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
