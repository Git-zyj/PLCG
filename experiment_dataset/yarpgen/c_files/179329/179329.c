/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (max(var_16, (18446744073709551615 && 8191)));
        var_17 = ((-(arr_0 [i_0])));
        var_18 = arr_2 [i_0];
        var_19 |= ((!((!(arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_20 |= ((31899 ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_16 [i_1 - 1] [i_2] [i_3] [0] [i_5] &= (((arr_11 [i_1 - 1] [i_3 - 1]) ? (arr_9 [i_1] [i_1] [i_1 + 1]) : (arr_11 [i_3] [i_5])));
                            var_21 = (((arr_14 [i_1] [i_1] [i_1 - 1]) ? (arr_14 [11] [i_1] [i_1 + 1]) : (arr_14 [i_1] [1] [i_1 - 1])));
                            var_22 = var_11;
                        }
                        var_23 |= ((((((arr_5 [i_4]) ? (arr_9 [i_1] [i_2] [i_3]) : var_0))) ? (arr_7 [i_1] [7]) : (arr_11 [i_3] [i_1])));
                    }
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_24 = (arr_3 [i_1 - 1] [i_3 - 1]);
                            arr_21 [i_1] [6] = ((var_14 ? (arr_5 [i_1]) : (arr_13 [i_1 - 1] [i_2] [i_3 + 3])));
                            var_25 = ((-202301811778323337 ? 4799303614440801640 : 268304384));
                            arr_22 [i_1] [11] [11] [i_1] [i_1 + 1] [i_1] [6] = (arr_8 [i_3]);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_26 ^= ((~(arr_4 [i_6 + 4] [i_2])));
                            var_27 &= var_5;
                            var_28 = (arr_25 [i_1] [i_2] [i_3] [i_6 - 1] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_29 = (arr_15 [i_3 + 3] [i_6 - 4] [i_9] [i_9]);
                            var_30 = ((4799303614440801640 ? 18446744073709551615 : 1));
                            var_31 &= var_14;
                            var_32 = ((+((var_7 ? (arr_26 [i_1] [i_2] [i_3 + 2] [i_6 - 4]) : (arr_6 [i_1 - 1])))));
                        }
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_33 &= (arr_6 [i_1 + 1]);
                            var_34 &= ((-8201 ? 2130706432 : 243));
                        }
                        var_35 = (((arr_19 [i_1]) != (arr_19 [i_3 - 1])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [i_1] [i_2] [0] [i_2] [i_11] = 8191;

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_36 |= var_6;
                            var_37 |= (arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                            var_38 = var_9;
                            var_39 |= (arr_8 [i_1 + 1]);
                            arr_40 [i_1] [i_2] [i_3 + 1] [i_11] [i_12] [i_11] [i_12] = var_3;
                        }
                    }
                    var_40 = var_1;
                    arr_41 [i_1] [2] [i_3] = (((arr_23 [i_1] [i_1] [i_3 - 1] [i_3] [i_3 + 4] [i_3] [i_3]) != (arr_23 [i_1] [i_1] [i_1] [i_3] [i_3 - 1] [i_3] [0])));
                    arr_42 [11] [9] [i_3] = var_4;
                }
            }
        }
    }
    var_41 ^= (max(var_9, var_6));
    #pragma endscop
}
