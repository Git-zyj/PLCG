/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = max((min(49712, ((-(arr_5 [6] [i_0]))))), (((!(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_3] = 57627;
                            arr_13 [i_3 - 1] [i_1] [i_1] [i_0] = (var_8 % 18318881137767526561);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {
                arr_20 [i_4] = 2147483647;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_15 = (min(((((min(var_8, 3174384673))) ? var_12 : (((35781481 << (2122032484 - 2122032481)))))), (((700062304 * ((14736835446804485893 ? -1066450266 : 3594904992)))))));
                            arr_28 [i_4] = (((2147483647 ? (((-(arr_22 [i_4] [i_5 + 1] [i_6]))) : var_7))));
                            arr_29 [i_4] [i_5] = -1031167921;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((2231 ? (+-11309) : (arr_27 [i_4]))))));
                                arr_39 [i_10] [i_9] [i_8] [i_8] [i_5] [i_4] [17] = ((28292 ? -779435122 : 2147483647));
                                arr_40 [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_4] = (max((max(-2101313033, 15750)), ((11810379275215956022 ? (-2147483647 - 1) : 63283))));
                                var_17 ^= (min(var_4, var_11));
                                var_18 = ((!((((arr_26 [i_4 - 2] [i_5 + 1] [i_8 - 3] [i_10 - 2]) ^ (arr_26 [i_4 - 1] [i_5 + 3] [i_8 - 1] [i_10 - 2]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_19 = ((-(min((arr_37 [i_4] [i_5 - 2] [i_11] [i_11] [i_12] [i_13 - 2]), 2428760924604757273))));
                                arr_49 [i_13] = 117440512;
                                var_20 = ((-((1500132598 ? -var_0 : (!2231)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 21;i_16 += 1)
                        {
                            {
                                arr_56 [i_15] = (((var_6 >= 1120582621) + 10604007660099755346));
                                var_21 = (min(((max((arr_14 [i_4 - 1]), var_4))), (arr_24 [i_16] [i_14] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
