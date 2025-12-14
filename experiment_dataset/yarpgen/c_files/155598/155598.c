/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [12] [i_1] &= -1075539651;
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_8 [i_2] [i_2] [i_2] [i_2] [6]);
                            arr_13 [i_2] [i_2] [8] = (min((~var_5), (!55252)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 *= 1;
                            var_21 -= 91;
                        }
                    }
                }
                var_22 = (max(var_22, ((((~-var_14) && ((((arr_7 [i_1] [0] [0] [i_0]) ? (arr_7 [i_1] [i_0] [i_0] [i_0]) : 7))))))));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_23 = (max(var_23, (((max(2365637802, (arr_14 [i_0] [i_1] [i_6])))))));
                    arr_21 [15] [i_1] [i_1] [i_1] = (~0);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_24 = (max(var_24, 2621584593));
                        arr_24 [i_0] [i_0] [13] [i_7] = ((+((-(((arr_1 [i_0]) ? -1075539661 : -1075539651))))));
                        var_25 += -190753955;
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_26 = ((((min(36102, 11))) <= (arr_8 [i_8] [i_6] [i_6] [i_1] [i_8])));
                        var_27 = (min(var_27, (((max((arr_7 [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8]), (arr_17 [0] [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_6] [7])))))));
                        arr_27 [1] [16] [i_6] [i_8] = (min((~27878), ((-((var_11 ? (arr_3 [15]) : var_6))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 4; i_10 < 15;i_10 += 1)
                        {
                            arr_34 [i_6] [i_6] [1] [1] [i_6] [i_9] = ((var_13 ? 8235 : 21912));
                            var_28 = (((arr_31 [i_0] [2] [i_6] [i_9]) || (((-(arr_8 [i_9] [i_9 + 2] [i_9] [i_9] [i_9]))))));
                            arr_35 [i_0] [i_9] [0] [i_9] [i_0] = (((arr_18 [i_10 - 2] [i_10 - 1] [i_9 - 1] [7] [i_9]) / ((~(arr_0 [12])))));
                            arr_36 [i_0] [i_0] [i_9] = 2621584599;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] &= (arr_6 [i_9 + 4] [i_1] [i_6] [i_10 - 2]);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_29 ^= (((var_12 ? 1 : 0)));
                            var_30 = ((arr_15 [i_9 + 4] [i_9 + 4] [i_9 + 4]) ? (arr_15 [i_9 + 4] [i_9 + 3] [i_11]) : (arr_15 [i_9 - 1] [i_9 + 4] [i_11]));
                            var_31 = (((arr_26 [9] [i_1] [i_6]) ? (arr_8 [i_9] [i_6] [i_6] [i_9 - 1] [i_11]) : (((arr_20 [i_0] [i_1] [i_0] [9]) ? var_16 : var_13))));
                            var_32 -= ((!(arr_8 [i_6] [i_9 + 4] [i_6] [i_1] [i_6])));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_33 = var_6;
                            var_34 = 255;
                            var_35 += var_18;
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_9] [i_9] [i_9] [i_1] [i_9] [i_0] [i_0] = ((11 & (arr_14 [i_9 + 3] [i_9 + 2] [5])));
                            arr_48 [i_13] [8] [i_6] [i_1] [i_1] [i_13] &= (arr_25 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 4]);
                            arr_49 [i_9] [i_9] [i_6] [i_9] [i_9] = (((arr_31 [i_9] [12] [i_9 + 3] [i_1]) ? var_14 : (((127 ? var_18 : (arr_15 [i_0] [i_1] [16]))))));
                            var_36 = (var_10 - 43865);
                            var_37 = (min(var_37, (arr_40 [i_0])));
                        }
                        var_38 += (((arr_31 [i_9 + 2] [i_6] [i_1] [5]) ? (arr_29 [i_0] [i_0] [i_0]) : (arr_6 [i_9 + 2] [i_9 + 2] [i_6] [i_0])));
                        arr_50 [11] [i_9] [i_1] [6] [i_9] [i_0] = var_13;
                    }
                }
            }
        }
    }
    var_39 = -20394;
    var_40 = -var_2;
    #pragma endscop
}
