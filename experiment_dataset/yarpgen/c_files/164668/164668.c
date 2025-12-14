/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_1] [i_1]);
                var_16 &= ((-var_3 ? (((var_13 & (arr_1 [i_1])))) : var_14));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = ((var_4 > (arr_6 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = 1605932572;
                                arr_20 [i_2] [i_2] [13] [i_2] [i_5] [7] [i_5] = ((var_8 ? (arr_8 [1] [i_3] [i_3]) : (arr_16 [i_4] [10] [i_4 - 1] [i_4 - 1])));
                                arr_21 [i_5] [i_5] = (((arr_12 [i_4 - 2] [9] [i_4 - 1]) != (arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2])));
                            }
                        }
                    }
                    arr_22 [i_4] [i_3] = (((arr_19 [i_2] [i_2] [i_4 + 1] [i_2] [1] [1]) || (arr_19 [i_2] [2] [i_4 + 1] [1] [2] [1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_19 |= ((arr_25 [2] [i_8]) % var_13);
                var_20 = (max(((((~(arr_25 [i_8] [i_7]))))), (arr_26 [i_8])));

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_21 *= ((((arr_27 [12] [i_8] [i_9] [i_8]) == (arr_26 [i_7]))));
                    var_22 = (((((!1605932572) * (min((arr_23 [i_7]), (arr_26 [14]))))) | ((44288 ? (arr_23 [17]) : 1))));
                    var_23 = (arr_26 [i_9]);
                }
                var_24 = var_13;
                var_25 = (arr_25 [i_7] [14]);
            }
        }
    }
    #pragma endscop
}
