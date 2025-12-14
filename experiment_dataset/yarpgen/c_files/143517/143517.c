/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        var_16 = (((max((arr_6 [i_3] [9] [i_3] [i_3] [i_3 - 1] [i_3]), (var_4 - var_5))) == ((((max(18, 9223372036854775807)))))));
                        var_17 = 32512;
                        var_18 ^= 2147483647;
                    }
                    arr_8 [i_1] [i_1] = (arr_3 [i_2] [i_1] [i_2]);
                    var_19 = var_12;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (((~var_4) | (arr_1 [i_0])));
                        var_21 = (var_6 / var_7);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_13 [i_1] [i_1] [2] [i_5] = (arr_10 [i_4] [i_0] [i_0]);
                            var_22 = (max(var_22, (arr_9 [i_0] [i_1] [i_0])));
                            var_23 = ((max(var_8, var_2)));
                            var_24 = (arr_2 [i_0] [1]);
                            arr_14 [i_0] [i_1] [i_1] [3] [i_4] [i_5] = (max((((arr_10 [i_2 + 1] [0] [i_2]) << (((arr_10 [i_2 + 1] [i_2] [i_2]) - 12112)))), (arr_12 [6] [i_1] [i_1] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            var_25 = var_13;
                            var_26 = ((var_4 ? (arr_0 [i_0] [i_0]) : var_3));
                            arr_17 [i_1] [i_6] [i_4] [i_2] [1] [i_1] = var_15;
                            arr_18 [4] [2] [i_0] [4] [i_1] [5] = 63;
                            arr_19 [i_1] [i_4] [4] [i_1] [i_1] = ((18446744073709551615 >= ((((!(arr_2 [i_0] [i_0])))))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_4] &= (min(((var_3 ? (arr_1 [i_2 + 1]) : var_15)), ((max(var_5, (arr_1 [i_2 + 1]))))));
                    }
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_1] [i_0] = ((~(arr_21 [5] [i_1] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((((((arr_3 [0] [i_9] [i_9]) ? (arr_10 [i_0] [2] [i_8]) : var_8)) / ((min((arr_28 [4] [4] [i_7] [4] [2] [i_9]), (arr_3 [2] [i_0] [0]))))))) ? (arr_22 [i_7] [i_9]) : (min(var_9, (arr_9 [3] [i_1] [i_8 + 2]))))))));
                                arr_29 [0] [i_1] [6] [i_7] [i_7] [i_1] [i_0] = ((!((max(var_1, var_2)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_28 = (arr_2 [i_11] [i_11 + 1]);
                            arr_39 [i_0] [i_0] [2] [i_1] [i_0] = ((var_10 / (var_4 / var_15)));
                        }
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_29 = (((arr_15 [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 1]) / (arr_15 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 2])));
                            var_30 = (((arr_5 [i_1] [i_11 + 2] [i_11 + 1] [i_11 - 1]) ? (arr_5 [i_0] [i_11 + 2] [i_11 + 1] [i_11 - 1]) : (arr_5 [i_10] [i_11 - 1] [i_11 + 1] [i_11 - 1])));
                        }
                        var_31 = ((var_12 ? (arr_40 [i_11 + 1] [7] [i_11 + 2] [7] [i_11 + 2] [6] [i_11]) : (arr_2 [i_11 - 1] [i_11 - 1])));
                        var_32 *= (((!-63) == (var_1 - var_5)));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_47 [i_0] [i_0] [5] [i_1] [i_15] = (((((!(arr_12 [8] [i_1] [5] [i_15])))) == var_2));
                                arr_48 [i_1] [i_1] = (arr_12 [i_0] [i_1] [5] [i_0]);
                                var_33 -= ((((arr_10 [i_15] [i_14 - 1] [i_10]) ? var_8 : (arr_44 [i_0] [i_10] [i_14] [i_15]))));
                                arr_49 [1] [1] [i_10] [8] [i_14] [i_1] = (((((var_3 > (arr_1 [3])))) < (arr_32 [i_0] [i_1] [8])));
                            }
                        }
                    }
                    var_34 = ((arr_24 [i_1] [i_1] [i_1]) | (arr_43 [i_1]));
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            {
                                var_35 = (((arr_25 [i_1] [i_1] [i_10] [i_1]) < (arr_25 [i_16] [i_16 - 2] [i_16 - 1] [i_1])));
                                arr_54 [2] [i_1] [i_1] [6] [4] [8] [2] = (((((arr_43 [i_1]) << (var_2 - 18365))) < ((var_3 / (-2147483647 - 1)))));
                                var_36 -= ((!(!var_12)));
                            }
                        }
                    }
                }
                var_37 = (min(var_37, -var_7));
            }
        }
    }
    var_38 ^= ((var_12 ? (((var_10 ? ((var_6 ? var_15 : var_9)) : var_13))) : var_11));
    var_39 = var_11;
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 17;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 15;i_19 += 1)
        {
            {
                arr_60 [i_19] [i_19] = (max(var_3, ((((max(var_2, var_15))) / (arr_56 [i_19 + 2] [i_19 - 2])))));
                arr_61 [i_19] [i_19] [i_19] = (arr_59 [i_18] [i_19] [i_18]);
            }
        }
    }
    #pragma endscop
}
