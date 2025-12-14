/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(1379348497, (max(0, 1))));
    var_16 = ((122 - ((((var_10 ? var_4 : var_11))))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((((max(((~(arr_12 [14]))), (arr_3 [i_0] [i_0] [i_3])))) * ((2872801911 ? (min(56, 6806499443870413545)) : 64))));
                                arr_13 [1] [i_3] [i_3] [1] [i_4 - 1] = (max(18044, 1789948050));
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_4] = ((((((min(var_6, (arr_10 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))) ? (arr_11 [i_0] [i_1] [i_4 + 1]) : -195)) >> ((var_5 >> (((arr_9 [i_4 + 1] [10] [i_4] [i_4 + 1] [i_4] [i_4]) - 2699277497686859680))))));
                                var_19 *= var_6;
                                arr_15 [1] [16] [i_2] [i_3] [9] = ((((min((((arr_9 [i_0] [i_1] [10] [i_0] [i_0] [16]) | (arr_0 [16] [i_1]))), (((var_13 ? (arr_8 [21] [i_3] [i_3] [21]) : var_4)))))) ? (min(var_8, ((((arr_2 [i_0]) ? (arr_3 [i_1] [i_3] [i_1]) : var_4))))) : ((min((arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2]), ((((arr_4 [i_0] [i_0] [i_0] [i_3]) + (arr_4 [1] [i_3] [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
                var_20 = (max(((min((arr_12 [i_1]), (arr_2 [i_1])))), ((0 ? 1 : -1))));
                arr_16 [i_0] [5] = 16;
                var_21 = ((min(var_3, var_0)));
            }
        }
    }
    #pragma endscop
}
