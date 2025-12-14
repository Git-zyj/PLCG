/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [8] = ((0 ? (arr_3 [i_3]) : (((10 ? (((var_11 > (arr_7 [i_4] [i_4] [i_4])))) : ((-(arr_1 [i_1] [23]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] = -20;
                                var_12 = (max((((2024586398 || 2558779224) || (((var_11 ? (arr_5 [i_0] [i_0] [i_1]) : -34))))), ((250 || ((((arr_3 [i_0]) ? (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]) : (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_2] [i_3] [i_4 + 1]))))))));
                            }
                        }
                    }
                    arr_16 [i_0] = (((min(6, 18446744073709551612)) >> ((((~(arr_0 [i_0 + 2]))) - 10678))));
                }
            }
        }
    }
    var_13 = (max(((!(250 < var_4))), (((var_5 == var_9) && var_7))));
    var_14 = (((((var_9 ? (((-32676 ? 13772 : var_11))) : ((var_0 ? 34 : var_5))))) ? var_2 : (max(30, ((var_4 ? 416865030 : var_1))))));
    #pragma endscop
}
