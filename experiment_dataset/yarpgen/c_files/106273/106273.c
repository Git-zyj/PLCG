/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((var_12 - ((var_14 ? 207 : var_6)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] = (((((16 >> (var_11 + 1272565506))) << (((min(var_14, 4184905214)) - 94)))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [6] [5] [i_1] [i_1] [i_1] = (min(1, 6489936228768030301));
                            arr_15 [i_0] [i_1] [17] [i_2] [i_0] [i_3] [i_4] = (arr_1 [i_0 - 2] [i_1 - 3]);
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            var_19 = ((-(arr_17 [4] [4] [4])));
                            var_20 = var_4;
                            arr_18 [i_0] [i_0] [i_0] [7] [4] [15] [i_0] = ((var_15 ? ((10 ? var_10 : (arr_17 [i_0] [i_0] [i_0]))) : (!var_6)));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_6] [i_1] [i_2] [i_3] = (arr_1 [i_2] [8]);
                            arr_24 [i_6] [i_2] [11] [i_6] = (arr_8 [i_6 + 2] [i_1 - 3] [i_0 - 3] [i_0 + 2]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [3] [0] [i_0] = var_3;
                        var_21 = var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [19] [3] [10] [i_9] = (((((((arr_16 [i_0] [i_1 - 2] [i_2] [i_8] [21]) ? (arr_16 [18] [i_8] [i_2] [i_1] [i_0]) : (arr_21 [i_0] [i_1])))) > (arr_1 [i_1 - 3] [i_1]))));
                                var_22 = (((min(((16 ? var_9 : 7)), var_8)) * var_12));
                            }
                        }
                    }
                    arr_34 [i_2] = ((713649777 ? 192 : 135));
                    arr_35 [i_1 + 1] [i_1] = (((arr_6 [21] [i_1 - 3] [i_0 - 2] [13]) || ((max(-9003, 2000141068)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_23 = (((min((arr_32 [i_10]), ((11107 ? 121123771 : var_17)))) % (-267353309 | -3311)));
                    arr_44 [5] [i_11] [12] [i_10] = ((!(((((arr_30 [i_12] [16]) != (arr_21 [i_10] [i_11])))))));
                }
            }
        }
    }
    #pragma endscop
}
