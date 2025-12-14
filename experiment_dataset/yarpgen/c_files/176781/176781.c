/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = var_5;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = ((-var_17 & ((min((arr_8 [i_3] [i_1]), (arr_7 [i_3] [12]))))));

                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((~((-var_11 * (253 - var_13)))));
                            var_19 = ((-var_16 * 21) / ((((-(arr_10 [i_4] [i_2] [i_0]))) / (arr_5 [i_4] [15] [i_4]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((var_14 ? var_15 : 2450285033))) ? 1 : ((~((min(-28, var_0)))))));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_21 -= (((arr_12 [i_5] [i_5] [i_5] [i_5]) & ((324448907 | (arr_17 [i_5] [i_5])))));
        var_22 += -926688911;
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = (arr_4 [i_6]);
                    var_23 = ((-(arr_5 [i_7] [i_7] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
