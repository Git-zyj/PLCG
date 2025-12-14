/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_7 ? ((var_7 * ((-119 ? 110 : -12)))) : (var_4 == var_0))))));
    var_16 = var_10;
    var_17 = ((var_12 | (var_12 - var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 += (max(((min(44019, 117))), ((var_10 ? -119 : (arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = ((var_3 ? ((~(arr_8 [i_0] [i_1] [11] [5]))) : 125));
                                var_20 = (min((arr_4 [i_0]), (((arr_4 [i_0]) | ((max(var_1, (arr_3 [i_0] [i_2]))))))));
                            }
                        }
                    }
                    arr_11 [i_2] = var_5;

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_15 [i_5] = (min(var_12, ((((!(arr_12 [i_0] [i_0] [i_2] [i_5] [i_2]))) ? ((-121 ? -121 : -57)) : (((arr_1 [i_0]) ? (arr_3 [i_2] [i_2]) : (arr_6 [i_0] [i_0] [i_0])))))));
                        arr_16 [i_5] [i_5] [i_0] [i_2] [i_5] = (max((arr_10 [i_0]), (arr_7 [i_0])));
                        arr_17 [i_5] = ((40791 ^ (((!((min(106, var_5))))))));
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        arr_20 [8] [3] [i_2] [i_6] = (max((~var_8), var_10));
                        arr_21 [i_0] [i_0] [24] [i_0] = (min(57, 54));
                        var_21 = -79;
                        arr_22 [i_6 - 1] [i_2] [i_1] [21] = ((((!(arr_18 [i_1] [i_6 - 1] [i_6 - 2] [i_6 - 2]))) ? ((max((arr_18 [i_0] [i_6 + 1] [i_6 + 1] [i_6]), (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [19])))) : var_4));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        var_22 *= (!-126);
                        arr_26 [24] [15] [i_7] &= ((57 & (arr_14 [i_7 + 1] [4] [i_7 + 1] [i_7 + 1])));
                    }
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        arr_30 [i_0] [i_8] [7] [13] = var_10;
                        var_23 -= ((!(((-(arr_27 [i_0] [i_8 + 1] [16] [i_1]))))));
                    }
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
