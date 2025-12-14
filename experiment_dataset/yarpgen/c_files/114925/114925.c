/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += (max(var_10, ((((arr_0 [i_0 - 1]) > var_0)))));
                arr_5 [i_1] = (arr_0 [2]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1] = (((arr_2 [i_0] [i_0 - 1] [i_0 + 1]) ? (((!(arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 1])))) : (((arr_2 [i_0] [i_0 - 1] [i_0 + 2]) ? (arr_2 [i_0] [13] [i_0 + 2]) : (arr_2 [4] [i_0] [i_0 - 1])))));
                    var_19 = var_15;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = (((arr_10 [i_1] [i_1] [i_0 + 1] [i_0]) ? (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_3]) : var_7));
                    arr_11 [i_0] [i_1] [11] [i_3] = ((-(arr_0 [i_0 + 1])));
                    arr_12 [i_0 + 1] [i_1] [i_1] = (arr_0 [i_0 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_21 *= var_16;
                            var_22 = ((((((arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) ? (arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])))) & (arr_15 [i_5] [i_5])));
                            arr_22 [i_4] [i_4] [i_7] [i_4] = ((-(arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6])));
                        }
                    }
                }
                arr_23 [1] [i_5] [i_5] = -var_9;
                var_23 += (arr_19 [2] [1] [i_4] [i_5]);
            }
        }
    }
    var_24 = var_14;
    var_25 = var_5;
    #pragma endscop
}
