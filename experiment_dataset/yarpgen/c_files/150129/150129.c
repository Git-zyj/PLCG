/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1758717820 / 1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    var_11 = (min(var_11, (!var_3)));
                    arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_0]);

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_12 = (max((arr_5 [i_0] [i_0] [i_2 - 2]), -1));
                        var_13 = (max(1, 1));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [i_0] = (arr_5 [i_4] [i_2 - 2] [i_0 - 1]);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_0] [9] [1] [i_4] [i_0] = 73;
                            var_14 = (min(((((32504 != (arr_10 [4] [4]))))), 1485700528));
                            arr_18 [i_0 - 1] [i_0 - 1] [i_0] = -1722270359;
                            var_15 = (min(var_15, (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [1])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_16 = (((arr_23 [i_1] [i_1] [i_1] [5] [i_2 + 2] [i_6] [i_7]) ? (arr_19 [i_0]) : (max((arr_4 [i_0] [i_2 - 3]), (arr_4 [i_0] [i_2 + 2])))));
                            var_17 = (max((((606388073 << 0) ? (arr_20 [i_0] [8] [0] [6] [6] [i_0 - 1]) : (arr_12 [2] [i_2] [5] [1]))), -1230553324));
                            var_18 = (-(max((((arr_12 [i_0 - 1] [i_1] [i_6] [i_1]) ? (arr_19 [i_0]) : 1)), (min((arr_1 [i_0]), 1758717820)))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_2 + 2] [i_6] [4] [i_6] = var_2;
                            arr_27 [i_0] [i_1] [i_2] [6] [i_6] [6] [i_8] = ((((max(1, var_2))) ? ((max(1890740598, -66))) : ((-1758717845 ? ((max(var_4, (arr_8 [8] [i_0] [i_2])))) : 3992747368))));
                        }
                        var_19 = var_5;
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_30 [i_1] [i_1] [i_1] [i_0] = 1;
                    arr_31 [i_0] [1] [i_9] = (arr_19 [i_0]);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_20 = ((~((~(arr_29 [i_0] [i_1] [i_10])))));
                    var_21 = (min(var_21, (!31)));
                    var_22 = (((5310458538540539157 & 1) / 1758717820));
                    var_23 = (((((225 ? 0 : 9223372036854775804)))) && 1);
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_24 = ((+(((arr_33 [i_0 - 1] [i_0]) ? ((-1 ? var_0 : var_0)) : (var_1 * 1)))));
                        arr_41 [i_0] [i_1] [i_11] [i_11] [8] [8] |= ((1 ? (arr_3 [i_12 - 1] [i_12]) : var_9));
                        arr_42 [i_0] [i_0] = -3248723513192235000;
                        arr_43 [i_0] [i_0] [i_0] [i_1] = (max(65535, 224));
                        var_25 = var_2;
                    }
                    arr_44 [6] [3] [i_0] [i_0 + 1] = (((((var_2 + (((!(arr_38 [i_11]))))))) ? (((~(arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 1])))) : 9223372036854775786));
                    var_26 *= (((arr_9 [8]) ? ((var_9 ? var_9 : (((arr_11 [i_0] [0] [i_0 - 4] [4] [4]) ? var_9 : 1)))) : var_4));
                }
                var_27 = ((-((1205724365 >> (26781 - 26756)))));
            }
        }
    }
    #pragma endscop
}
