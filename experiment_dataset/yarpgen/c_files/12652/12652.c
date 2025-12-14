/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (arr_5 [i_0] [i_1 - 1] [i_2]);
                    arr_8 [i_0] [11] [i_1] = (((arr_2 [i_0]) << (199 - 186)));
                    var_20 = ((~(max((arr_5 [i_1 + 2] [11] [i_1]), 251))));
                }
            }
        }
    }
    var_21 = var_15;
    var_22 = ((130 ? var_6 : (!var_13)));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_20 [i_3 + 2] [13] [i_5] [i_6] [i_7] = 1;
                                var_23 |= (arr_12 [i_3] [i_4] [i_5]);
                                arr_21 [1] [i_4] [i_5] [i_5] [7] [i_6] = (((-(((!(arr_5 [i_5] [i_6] [i_7])))))));
                                var_24 ^= (min(11259, 4920));
                                arr_22 [i_7] [i_6] [i_4] [i_4] = (arr_12 [i_3] [6] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((((min((arr_11 [i_5]), -var_15))) ? (arr_16 [i_3] [i_8] [i_9]) : (((!((max(var_3, var_5)))))))))));
                                arr_29 [i_9] [i_9] [i_3 - 1] [i_9] [i_3 - 1] = ((((min((!var_6), (((arr_5 [12] [i_5] [i_4]) ? var_13 : 0))))) ? (!2355) : (max((min((arr_17 [i_3] [i_4] [i_5] [i_9]), var_4)), (!1)))));
                                var_26 = ((var_7 ? (arr_26 [i_3] [i_4] [i_5] [i_3 + 1] [i_9]) : (max((arr_26 [10] [i_4] [i_3] [i_3 + 2] [i_4]), (arr_26 [i_9] [i_5] [i_5] [i_3 + 3] [11])))));
                                arr_30 [i_9] [i_9] [i_8] [i_5] [i_4] [i_9] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (~var_15);
    #pragma endscop
}
