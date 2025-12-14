/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 - 1] [1] = ((+(((arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]) ? 14 : (arr_3 [1])))));
                                arr_14 [i_4] [i_3 + 1] [i_2] [i_1] [i_0 + 1] = ((-(0 - 9223372036854775789)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = ((((((min(1, (arr_0 [12] [i_1])))))) | ((0 ? var_14 : (arr_16 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])))));
                        arr_18 [i_0 - 1] [i_1] [i_2] [1] [1] [15] = (!1);
                        var_17 = (8 ? (max(-1, -var_12)) : ((~(((!(arr_2 [i_2] [i_5])))))));
                        arr_19 [i_2] = (((arr_16 [i_0 + 2] [i_1] [1] [i_5]) ? (((var_7 ? (arr_9 [1]) : (arr_7 [i_0 - 1] [10])))) : (((((0 ? var_2 : 0))) ? var_9 : var_1))));
                        var_18 = (max(((((arr_8 [i_2] [1] [1] [i_2] [i_2] [i_2]) & (arr_6 [12] [i_1] [i_1] [i_1])))), 303348692));
                    }
                    var_19 = (((((~(arr_2 [i_0 + 1] [i_0 + 1])))) ? -85 : ((-(arr_2 [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
