/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0 - 2] [i_0] [i_2 - 1] = var_1;
                        arr_12 [i_0 - 2] [i_0] [i_1 + 1] [i_2 + 1] [i_3 + 4] [i_0] = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (~32767)));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] = var_9;
                        var_13 = (min(var_13, (arr_2 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0] = (((min(19, var_9)) | (max((arr_4 [i_0] [i_1 - 2] [i_5 - 2]), (arr_1 [i_1] [i_0])))));
                                var_14 *= arr_19 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0];
                                arr_22 [i_0 + 1] [6] [i_2] [i_5 + 1] [i_0] = (((-2048692996 / 4263106507743603009) * ((((max(419338743, 4100745498)) * var_8)))));
                                arr_23 [i_0] [i_2 + 1] [10] = (((((((((arr_14 [11] [i_1]) + 2147483647)) << (2045553839 - 2045553839)))) ? var_10 : (arr_20 [i_6 - 1] [6] [i_2 + 1] [9] [i_1] [15] [i_0]))));
                                var_15 = (max(var_15, (((-(arr_13 [1] [i_5 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            {
                var_16 = (max((arr_27 [1] [i_7 - 2]), (((arr_29 [8] [i_8]) ? 1 : (arr_27 [i_8 + 1] [i_7 + 3])))));
                var_17 = ((((arr_27 [i_7 - 3] [i_8 - 2]) >> (var_12 + 22))));
                arr_30 [i_7] &= ((((((var_4 + 4032) * (arr_25 [i_8 + 1] [i_8])))) * (((arr_26 [i_8 - 1] [i_7 + 3] [i_7]) + var_9))));
            }
        }
    }
    #pragma endscop
}
