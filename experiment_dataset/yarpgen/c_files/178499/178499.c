/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((var_6 % ((-(196 * 318119089))))))));
                    arr_7 [i_1] [i_1] [22] [i_1] = ((((930373527 ? 985194236 : var_7)) * (arr_0 [i_2 + 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_19 [i_4] [i_4] [1] = -1731148581;
                            arr_20 [16] [i_5] [i_5] [i_3] &= (var_1 ^ var_1);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_13 = var_10;
                                var_14 = ((-1 ? ((((~var_3) > (!var_9)))) : (((arr_0 [i_3]) - (((arr_9 [i_8]) ? var_9 : 39644))))));
                            }
                        }
                    }
                }
                var_15 = (((arr_27 [i_3 + 2] [i_3 + 2] [i_4] [i_4 - 2] [i_3] [i_3 + 1]) + (min(var_4, (arr_14 [i_4] [i_4] [i_4 + 2])))));

                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    var_16 = (arr_22 [i_3] [i_4] [0]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_17 = var_1;
                                arr_37 [i_10] [i_3] [i_10] [1] [i_4] = ((var_0 ^ (max(((~(arr_9 [i_12]))), var_3))));
                            }
                        }
                    }
                    arr_38 [i_3 + 1] [i_10 + 1] [i_4] = (min(59079, 1753618634));
                    arr_39 [i_4] = (((arr_32 [16] [16] [i_4] [i_3]) ? (985194222 - var_4) : var_2));
                }
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    var_18 = (var_6 ? (((max((arr_26 [i_3] [i_4] [18] [18] [14]), (arr_24 [i_13 - 1] [i_4]))))) : ((-1449396550698170801 ? (arr_8 [i_3 + 1]) : var_6)));
                    var_19 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
