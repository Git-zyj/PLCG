/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_2] [i_2] [i_0] = (max(55938, 1));
                            arr_10 [i_0] [i_2] [i_2] [i_2] = var_4;
                            arr_11 [i_2] [i_1] [i_2] = ((!((min((max((arr_8 [i_0] [i_0] [i_1] [i_1] [i_3]), 1)), (((!(-2147483647 - 1)))))))));
                            arr_12 [i_0] [6] [i_1] [1] [12] [2] = var_9;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_1] = 56724;
                    arr_17 [i_4] [i_1] [i_1] [16] = ((!(!1)));
                    arr_18 [i_0] [i_1] [i_0] = ((!((((1 + -6155802988816077978) ? (((arr_14 [i_1] [i_1] [i_4]) - (arr_15 [i_4] [i_1] [i_0]))) : ((((arr_7 [i_0] [17] [i_0] [i_0]) ? 15578 : 0))))))));
                    arr_19 [i_1] = -var_7;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_24 [20] [i_1] = (((arr_3 [i_0]) ^ (arr_3 [i_5])));
                    arr_25 [i_0] [i_5] [i_5] = (((arr_3 [3]) ? var_0 : ((-2147483647 ? var_8 : 16))));
                    arr_26 [i_1] [i_1] [i_1] = (((arr_21 [i_5] [i_1] [i_5]) ? (-32767 - 1) : (-9223372036854775807 - 1)));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] = ((var_0 ? (arr_5 [7] [i_1] [i_8]) : (arr_2 [i_1])));
                                arr_37 [i_6] [i_6] [i_6] [i_6] = (~-2147483646);
                                arr_38 [i_7] [i_8] [i_8] [i_7] [i_8] = (arr_35 [i_0] [i_1] [i_6] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 4]);
                            }
                        }
                    }
                    arr_39 [i_1] = 15864041052621413859;
                    arr_40 [i_6] [6] [2] [2] = (((arr_30 [i_0] [9] [i_1] [i_1]) ? var_0 : -1737328986));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_46 [i_0] [i_1] [i_6] [i_9] [i_0] = 0;
                                arr_47 [i_1] [1] [i_0] [16] [12] [1] = (((arr_5 [i_9] [i_1] [7]) ? var_1 : (arr_5 [i_1] [i_6] [i_10])));
                                arr_48 [i_0] [i_1] [1] [i_1] = (arr_20 [i_0] [i_1]);
                                arr_49 [11] [i_1] [11] [i_10] [i_10] [i_10] = (((((1 + var_3) + 9223372036854775807)) << (1 - 1)));
                                arr_50 [i_1] = (!191);
                            }
                        }
                    }
                }
                arr_51 [i_1] [10] [i_1] = ((!(((arr_45 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]) == ((129 ? var_3 : var_8))))));
            }
        }
    }
    #pragma endscop
}
