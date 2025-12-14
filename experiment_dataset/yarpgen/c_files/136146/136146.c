/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((-((var_9 - (var_17 - 1673325677)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] = ((~(max(21589, var_16))));
                                arr_15 [i_4 - 1] [i_4] [i_2] [i_4] [i_0 - 4] = (arr_13 [i_4] [i_4 - 2] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2]);
                                arr_16 [i_4] [i_1] [9] [i_1] [i_2] [i_3] [i_1] = (((((~(arr_5 [11] [i_4 - 2] [i_0 + 2])))) ? (arr_5 [i_0 + 2] [i_4 - 2] [i_0 + 2]) : ((~(arr_5 [i_0 - 3] [i_4 + 1] [i_0 - 3])))));
                                arr_17 [i_4] [i_3] [i_2] [i_3] [i_4] = ((!(-1 || 206)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6 - 3] [i_6] [i_6] [i_5] [i_6] = ((!(((var_16 ? (arr_11 [i_0 - 4] [12] [4]) : 2540864039)))));
                                var_19 += 0;
                                var_20 -= max((((arr_13 [i_0 - 3] [i_5 + 3] [i_6 - 3] [i_6 - 2] [i_6 - 4] [i_6 - 2]) ? (arr_13 [i_0 - 4] [i_5 + 1] [i_6 - 4] [i_6 + 1] [i_6] [i_6 - 4]) : (arr_13 [i_0 - 4] [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6]))), (((arr_13 [i_0 + 1] [i_5 - 1] [i_6 - 4] [i_6 - 2] [i_6 - 4] [i_6 - 4]) ? (arr_13 [i_0 - 2] [i_5 - 1] [i_6 - 4] [i_6 - 3] [i_6 - 4] [1]) : (arr_13 [i_0 + 2] [i_5 + 2] [i_6 - 4] [i_6 - 2] [i_6 - 2] [i_6 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
