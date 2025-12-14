/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (arr_2 [i_1] [i_1] [i_3]);
                            arr_12 [i_0] [i_1 + 1] [i_2] [i_1] = (arr_10 [i_0] [i_1] [i_1] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_2 [i_1] [i_4] [5]);

                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 20;i_6 += 1)
                            {
                                var_15 = ((((1 * (arr_10 [i_0] [i_6 + 1] [i_1] [i_4 + 1]))) & (arr_4 [i_1 - 1] [i_1])));
                                arr_22 [i_0] [18] [i_5] [i_0] [18] [i_6] &= ((arr_5 [i_5] [i_0]) ? (arr_5 [i_5] [14]) : (arr_5 [i_5] [i_0]));
                                arr_23 [i_0] [i_0] [i_0] [i_1] = ((2839034559581857750 && (arr_3 [i_0] [i_0] [i_4 + 1])));
                            }
                            arr_24 [i_5] [i_1 + 2] [i_5] [i_5] [i_1 - 1] [i_1 + 2] &= (arr_8 [i_0] [i_1] [6] [i_5]);
                            arr_25 [1] [i_5] [i_4] &= (arr_13 [i_0] [i_1 + 2] [i_4] [i_5]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_16 = ((var_0 ? (((arr_16 [i_7 - 2] [i_1]) ? -var_1 : ((((arr_3 [i_0] [i_1 - 1] [i_7]) > 65535))))) : (((arr_32 [i_1 + 1] [i_1 + 2] [i_1] [i_7 + 1] [i_8 + 2] [i_8 + 3]) ? (arr_32 [i_1 - 1] [i_1 + 1] [i_1] [i_7 - 2] [i_8 + 2] [i_8 - 1]) : 1))));
                                var_17 = (max(var_17, (arr_3 [i_0] [i_0] [i_0])));
                                arr_34 [i_0] [20] [1] [i_1 + 2] [i_1] [i_8] [i_9] = ((arr_8 [i_1] [i_8 - 3] [i_1] [i_1]) / (arr_6 [i_0] [i_1]));
                                var_18 += (arr_21 [i_0] [i_1] [i_7 + 2] [i_7] [i_8] [i_8]);
                            }
                        }
                    }
                }
                var_19 &= ((((arr_15 [i_1 + 2] [9] [i_1 + 1]) == ((((arr_15 [i_0] [i_1] [i_1]) || var_4))))));
                var_20 += (((((~((1 ? (arr_11 [i_0] [i_1] [i_1] [i_1 + 2] [1]) : (arr_31 [12] [4] [i_0])))))) == (arr_0 [i_0] [i_1])));
            }
        }
    }
    var_21 = ((var_3 ? (((var_1 ? 20310 : 17994026095873852473))) : (((-((var_10 ? var_0 : var_10)))))));
    #pragma endscop
}
