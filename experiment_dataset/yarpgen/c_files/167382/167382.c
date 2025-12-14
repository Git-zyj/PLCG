/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~var_6) ? var_4 : (4700 / var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [16] [i_0] = var_9;
                arr_7 [1] [i_1] [i_1] = (((((arr_2 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : var_10)) * (min((((arr_0 [i_1 + 1]) ? var_8 : (arr_1 [7] [i_0]))), ((-(arr_0 [i_0])))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [5] [i_3] [i_2] = 60836;
                                var_15 = (((((((arr_15 [i_4] [i_1] [i_2] [i_1 + 1] [i_2]) / var_9)))) ? var_13 : (arr_13 [i_1])));
                                var_16 = (((arr_5 [i_0]) * ((~(arr_2 [19] [i_2] [i_4])))));
                                arr_19 [11] [11] [19] [11] [i_2] [i_1] [i_3 + 1] = (arr_12 [i_0] [14] [i_4]);
                            }
                        }
                    }
                    arr_20 [3] [i_2] = (arr_11 [i_2] [i_2] [0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (((!((min(var_3, 4682))))));
                                arr_28 [i_0] [i_1] [1] [i_5] [i_2] [i_6] = (((arr_22 [i_2]) ? ((((((arr_16 [i_0] [i_1] [i_5] [i_5] [i_5]) * (arr_12 [i_1] [i_5] [0]))) * (arr_25 [i_2] [i_2 - 1])))) : (min(var_1, var_3))));
                                var_18 = (~var_3);
                            }
                        }
                    }
                    arr_29 [i_2] [i_2] = ((((((var_8 * var_6) * (arr_15 [1] [i_1] [14] [i_1] [i_2])))) * (min((arr_9 [1] [1] [i_1 - 1] [i_2]), 200))));
                    arr_30 [i_2] [i_1] [i_2] = (-4504050096956018503 / -4915138039951780530);
                }
                arr_31 [i_0] = ((((min(var_1, (arr_26 [i_0] [14])))) * (arr_14 [1] [i_1 + 1] [i_1] [i_0] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
