/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, (!var_6)));
    var_16 = var_7;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        arr_4 [i_0 - 1] |= min((min(var_2, (arr_2 [i_0 + 2]))), (~1335644830));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_11 [7] [i_1] [i_2] = var_5;
                    arr_12 [i_1 - 1] [i_1 - 1] = (min((min((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2]))), ((1 ? (arr_2 [i_0 - 2]) : var_11))));
                    arr_13 [i_0] = ((var_9 ? 63 : (arr_9 [i_0 - 1] [i_0 + 2] [i_1 + 2] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_20 [i_1] [i_4] [1] = (max(((max((arr_17 [i_1 - 1] [8] [i_2 + 1] [i_4 - 3] [8] [i_4 + 1] [i_4 - 2]), (arr_19 [i_2 + 1] [11] [i_2 + 1] [i_3] [i_2 + 1] [i_4 - 3])))), (((arr_17 [i_1 + 3] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 - 4] [i_1]) & (arr_17 [i_1 + 1] [i_1 - 1] [i_2 + 1] [i_2] [i_4] [i_4 - 2] [23])))));
                                arr_21 [i_0] [18] [i_0] [i_3] [i_4] = (arr_2 [i_1 + 2]);
                                arr_22 [7] [i_1] [i_4] [7] = (((arr_6 [i_2 + 1] [i_1 - 1] [i_0 - 2]) && ((min((arr_19 [i_4 - 2] [i_1] [i_2] [i_2] [i_4] [i_1]), var_8)))));
                                arr_23 [4] [8] [i_2] [i_4] [8] = (((((((min(var_14, var_14))) != (~245)))) * var_9));
                                arr_24 [i_0] [i_3] [i_3] [22] [18] [i_0] = (min((max(((((arr_18 [i_1]) < var_1))), (arr_2 [i_1]))), -43));
                            }
                        }
                    }
                    arr_25 [1] [i_0] [i_0] [i_0] = (~2959322477);
                }
            }
        }
    }
    var_17 &= var_6;
    #pragma endscop
}
