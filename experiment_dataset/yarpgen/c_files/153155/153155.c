/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((var_2 << (var_10 - 1041467887))), ((var_4 << (14 - 14)))))) ? (max(((max(-108, -108))), (min(4920350443409497272, var_10)))) : ((((1320421282846356519 <= (!18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((42 ? -4920350443409497302 : -34))) ? (max((max(48, 1320421282846356547)), (var_11 & var_13))) : ((max(((min(var_11, (arr_3 [i_0])))), 0))));
                var_19 |= ((!((max((((arr_2 [1] [i_0] [i_0]) / var_1)), (max(var_17, (arr_3 [2]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_4] [i_4] [i_2] [i_2] [i_2] [i_2] = ((-(max((((!(arr_5 [i_6 + 2] [4])))), (max(-1613980648748441252, var_14))))));
                                var_20 = (max((((((max((arr_9 [i_6 - 2] [i_3]), (arr_13 [i_2] [i_2]))))) ^ ((var_3 ? var_14 : (arr_8 [i_2] [i_3 - 1] [10]))))), (--104)));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((max((max((arr_8 [i_2] [5] [i_6]), (arr_10 [i_2] [i_4 - 2] [i_5] [i_6]))), ((((arr_15 [i_4 + 1] [i_4 + 1] [i_2] [i_5] [i_6] [14] [i_4 + 1]) ? var_15 : (arr_10 [i_2] [i_2] [i_2] [i_6 + 2]))))))) ? (min(-var_12, (max(var_1, (arr_16 [i_5 + 1] [i_3 - 1] [7] [i_5 + 1] [i_4] [i_3 - 1] [9]))))) : ((((var_10 != (min(var_9, var_0))))))));
                            }
                        }
                    }
                }
                arr_20 [i_2] [i_3] = (min((max((min(var_7, -1613980648748441252)), (max((arr_12 [i_2] [i_2] [i_2]), 1320421282846356494)))), (!var_14)));
                var_21 = (((((((max((arr_5 [i_2 + 2] [i_3]), (arr_9 [i_2] [15]))))) % (min(var_2, (arr_14 [i_2] [i_2] [18] [i_3]))))) / (((((arr_6 [i_2] [i_3]) ? var_6 : (arr_5 [i_3 - 1] [i_3]))) ^ (((arr_15 [i_2 - 1] [i_2] [i_2] [i_3] [i_2] [i_3] [i_3 - 1]) ? 1613980648748441252 : -7564636155290596533))))));
                var_22 = ((max(((max(var_14, -137258857))), (max((arr_13 [i_2] [i_2 - 1]), var_1)))) == ((-1613980648748441270 ? (0 <= 8016757238020092417) : (min(17, (arr_16 [i_2 + 1] [i_2] [i_2] [i_2] [3] [i_2 + 1] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
