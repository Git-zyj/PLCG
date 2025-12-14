/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [0] [i_0] [i_0] [5] [i_3] = (max((arr_11 [19] [i_1] [i_2] [i_1]), (arr_2 [i_0])));
                        arr_13 [i_2] [i_0] [i_2] [i_0] [i_0] = var_7;
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((-((((arr_1 [i_0]) < (arr_11 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_21 [i_0] [i_4] = (((((-(arr_11 [i_5] [6] [i_4] [i_0])))) ? (((arr_11 [i_5] [i_4] [i_0] [i_0]) / var_11)) : (arr_2 [i_0])));
                    arr_22 [i_0] [i_0] [i_0] [i_5] = (((((~var_7) | ((var_15 ^ (arr_8 [i_0] [i_0] [i_0] [i_0]))))) | (((~((108 ? 939985129 : -4)))))));
                    var_18 = (max(var_18, ((min(((((var_4 * (arr_3 [i_0] [i_5]))))), ((var_15 + (((((arr_15 [12] [i_4] [12]) != var_4)))))))))));
                    var_19 = (min(var_19, ((((var_2 | 16384) & (((arr_20 [i_4] [i_5]) ? var_16 : var_3)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_27 [7] [i_4] [i_0] [i_7] = var_12;
                                var_20 += var_12;
                            }
                        }
                    }
                }
            }
        }
        var_21 = (((-(arr_18 [i_0]))));
        arr_28 [i_0] = (arr_19 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_22 = (min(var_22, (arr_19 [i_8] [14] [i_8] [i_8])));
        var_23 = ((-(max(((-93 ? 4 : 0)), -25800))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, 0));
                    arr_41 [i_9] [i_9] |= ((((arr_19 [i_9] [i_9] [3] [i_9]) - (((var_16 > (arr_15 [i_9] [i_11] [i_11])))))));
                    var_25 = (max(var_6, var_11));
                }
            }
        }
    }
    #pragma endscop
}
