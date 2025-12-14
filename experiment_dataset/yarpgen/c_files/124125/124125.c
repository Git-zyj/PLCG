/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [10] = ((((((((arr_1 [i_0 + 1]) ? var_1 : var_2)) + 2147483647)) << (var_1 > var_0))));
        var_17 *= (((((~(arr_1 [i_0])))) & var_4));
        var_18 = 11199102997492735052;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [0] = ((-0 ? 37797 : (((arr_3 [i_1]) / ((-(arr_4 [i_1 - 1])))))));
        var_19 = 464481220;
        arr_6 [i_1] = 464481224;
    }
    var_20 = (max(var_20, var_14));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (max(((((arr_12 [i_2] [i_3]) && var_6))), (arr_12 [i_2] [i_3])));

                for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_21 = arr_14 [i_2] [i_3 + 1] [i_4 + 2] [i_4 - 1];

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 = (arr_7 [i_3 - 3] [i_5 + 1]);
                            arr_22 [1] [i_3 - 3] [i_3] [i_3] [5] = var_10;
                        }
                        var_23 = ((!(arr_18 [i_2] [i_2] [i_4 + 1] [i_3])));
                        arr_23 [i_2] [i_2] [i_3] [i_2] = (arr_16 [6] [i_5 + 1] [i_4] [8]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_24 = (arr_12 [i_3 - 3] [i_3]);
                                var_25 = (((((((min((arr_27 [i_8 - 2] [i_3] [i_8 - 2] [i_8 - 2] [12]), (arr_15 [i_2] [i_4] [i_7] [1])))) ? (var_7 & var_5) : var_3))) < (arr_20 [i_3 - 2] [8] [i_7 - 1] [8])));
                                var_26 = var_4;
                            }
                        }
                    }
                }
                for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            arr_37 [i_3] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 3] = ((var_10 - (arr_4 [i_2])));
                            var_27 = (arr_17 [i_3] [i_3] [0] [9]);
                            var_28 = ((~(((-2147483647 - 1) ? 2130706432 : 464481220))));
                        }
                        var_29 = ((((!(((var_0 ? (arr_34 [i_2] [i_3] [i_3] [i_3] [i_10 - 1]) : (arr_8 [12] [i_3 - 1])))))) && (((arr_26 [i_10 - 1] [i_10] [12] [i_10 + 1] [i_10]) && (arr_16 [i_10 - 1] [10] [5] [7])))));
                    }
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        var_30 ^= ((((max(5768355171773313985, 1))) ? 50154 : -4742395929442712084));
                        arr_40 [i_3] [i_9] [i_3] [i_3] = var_5;
                        var_31 = (((((4207765281295630419 & 12678388901936237625) || var_12)) ? 4742395929442712078 : ((((!(arr_8 [12] [2])))))));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_43 [7] [i_3] [7] [i_3] [i_3] [5] = -var_3;
                        arr_44 [i_2] [i_3] [i_9] [i_9] = (max(4, var_6));
                        var_32 = ((((((arr_41 [i_2] [i_3] [i_2] [i_2]) ? ((var_7 + (arr_27 [i_2] [i_3] [i_2] [i_2] [i_2]))) : var_7))) <= (((-(arr_9 [10] [i_3]))))));
                    }
                    var_33 = var_13;
                }
            }
        }
    }
    var_34 ^= ((!(((-(max(5768355171773313969, 2)))))));
    var_35 = var_4;
    #pragma endscop
}
