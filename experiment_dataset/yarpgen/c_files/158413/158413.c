/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(274458293, 2966849143)) == (((-(var_1 && var_3))))));
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_15 ^= (arr_10 [i_0]);
                                arr_12 [14] [i_1] [i_1] [1] [i_1] [i_1] [i_1] = (((arr_5 [i_0] [i_1 - 4] [0] [i_3]) % ((max(185, (arr_3 [i_1 - 2] [i_1] [i_4 + 1]))))));
                                arr_13 [i_1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] = (!59);
                                var_16 = (((((((arr_0 [i_0]) + (arr_11 [i_2] [i_1] [i_2] [i_1] [i_1])))) ? ((((arr_9 [i_4] [i_1] [i_2] [i_3] [i_1]) ? (arr_7 [i_0] [13] [i_0] [i_3]) : var_0))) : (arr_10 [i_3]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [7] [i_2 + 1] = (((var_2 ? 32 : -8484857959011631123)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = var_12;
                                var_17 = (((arr_2 [i_1 - 2] [i_1 - 2]) ? ((~(arr_2 [i_1 + 1] [i_1 + 2]))) : (((arr_2 [i_1 + 1] [i_1 + 1]) + (arr_2 [i_1 - 2] [i_1])))));
                                var_18 = ((((835777071 <= 71) ? -184 : var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((max(var_11, var_9)) < ((var_5 ? var_11 : var_6)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_20 ^= (((((max(9671001346746579933, (arr_23 [10] [i_8]))))) ? (arr_24 [i_8]) : ((((4074670357 ? (arr_22 [i_7]) : var_12)) + 15515937642803202357))));
                arr_25 [i_7] [i_8] = var_11;
                var_21 -= (arr_21 [5] [20]);
                arr_26 [i_8] [i_7] [i_8] = var_12;
            }
        }
    }
    #pragma endscop
}
