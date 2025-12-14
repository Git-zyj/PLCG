/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = 565331734;
                            arr_10 [i_0] [1] [11] [14] [1] [i_2] = 2715;
                        }
                    }
                }
                var_12 |= (min(((min(var_4, (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1])))), (((arr_1 [10]) ? var_5 : (arr_1 [10])))));
                var_13 = ((((min((((arr_0 [i_0] [i_1 - 2]) ? (arr_5 [i_1] [1]) : -10916)), (((arr_0 [i_0] [i_1]) + 1))))) ? 120 : 62820));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_14 = ((((min((((!(arr_0 [1] [i_1 + 1])))), (min(var_3, 32767))))) ? var_1 : (!var_2)));
                                var_15 = (var_3 ? (max(var_8, (arr_16 [i_0] [1] [i_4] [i_5]))) : var_1);
                            }
                        }
                    }
                }
                arr_20 [i_1 - 2] [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_1 - 2] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_25 [i_7] = 18724;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_28 [i_7] [i_7] [i_8] [i_7] = ((arr_16 [i_9] [i_9] [i_8] [1]) | (arr_8 [i_8] [i_8]));
                    var_16 = ((((((-32767 - 1) ? var_2 : 2601208426420012924))) ? 1 : ((var_8 ? 3727014959 : 1))));
                }
                arr_29 [i_7] [i_8] = min(4095, ((((2601208426420012931 ? 1 : (arr_24 [i_7]))))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
