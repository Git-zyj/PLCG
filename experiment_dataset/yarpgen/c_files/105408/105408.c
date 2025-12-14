/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [17] [i_2] = (((98 ? 8589934591 : (arr_8 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1]))) ^ (((~(arr_2 [i_2 + 2])))));
                                arr_13 [i_3] [3] [i_3] [i_0] [i_3] = (min((max(1, 8589934591)), 2742791446671222756));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_1] [i_0] = var_6;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = (min(((-(arr_10 [i_2 + 2] [i_2 + 1] [i_6] [11] [i_6]))), ((min((arr_10 [i_0] [i_2 + 2] [i_6] [i_6] [i_6]), (arr_10 [i_1] [i_2 + 2] [i_6 - 1] [i_6] [i_6]))))));
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] = ((min(((max(var_4, var_9))), (((arr_4 [i_2] [i_2]) / var_13)))));
                                arr_23 [i_5] [i_1] [i_2] = (!var_15);
                            }
                        }
                    }
                    arr_24 [i_0] [7] = max((max(var_0, var_1)), (arr_14 [i_2 + 2] [i_2 + 2] [i_2 - 1]));
                    arr_25 [i_0] [i_1] [i_0] = ((min(83, var_1)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_34 [i_8] [i_8] [i_9] = (8589934597 / 9223372036854775807);
                    arr_35 [i_9] [i_8] [i_8] [i_8] = 78;
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = var_1;
    var_21 = ((((((((min(var_1, -85)))) / var_7))) ? 67 : 83));
    #pragma endscop
}
