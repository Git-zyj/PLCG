/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = ((1 ? 18446744073709551602 : 18446744073709551574));
        var_15 += ((-var_5 == ((2147483647 ? ((min(2147483632, 1))) : 18446744073709551612))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] |= ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((arr_5 [i_1]) ? 18446744073709551600 : var_1)) : (min((arr_5 [i_1]), (arr_5 [i_1])))));
        arr_7 [i_1] [6] = ((arr_4 [i_1]) * (((arr_5 [i_1]) * var_3)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = (min((min((arr_5 [i_3]), (arr_5 [i_2]))), (((227 ^ 1) ? (-2147483647 + 18446744073709551591) : (arr_9 [2] [11])))));
                    var_17 = ((-((((min(-70, 2143289344))) / (min(var_6, (arr_10 [5] [i_1] [i_1])))))));
                }
            }
        }
        var_18 = (((~200) % var_10));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 = ((((min(((var_9 / (arr_11 [i_4] [i_4] [11]))), (((var_1 && (arr_12 [i_4]))))))) ? (29647 != 1920) : (arr_10 [i_4] [i_4] [i_4])));
        arr_14 [i_4] = ((((~(arr_5 [i_4]))) ^ (min((arr_11 [i_4] [i_4] [i_4]), var_4))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] = (max((arr_12 [i_5]), ((-125412434 ? (((~(arr_23 [i_7] [i_5] [i_6] [i_5] [i_4])))) : (min((arr_15 [i_4] [i_4]), var_4))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_4] [i_5] [i_6] [i_4] [i_8] = -var_0;
                            arr_31 [i_4] [i_5] [i_4] [1] [i_7] [i_8] [i_8] = var_10;
                            arr_32 [i_4] = (((18446744073709551615 ? 0 : 1)));
                            arr_33 [i_4] [i_5] [i_6] [i_4] [i_8] = var_14;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_20 += ((((min(18446744073709551601, 17953720092419821116))) ? var_5 : (((((18446744073709551599 ? var_7 : var_4))) ? (arr_16 [10] [i_5] [10]) : 951190773))));
                            arr_36 [i_4] = (min((arr_12 [11]), ((var_0 ? (arr_15 [i_4] [i_4]) : (var_0 == var_7)))));
                            arr_37 [i_4] [i_4] [i_4] [i_4] [0] [8] [i_9] = (18446744073709551613 + -50);
                        }
                        arr_38 [i_4] [i_7] [1] [i_5] [i_4] = (min((min((arr_23 [6] [i_6] [i_5] [i_5] [i_4]), (arr_23 [3] [i_6] [i_5] [1] [i_4]))), (arr_23 [i_6] [i_6] [i_5] [11] [6])));
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
