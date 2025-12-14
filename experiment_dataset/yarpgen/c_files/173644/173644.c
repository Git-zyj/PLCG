/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((var_8 / (arr_2 [i_0 - 4] [i_0])));
                            var_17 = var_4;
                            var_18 = var_1;
                        }
                    }
                }
                var_19 = (max(var_5, (max(var_6, (arr_8 [i_0 - 4] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = (((!var_5) ? var_2 : (!var_8)));
                            arr_16 [i_0] = (((((((((arr_3 [i_0] [i_5]) ^ var_14))) ? (47493 <= var_2) : (var_7 ^ 856)))) ? (arr_11 [i_1] [i_4] [i_5]) : (((~(arr_10 [i_0] [i_0 - 3] [i_0] [i_0 - 4]))))));
                        }
                    }
                }
                var_21 = (((var_9 + (64 & var_7))));
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_22 = ((((max(((var_6 ? var_8 : (arr_6 [i_1] [i_6] [i_7] [i_8]))), 18446744073709551615))) ? ((1 ? (max(var_9, (arr_0 [i_1] [i_6]))) : (arr_1 [i_0]))) : var_3));
                                arr_25 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8] [i_8] = (max(((var_11 ? (arr_5 [i_0 + 1] [i_6 + 1] [4]) : (arr_5 [i_0 - 1] [i_6 + 3] [14]))), (min(var_4, (arr_5 [i_0 + 1] [i_6 - 2] [5])))));
                                var_23 = (arr_6 [i_8] [i_7] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
