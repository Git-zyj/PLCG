/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max((max(1763885710, 2468327248)), 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((var_2 >= -5) | ((var_2 ? 1763885705 : var_11)))) + (max(((var_13 ? var_5 : (arr_3 [i_1]))), (0 <= -8)))));
                arr_7 [i_0] [i_0] = -4294967291;
                arr_8 [i_0] = var_14;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_3] [i_2] = min(5, var_13);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_6] [i_2] [i_2] [i_6] = max(((~(max(var_15, var_14)))), (2157028338 == 2531081582));
                                arr_24 [i_2] [i_2] [1] [i_4] [i_2] [i_4] [i_6] = 1;
                            }
                        }
                    }
                    arr_25 [i_2] [i_3] [i_4] [i_3] = (((max((min(var_14, 1763885697)), (((var_6 ? var_10 : var_11))))) * 0));
                    arr_26 [i_3] [i_2] [i_2] [9] = var_10;
                    arr_27 [i_4] = ((var_0 & (!var_11)));
                }
            }
        }
    }
    #pragma endscop
}
