/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (var_6 ^ var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (((min((arr_3 [i_0] [i_0]), (max((arr_3 [i_0] [i_1]), var_12)))) - 1));
                            var_17 = (arr_3 [6] [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] = (max(-5771237110912405264, 2110891924598766842));
                                arr_20 [i_0] = (arr_13 [i_1] [i_4] [i_5 + 1] [i_6]);
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_6] = ((-7466024367504249987 ? -21 : 1150713530));
                                arr_22 [i_4] = -63;
                                var_18 += (arr_6 [i_6] [i_4] [i_4] [i_1] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_19 = (arr_30 [i_0] [i_1] [11] [i_8]);
                                var_20 = (((((-(min((arr_25 [i_0] [i_0] [1] [i_0]), 63))))) ? (-52 + 14) : (arr_24 [i_9] [i_1] [i_1])));
                                var_21 = 1;
                                var_22 = (arr_30 [i_8] [i_8] [i_8] [i_8]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_23 = (max(1830, ((9284424115672057067 ? ((1 ? var_13 : 1)) : 459990499))));
                            var_24 = (arr_23 [i_0] [i_0]);
                            var_25 = (max((arr_29 [7] [i_1] [7] [i_1] [i_10] [i_11]), ((((arr_9 [i_0] [i_0] [i_0] [i_0]) + (arr_9 [i_0] [i_0] [2] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_3;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            {
                arr_41 [i_12] = ((-(((~-2110891924598766836) ? ((((1809 || (arr_5 [i_12] [i_12] [i_12] [i_12]))))) : (arr_17 [i_12] [i_12] [i_12] [i_12] [i_12])))));
                var_27 += (arr_36 [i_12] [i_12] [i_12] [i_13] [i_12] [i_13]);
            }
        }
    }
    #pragma endscop
}
