/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_7;
                arr_8 [0] [i_1] [0] |= ((-(max((arr_5 [i_0] [i_1] [4]), 189))));
                var_10 = ((~(((var_3 >= (arr_0 [i_0] [i_1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_12 [16] [16] = (((arr_11 [i_2] [i_2]) ? (arr_11 [i_2] [i_2]) : (arr_11 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_11 = ((~(arr_16 [i_2])));

                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            var_12 = -426755103;
                            var_13 = var_9;
                            var_14 = 4435687283887884388;
                            arr_26 [7] [7] [i_4] [7] [i_6] = (-1797883043 || 2759466094809322866);
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_29 [i_7] = ((!(arr_23 [i_5] [i_3] [i_4] [i_5])));
                            arr_30 [i_7] [17] [i_7] [i_5] [i_5] [i_5] = ((~(~var_8)));
                            var_15 = var_7;
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7] = var_2;
                            arr_32 [5] [5] [i_5] [i_5] [i_5] [i_7] [i_5] = (((var_0 ? -5084908112380266682 : var_1)));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_35 [i_2] [i_2] [i_2] [i_8] [i_2] = (((187 ? 204 : 1)));
                            var_16 |= (251 >= 16221863251548057410);
                            arr_36 [i_8] [i_8] = var_5;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_40 [i_9] [i_9] = -var_2;
        arr_41 [i_9] = var_0;
        arr_42 [i_9] = ((var_5 ? (arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_23 [i_9] [i_9] [i_9] [20])));
        var_17 = 25;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_45 [i_10] [2] = ((!(!var_9)));
        arr_46 [i_10] [i_10] = var_6;
        var_18 = (((((!((min(var_7, var_5)))))) < (arr_11 [i_10] [i_10])));
    }
    var_19 = 255;
    #pragma endscop
}
