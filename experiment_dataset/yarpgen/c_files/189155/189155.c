/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 |= ((!((min(3, (arr_1 [0]))))));
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((!((min((arr_6 [i_0] [i_0 + 3]), (arr_6 [i_0] [i_0 + 3]))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_3] = ((~(((~var_9) ? (arr_10 [i_0] [i_0] [i_2] [i_2] [i_3]) : ((~(arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_2] [i_3])))))));
                        var_20 = (max((((var_1 < ((max(1, 0)))))), -15860));
                        var_21 = ((-((-(arr_3 [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_19 [i_0 + 1] [i_0] [i_0] = (min(((-((max(1, 1))))), (!137645993)));
                                var_22 ^= var_13;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_23 = (((var_16 - (arr_21 [i_2]))));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [i_0] [1] [1] [i_6] [i_0] = (max(var_16, (min((~90), var_11))));
                            arr_26 [i_0] [i_0] [2] [i_7] [i_0] |= ((!((max(var_3, (min((arr_0 [i_2]), 42)))))));
                        }
                    }
                }
            }
        }
        arr_27 [i_0] = ((((min(var_3, var_11))) + (max(((min(-15859, var_18))), (~var_2)))));
    }
    var_24 = ((min(15860, 1)));

    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        arr_31 [i_8] = ((!(((max(21301, var_3))))));
        var_25 = (arr_7 [15] [i_8] [i_8] [i_8]);
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    {
                        var_26 = ((!((((arr_37 [i_11 - 2] [i_11 + 1] [i_11 - 3] [i_10]) ? (arr_37 [i_11 - 2] [i_11 + 1] [i_11 - 3] [i_10]) : (arr_37 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_10]))))));
                        var_27 = (min(44249, ((~(arr_5 [i_11 - 2] [i_12 + 2])))));
                    }
                }
            }
        }
        var_28 |= ((-(max(-11931, 0))));
    }
    var_29 = (((var_3 ^ var_0) * ((min((max(var_9, -6)), 1)))));
    #pragma endscop
}
