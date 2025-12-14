/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_11 | ((((1 ? 4095 : 3655))))));
    var_13 += 61440;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = arr_2 [i_3];
                            arr_13 [i_0] = ((~(((arr_7 [i_2] [i_2] [i_1 - 4]) ? 4088 : (arr_8 [i_2] [i_1] [i_1 - 4])))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = (-32767 - 1);
                            var_15 = (min(var_15, (((((((arr_0 [i_3 + 3]) ? (arr_0 [i_0]) : var_10))) ? ((max(-25786, (arr_0 [i_0])))) : ((var_10 ? 25816 : (arr_6 [i_3] [i_1 - 4]))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [i_4] |= (arr_8 [13] [i_1 - 3] [5]);
                        var_16 = 25786;
                        var_17 = var_2;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_18 = var_7;
                        var_19 *= 1;

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_28 [7] [i_7] [i_4] [2] [7] [1] = ((28348 | (~23567)));
                            arr_29 [i_0] [i_7] [i_4] [i_6] [i_7] = (46139 % var_2);
                            arr_30 [2] [i_1 - 4] [i_4] [i_6] [i_7] [i_4] [i_7] = 9342;
                            arr_31 [i_0] [i_7] [i_4] [i_6] [i_0] = (((arr_23 [i_1 + 1] [i_1] [i_1] [i_6] [i_1 + 1]) ? (arr_15 [i_0] [1] [i_0] [i_0]) : -var_8));
                            arr_32 [i_0] [i_0] [i_7] [1] [i_0] = ((var_4 ? (arr_21 [i_0] [i_1 - 4] [i_0] [i_1 - 3]) : (arr_21 [i_0] [i_1 + 1] [i_0] [i_1 - 3])));
                        }
                        var_20 = (max(var_20, ((((arr_23 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 4] [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_11 [i_0] [i_0] [i_4] [i_1 - 3]))))));
                    }
                    var_21 *= (((arr_15 [i_1] [i_1 - 4] [i_1] [i_1 - 4]) ? (arr_26 [i_0] [i_0] [i_0] [i_4]) : (arr_18 [i_0] [i_4] [11])));
                    arr_33 [i_0] [i_1 - 2] [i_4] &= 56229;
                    arr_34 [i_0] [i_0] [i_1 - 1] [13] = (~1);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_22 = ((((~(~28216))) - ((~(25785 | 56235)))));
                                arr_41 [i_1 - 4] [i_1 - 4] = ((var_10 ? ((min((arr_16 [i_1] [i_1 - 2] [i_8]), (arr_11 [7] [i_1 - 1] [i_1 - 1] [i_10 - 2])))) : (~4298)));
                            }
                        }
                    }
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((~((((min((arr_17 [i_0] [i_8]), var_5))) ? ((-(arr_19 [9] [i_8] [i_1] [i_0] [i_0] [i_0]))) : -1))));
                }
                var_23 = (max(var_23, (((((((arr_37 [i_1 - 3] [i_1 - 2]) <= var_6))) ^ (((arr_5 [i_1 - 3] [i_1 - 1]) ? 1 : (arr_5 [i_1 + 1] [i_1]))))))));
                arr_43 [i_0] [i_0] = (arr_4 [i_0] [i_1 - 2]);
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
