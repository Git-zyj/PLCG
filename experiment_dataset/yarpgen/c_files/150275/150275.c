/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((-(6815 & 18446744073709551615)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = ((arr_11 [i_0] [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_0]) | (arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [8]));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((~(arr_6 [i_0] [i_0] [i_2] [i_0]))) + 2147483647)) >> (((arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_4]) - 120))));
                                var_14 += 1;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = 41643;
                            }
                        }
                    }
                    var_15 ^= -var_11;
                    var_16 = ((18446744073709551615 ? (arr_3 [i_0] [i_0] [i_1 + 1]) : (arr_9 [14] [i_0] [i_1 + 1] [i_1 - 1])));
                }
            }
        }
        var_17 = (max(var_17, ((((arr_3 [i_0] [14] [i_0]) != (arr_3 [i_0] [2] [i_0]))))));
        arr_15 [i_0] [i_0] = (((arr_4 [i_0] [i_0]) ? (arr_9 [16] [i_0] [i_0] [i_0]) : (arr_9 [2] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = ((((23920 ? 38912 : 38912)) - (arr_21 [i_6 - 1] [i_6 - 1])));
                    arr_24 [i_6] = (((!9) & (((!((max(14058043615436730072, 229))))))));
                    arr_25 [i_6] = (((((-(arr_9 [i_5 + 1] [i_6] [i_6 + 1] [i_7])))) ? (((var_6 ? 23878 : 26620))) : (((arr_16 [i_5 + 1]) ? (arr_9 [i_5 + 2] [i_6] [i_7] [i_7]) : var_9))));
                    var_19 = 12734564353594381801;
                }
            }
        }
    }
    var_20 = var_7;
    var_21 &= (min(var_10, (((min(var_4, 17179869183)) * ((max(2918931560, -7637339041789322039)))))));
    #pragma endscop
}
