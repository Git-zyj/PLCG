/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = arr_5 [i_1 + 1];
                var_20 = 2047;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_21 = (arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = (arr_8 [i_1 - 1] [i_1 - 1] [i_2] [i_3]);
                                var_22 = (((((arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) + 2147483647)) >> (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) + 775362007))));
                            }
                        }
                    }
                    var_23 = var_1;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_24 = 51864;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((44724 ? ((max((arr_7 [i_1 - 1] [i_1 - 1] [i_5] [i_1 + 1]), (arr_7 [i_0] [i_0] [i_1 + 1] [i_5])))) : var_7));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (var_15 && 144115188075855871);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_25 = (arr_25 [i_8] [i_9]);
                        var_26 = (arr_29 [i_6] [i_7] [i_8] [i_8]);
                        var_27 = ((-((((arr_13 [i_6] [i_6] [i_6]) && 20812)))));
                        var_28 = (((1 ? -2147483627 : -1)));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_29 = ((((((arr_17 [i_6] [i_7] [i_8] [i_10]) + (arr_17 [i_6] [i_7] [i_8] [i_10])))) ? (arr_17 [i_6] [i_6] [i_6] [i_6]) : ((max((arr_17 [i_6] [i_7] [i_8] [i_10]), (arr_17 [i_6] [i_7] [i_8] [i_10]))))));
                        var_30 = ((!(((arr_9 [i_6] [i_7] [i_8] [i_10]) || 20811))));
                        arr_38 [i_8] [i_7] [i_8] [i_10] [i_8] [i_6] = (arr_19 [i_7] [i_7]);
                    }
                    var_31 = (((-8192 | (arr_2 [i_6]))));
                }
            }
        }
    }
    #pragma endscop
}
