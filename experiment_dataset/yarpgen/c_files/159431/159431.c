/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = ((244 ? ((8 ? 0 : 0)) : (max(235, ((28672 ? (arr_1 [i_1]) : 0))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_2 - 3] [i_1] [i_0] = -1;

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [0] = ((~((((~(arr_0 [i_2])))))));
                                var_22 = (((((arr_3 [i_0] [i_1] [i_1]) ? (arr_1 [6]) : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [2])))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_4] = var_18;
                                var_23 = (arr_8 [i_0] [i_1] [i_2] [i_1 - 1]);
                            }
                            for (int i_5 = 4; i_5 < 10;i_5 += 1)
                            {
                                var_24 = (min(var_24, (arr_0 [i_2])));
                                var_25 += (arr_13 [7] [8] [i_3] [i_2] [i_1] [6] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_26 += (((var_0 ? (arr_18 [i_0] [0] [i_2] [i_2] [i_6]) : (arr_20 [i_0] [8] [i_6] [i_6] [i_0] [i_3] [4]))));
                                arr_22 [i_1] [9] [i_2] = (arr_12 [i_1] [i_1 + 1] [i_2] [i_2] [i_3 + 2] [4]);
                                var_27 = (arr_5 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
