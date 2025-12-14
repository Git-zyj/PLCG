/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 = (-1224414498376004896 ? 0 : 5212396316781009260);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = var_6;
                                var_14 = (max(((((arr_5 [i_4] [i_2] [17] [i_0]) ? (arr_14 [i_3 + 1] [i_1] [i_0]) : ((max(var_11, 12090)))))), ((40590 ? -5212396316781009260 : 5212396316781009260))));
                                var_15 = (min(var_15, (((((!(arr_5 [i_0] [i_1] [17] [i_4]))) && (((+(((arr_8 [i_0] [i_0] [i_3] [i_4]) ? 16 : var_10))))))))));
                            }
                        }
                    }
                    arr_16 [5] [5] &= (max(((min(var_5, var_6))), (((min(3773190382, var_11))))));
                    arr_17 [i_1] = (((arr_7 [i_0] [2] [i_0] [9]) ? 5212396316781009260 : (arr_5 [2] [i_1] [i_0] [i_2])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_16 = (max(var_16, (arr_4 [i_5 - 1] [i_1] [14])));
                    var_17 = var_10;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_18 = (((16272880724774494110 ? -5212396316781009260 : -16)));
                        arr_22 [i_6] [i_1] = (~var_11);
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_25 [i_7] [20] [i_0] = (arr_18 [i_0] [i_0]);
                    var_19 = 268435455;

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_20 += min((((min(1, (arr_26 [i_7] [i_0]))))), (max(-32762, var_6)));
                        var_21 = ((!(((~(arr_21 [8] [i_1] [i_8] [i_1]))))));
                        var_22 = (max(1, -5212396316781009272));
                        arr_28 [i_8] [13] [i_1] [1] = ((~((+((min((arr_10 [i_8] [i_8] [i_7] [i_1] [i_8]), (arr_20 [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                }
                arr_29 [i_1] [i_1] [i_0] = 3627287948555564516;
                var_23 |= 94;
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_24 = ((-3861370215 ? ((((min(4294967287, -5212396316781009260))))) : ((min(-1, 1518535379)))));
                                var_25 = (arr_5 [i_11] [i_10] [i_1] [i_1]);
                                var_26 = ((!((max(((-(arr_10 [i_11] [i_1] [i_1] [i_1] [i_1]))), (arr_31 [i_11] [i_11] [i_11]))))));
                                var_27 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_6;
    #pragma endscop
}
