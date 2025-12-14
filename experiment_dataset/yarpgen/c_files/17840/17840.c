/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = var_13;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1];
                                arr_11 [i_4] [i_4] [i_3] [13] [i_4] = (arr_5 [i_0]);
                                arr_12 [i_4 + 1] [i_4] [i_2] [i_4] [i_0] = (var_4 ? (((121 ? var_13 : var_7))) : (((var_9 ? (arr_7 [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_4 - 1]) : (arr_7 [i_3] [i_4] [i_3] [i_4 - 1] [i_4 - 1])))));
                                var_19 = (min(var_19, (((var_12 ? (arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4]) : (((arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4]) ? (arr_7 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4]) : (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [12]))))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (max(((-(arr_6 [i_0] [i_1] [i_1]))), (arr_6 [i_0] [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_20 ^= ((-(arr_10 [i_7] [i_6] [i_5] [i_1] [i_0])));
                                var_21 |= (min(((((~3442227645289705754) && ((max(var_0, (arr_18 [i_0] [i_1] [i_5] [2] [i_7]))))))), var_4));
                                var_22 = (((arr_10 [i_0] [i_1] [i_1] [i_6] [i_6]) && (~-117)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
