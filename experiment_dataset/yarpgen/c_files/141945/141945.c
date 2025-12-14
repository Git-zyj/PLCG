/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 ^= ((((arr_8 [i_0] [1] [i_2]) && (63 && 63))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [10] [i_0] [10] [i_2] [7] [8] = ((((max((arr_13 [i_0 + 1] [i_2 - 2] [i_2 - 3] [i_3 - 1]), 63))) - 133));
                                arr_17 [10] [i_0] [i_2] [i_0] [10] = (((arr_4 [i_0 + 1] [i_2 + 2] [i_3 - 1]) ? ((max(1, 63))) : (((((arr_15 [i_0] [i_1] [i_1] [i_1] [i_1]) && (arr_11 [i_0 + 1] [0] [i_0 + 1] [i_3 + 1] [i_4])))))));
                                var_16 = ((((var_9 ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : var_13)) - (((((max(13, 0))) - 1)))));
                                var_17 = (min(var_12, (((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_6 [12] [i_3 - 1]) : 209))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_6 << (min((var_6 | var_3), ((max(var_12, 63782)))))));
    #pragma endscop
}
