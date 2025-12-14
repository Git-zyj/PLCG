/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = ((-(arr_1 [i_0 + 1])));
                        var_13 *= ((-var_7 ? (arr_8 [i_0] [i_0] [i_0 + 1]) : ((var_1 ? (-127 - 1) : 251))));
                        var_14 = ((~(arr_2 [i_0] [i_0])));
                        arr_9 [i_0] [13] [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [i_0] [i_1] [i_2]) ? 1 : (arr_5 [i_0] [i_0] [i_0]))) * (arr_3 [i_1 - 1] [i_0])));
                        arr_10 [i_0] [20] [i_2] [i_0] [i_0] = ((-var_1 ? (arr_4 [i_2]) : (arr_6 [i_2] [17] [17] [i_3] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_15 ^= -636004055;
                        var_16 += (((arr_3 [i_1 - 1] [18]) ? ((~(-127 - 1))) : 60190));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_15 [i_0 + 1] [i_0] [i_0] = var_7;
                            arr_16 [i_0] [7] [i_2] [i_4] [i_5] [i_4] = (!var_9);
                            arr_17 [i_0] = (arr_0 [i_4 + 1] [i_5]);
                            arr_18 [i_5] [i_4] [0] [i_0] [4] [i_0] [0] = (arr_5 [i_4 + 1] [i_1 - 1] [i_0 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 &= arr_4 [i_6];
                            var_18 = 0;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 = ((-(arr_1 [i_0 - 1])));
                            arr_23 [i_0 - 1] [i_1 - 1] [i_0 - 1] [1] [i_0] [i_2] [11] = (arr_6 [i_0] [i_1] [3] [3] [3]);
                            arr_24 [1] [1] [9] [i_0] [i_1] = ((-(arr_14 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2])));
                            arr_25 [i_7] [i_0] [i_0] [i_0] = (((arr_2 [i_0 + 1] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [i_0 + 1] [i_0])));
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_29 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            arr_30 [i_0] [5] [i_0] [i_0] [i_0] [i_0] = var_7;
                        }

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            arr_33 [i_0 - 1] [i_0 - 1] [i_0] [i_4] = ((28177 ? 1600710985 : (arr_27 [i_4 - 1] [1] [i_0] [i_4 - 1] [16] [i_4] [i_4 + 1])));
                            var_20 = 2178312604;
                            arr_34 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_0] = ((-(arr_22 [i_9] [i_4 + 1] [5] [i_1] [i_0])));
                            arr_35 [i_0] = (arr_4 [i_4 + 2]);
                            var_21 = -var_5;
                        }
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_22 = var_2;
                        arr_38 [i_0] = ((1 ? (!var_6) : 1));
                    }
                    arr_39 [i_0] = (~983422596);
                    arr_40 [i_0] [i_1] [i_0] = ((((-(~var_1))) + (((arr_7 [i_0] [i_1] [i_0]) ? var_1 : (~1)))));
                    var_23 = (max((!23), var_4));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    arr_43 [i_0] [i_1] [i_0] [i_0 - 1] = ((arr_21 [i_0] [i_1] [1] [i_0 + 1] [7] [i_11 - 1] [i_1 - 1]) ^ -1358020837);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_51 [20] [20] [14] [16] [i_0] = (((arr_27 [i_12] [18] [i_0] [i_12] [8] [i_13] [i_13]) ? var_4 : (arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_13 - 4])));
                                var_24 = var_6;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    var_25 = (max(var_25, var_3));
                    var_26 = (arr_11 [i_0 - 1] [i_0] [i_1 - 1] [i_14] [i_14 + 1]);
                    var_27 = (((arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 20;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_61 [i_0] [11] [i_0] [i_0] [i_0] = (!1);
                                arr_62 [i_17 + 1] [i_15] [i_0] [i_16] [i_16] [16] [i_1] = (arr_5 [10] [i_16] [18]);
                                arr_63 [i_0] [20] [8] [i_16] [i_0] = (~(arr_58 [i_17 - 4] [2] [i_0 - 1] [i_16]));
                            }
                        }
                    }
                    arr_64 [i_0] [i_0] [i_1] = -4399749938741046402;
                    var_28 = (max(var_28, (~-110)));
                }
                var_29 = ((~(min((arr_42 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_50 [i_1 - 1] [14] [i_1 - 1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
