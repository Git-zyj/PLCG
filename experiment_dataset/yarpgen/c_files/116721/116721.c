/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_16 ? ((min(var_14, var_2))) : var_12)))));
    var_21 = (max((((((max(0, 0))) + var_2))), (min(var_16, ((max(var_6, var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [0] [i_0] [i_1] = var_18;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_0] = (((var_12 < (arr_12 [i_1 + 4] [20] [i_2] [i_3 + 1] [i_3]))));
                            var_22 = (max(var_22, ((((min(274877905920, -9)) * -0)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_23 = (min(var_23, (((((((~758269803) ? ((4093634052 ? -9 : 4093634052)) : 8))) ? ((max((arr_0 [16]), (~var_17)))) : var_19)))));
                    arr_18 [16] [i_1] [i_4] [19] = 26;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_25 [1] [i_1] [20] [20] [13] [i_6] [i_5] = -var_16;
                                arr_26 [i_5] [5] [1] [i_6] = (((max((arr_11 [1] [i_1] [19] [i_5] [14] [11]), var_12)) * 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_32 [i_8] [7] [18] [5] [i_1] [i_0] = -var_6;
                                var_24 = arr_21 [i_0] [10] [20] [i_4] [18] [18] [i_4];
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_25 |= ((((max(-8, (max(0, 557143320))))) + (((arr_21 [1] [i_1] [20] [6] [12] [i_9] [i_1]) ? (arr_1 [i_4]) : var_15))));
                        var_26 = var_5;
                        var_27 ^= ((-(min(var_10, (~var_3)))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_28 -= (min((arr_35 [20] [15] [1] [i_10]), ((var_3 ? var_15 : var_1))));
                        arr_38 [i_0] [17] [i_1] [16] [1] [6] = (max((arr_35 [i_0] [20] [4] [i_10]), var_11));
                    }
                }
                arr_39 [3] [i_1] [14] = (!2147483639);
                var_29 = (min(var_29, (((~((((((arr_1 [18]) ? (arr_33 [4]) : var_18))) ? -16 : ((var_1 ? var_6 : var_18)))))))));
            }
        }
    }
    #pragma endscop
}
