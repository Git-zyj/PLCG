/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2 - 2] [i_2] = ((max((arr_5 [i_0]), (arr_6 [i_0] [8] [i_2] [i_0]))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_15 [i_1] [i_1] [i_3] = (min((((arr_4 [i_0] [i_2 - 3] [i_3 + 1]) + 9002801208229888)), (~-114)));
                                arr_16 [5] [i_3 - 3] [i_0] [i_1] [i_0] = var_13;
                                arr_17 [1] [i_4] = ((!((max((arr_3 [4] [i_1] [i_3 + 2]), (arr_9 [i_0] [i_2 - 4] [i_3] [4] [i_2 - 4] [i_3 + 1]))))));
                            }
                        }
                    }
                }
                var_17 = arr_8 [i_1] [i_0];
            }
        }
    }
    var_18 -= (((((1 ? var_16 : (var_13 <= var_3)))) <= var_1));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            {
                var_19 = (((~((var_6 ? var_13 : -2387)))));
                arr_23 [i_5] [i_6] = ((((arr_22 [i_5 + 2] [i_6 - 1]) - (arr_22 [i_5 + 2] [i_6 - 1]))));
                var_20 = ((max((((var_3 ? (arr_19 [i_5]) : (arr_22 [i_5] [i_5])))), (max(var_2, 3349176006)))));
                var_21 ^= ((var_10 ? ((((!((max((arr_21 [0] [1] [0]), (arr_18 [i_5] [i_6 - 2])))))))) : ((var_7 ? (arr_18 [i_5] [i_6 + 1]) : (max(var_1, var_5))))));
            }
        }
    }
    var_22 -= var_16;
    #pragma endscop
}
