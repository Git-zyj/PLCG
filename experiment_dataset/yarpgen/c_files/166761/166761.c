/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((((var_0 != (((((arr_1 [i_0]) >= 201))))))), (arr_1 [i_0 - 1]));
        var_16 -= ((arr_0 [6]) ^ (~var_5));
        arr_3 [i_0] [i_0] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) - (201 != 201)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_17 = (((arr_0 [i_1]) ^ (arr_0 [i_1])));
        arr_7 [i_1] = (~(((arr_1 [i_1]) ? (arr_5 [i_1]) : 1)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (((var_0 && (((arr_0 [i_2]) || var_8)))));
        var_19 += (arr_8 [14]);
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_20 = (min(var_20, 80));
        arr_14 [i_3 + 1] [i_3] = (((-(arr_13 [i_3 - 4]))));
        var_21 = arr_9 [i_3 + 2];
    }
    var_22 = (var_10 != var_15);
    var_23 -= var_2;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_24 -= (arr_18 [13] [0]);

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_27 [i_4] = (max((((~(((var_0 < (arr_25 [i_4] [i_5] [i_6] [14]))))))), (max(var_12, (arr_19 [i_7] [i_6 + 1])))));
                            arr_28 [i_4] [i_4] [13] [13] [i_7] [i_7] [i_8] = 1;
                            arr_29 [i_4] = 187;
                            var_25 += ((var_0 + ((((var_15 || (arr_21 [i_6 + 1] [i_4 - 1])))))));
                            arr_30 [i_4] [i_4] [i_6 - 2] = ((arr_23 [i_4 + 1] [13] [i_5] [i_6 - 1]) ^ (((arr_26 [3] [3] [i_4 - 1] [i_4 - 1] [i_6 + 1]) ? (arr_26 [i_4] [i_5] [i_4 - 2] [i_7] [i_6 - 2]) : (arr_22 [i_4 - 2]))));
                        }
                        for (int i_9 = 3; i_9 < 21;i_9 += 1)
                        {
                            arr_33 [i_4] [i_5] [i_5] [i_7] [i_7] = var_15;
                            arr_34 [i_6] [i_6] = var_4;
                            var_26 += ((((arr_16 [i_4 - 1]) >> ((((max(var_5, (arr_31 [i_4] [16] [16] [i_7] [i_9])))) - 167)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_27 ^= (arr_32 [i_4 + 1] [10] [i_6 + 1]);
                        arr_37 [i_10] [i_4] [i_6] [i_5] [i_4] [i_4] &= ((var_1 ^ (arr_1 [i_4 + 1])));
                        var_28 = ((arr_15 [i_6 + 1]) - 0);
                        var_29 = (((arr_17 [i_4 - 1]) * (var_3 - var_14)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_30 *= ((var_13 % (arr_22 [2])));
                        arr_41 [i_4 + 1] [10] = ((~(arr_21 [i_4 - 2] [i_4 + 1])));
                        arr_42 [i_11] [i_6 - 2] [i_6] [i_6] [6] [6] = (-127 - 1);
                        var_31 = (max(var_31, ((((((arr_22 [i_4]) ? 0 : (arr_31 [i_11] [i_5] [i_5] [5] [i_4])))) < var_0))));
                    }
                    var_32 = ((201 >= ((-(((var_15 || (arr_40 [i_4 - 2] [i_5] [i_5] [i_5] [i_6 + 1] [i_6 - 1]))))))));
                    arr_43 [i_6] [i_5] [i_6] = ((arr_31 [i_6] [i_5] [i_4] [i_4] [i_4]) != (arr_39 [i_4 - 2] [i_4 - 2]));
                }
            }
        }
    }
    #pragma endscop
}
