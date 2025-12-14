/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = var_13;
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [i_0] = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_7 ? (-1687950820 - -1687950820) : var_5));
                                arr_21 [i_0] [i_0] [i_2] [i_1] = arr_14 [i_0] [i_1] [i_2] [i_2];
                                arr_22 [i_5] [i_0] [i_2] [i_5] [i_6] = (max(var_11, ((((((arr_17 [i_0] [i_1]) ? 1369252279 : (arr_7 [i_0] [i_1] [i_2] [i_0])))) ? ((max(var_3, var_0))) : (max(241, var_13))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (((((var_0 ? var_14 : (arr_17 [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_18 = (max((((var_13 ? (max((arr_3 [i_0] [i_1] [i_0]), var_2)) : (((max(0, 1))))))), -7));
                                arr_27 [i_0] [i_7] [i_2] [i_1] [i_1] [i_0] = (((((((15243 ? (arr_23 [i_0] [i_1] [i_7] [i_8]) : var_3))) && (((-1687950820 + (arr_1 [i_1])))))) ? var_7 : (max((arr_14 [i_2 + 1] [i_0] [i_0 - 1] [i_0]), var_6))));
                                arr_28 [i_0] [i_1] [i_2] [i_0] [i_8] = (((arr_8 [i_0 - 1]) | ((198 ? 65535 : (arr_8 [i_0 - 1])))));
                                var_19 = (max(var_19, ((max((((var_15 ? (arr_14 [i_8] [i_8] [i_7 - 3] [i_0 - 1]) : (arr_14 [i_8] [i_8] [i_7 - 3] [i_0 - 1])))), (arr_26 [i_7 - 1] [i_0 - 1]))))));
                                arr_29 [i_0] [i_1] [i_0] [i_7] [i_8] = (max((arr_19 [i_0] [i_1] [i_2] [i_7] [i_0]), (max(((var_12 ? var_9 : (arr_0 [i_7]))), var_0))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
