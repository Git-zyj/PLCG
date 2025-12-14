/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((-((-((var_2 << (var_3 - 6539)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= -120;
                    arr_7 [i_0] [i_1] [i_1 - 2] [1] = ((-(min((((arr_4 [i_0] [i_0] [i_2]) - 120)), (123 & var_2)))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_15 = (max(var_15, (((-(((arr_4 [i_0] [i_3] [i_3 + 2]) ? 119 : 0)))))));
            var_16 = ((-((-((max(119, var_9)))))));
            var_17 = ((-(arr_1 [i_0])));
        }
        var_18 = ((-(max((~var_2), (((arr_4 [i_0] [i_0] [4]) ? (arr_3 [i_0]) : -117))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_13 [16] [i_4] |= ((117 ? -117 : (arr_8 [i_4] [i_4 + 2])));
        var_19 = (arr_10 [i_4]);
        arr_14 [i_4] = (arr_9 [i_4 - 1] [i_4 + 2] [i_4 + 2]);
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_20 = (arr_15 [i_5 + 1]);
        var_21 = (((arr_6 [i_5 - 2] [i_5 - 2] [i_5 + 2] [i_5]) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : -1));
    }
    var_22 &= var_0;
    var_23 = ((((-var_2 ? -3 : var_6)) >> (((max(-15663170639692057463, var_12)) - 2783573434017494142))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_24 -= -var_3;
                            var_25 = (min(((max((arr_2 [i_9] [i_9]), (((arr_9 [i_6] [i_6] [i_6]) ? -120 : (arr_25 [i_8])))))), (max(var_5, (arr_6 [i_8 - 1] [i_9 - 1] [i_9 + 2] [i_8 - 1])))));
                            arr_27 [i_8] [i_7] [i_7] [i_7] = 1961844858;
                        }
                    }
                }
                var_26 = 120;
                var_27 -= ((((min(2718704136, var_6))) ^ var_3));
                arr_28 [i_6] [i_6] = var_11;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_33 [i_7] [i_10] [i_10] [i_6] [i_7] &= (((~0) | ((min((2333122438 ^ -120), (~0))))));
                            var_28 = (((((-(((arr_4 [i_6] [i_7] [i_11]) << (((arr_5 [i_6] [i_7] [i_10]) - 5295700251301365492))))))) ? (arr_9 [i_10 - 1] [i_10 - 1] [i_10 - 1]) : (1961844858 <= -2)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
