/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_2 + 3] = var_5;
                            arr_14 [i_0] [i_2] [i_2] = (arr_0 [i_3 + 1] [i_4]);
                            arr_15 [7] [i_2] [2] [i_2 + 4] [i_2] [i_2 - 1] [i_2] = ((-(arr_9 [0] [i_4] [i_4] [i_3 + 2] [i_3] [i_2 - 1])));
                        }
                        arr_16 [i_2] = (+-2504895154);
                        arr_17 [i_2] [i_1] [i_1] [i_2 + 2] [i_3 + 2] [i_3] = (arr_4 [i_0] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_20 [i_5] [i_2] [i_2] [i_1] [i_0] = (((arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0]) << (var_2 - 174)));
                        arr_21 [i_2] = (max((((-10085 + 262800843) / (arr_9 [i_0] [i_0] [i_0] [7] [i_1] [i_2 + 1]))), ((((max(-11559, var_8)) <= (arr_19 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 3]))))));

                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_2] [i_1] [i_5] [i_2] [i_1] [i_1] [i_2] = arr_10 [i_2 - 1] [i_2];
                            arr_26 [i_0] [i_2] [i_5] [i_6 + 1] = var_8;
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_2] [i_6] = (((arr_7 [i_0]) ? ((max(((((arr_19 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]) && 2212572110))), 2082395179))) : (arr_4 [i_0] [i_0])));
                            arr_28 [i_2] = (((((-(arr_3 [i_2 + 2] [i_2 - 1])))) ? (((arr_10 [i_2 + 2] [i_2]) ? (arr_10 [i_0] [i_2]) : (arr_10 [i_0] [i_2]))) : (arr_11 [6] [i_1] [i_0] [i_2] [i_6])));
                        }
                        arr_29 [i_0] [2] [i_2] [i_5] [i_1] |= (max(2082395169, 101));
                    }
                    arr_30 [i_2] [i_1] = var_2;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_37 [3] [2] [i_2] = (arr_32 [i_0] [i_0]);
                                arr_38 [i_0] [i_2] [i_2] = (max((((arr_36 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_0]) || (arr_36 [11] [i_8] [i_2] [i_2 + 3] [1]))), (arr_12 [i_0] [i_1] [i_2] [i_7 - 1])));
                                arr_39 [i_1] [i_1] [4] [i_7] [i_1] |= (max(((((arr_19 [i_0] [14] [i_1] [i_7] [i_0] [i_2 - 1]) ? (arr_19 [i_0] [i_0] [i_1] [i_7 + 1] [i_8] [i_1]) : (arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))), (((arr_19 [i_0] [i_1] [i_1] [i_2] [10] [i_8]) ? (arr_19 [i_2] [4] [i_1] [i_7 - 2] [i_8] [8]) : 2082395169))));
                                arr_40 [i_0] [i_1] [i_2 + 1] [i_2] [i_8 + 1] = (((((arr_7 [i_0]) - (arr_7 [i_0]))) <= (((((-3923683611665829466 + 9223372036854775807) << (2082395169 - 2082395169)))))));
                                arr_41 [10] [i_2] [i_7] = (max(((max((arr_10 [i_7 - 2] [i_2]), var_2))), (max((arr_35 [i_2] [i_2] [i_2 - 1] [i_7]), (arr_34 [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
