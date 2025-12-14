/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0 + 2] = (((~-1479861623) / ((min((arr_6 [i_0 + 2] [i_0 + 1]), (arr_6 [i_0 + 2] [i_0 + 1]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_1] [i_3] [i_0] [i_2] [i_1] [i_0] = (min((arr_2 [i_0 + 2]), 244));
                            var_17 = ((8541359044551604086 * var_5) == var_7);
                            arr_15 [i_4] [9] [i_2] [i_1] [i_1] [i_1] [i_0 + 2] = 1;
                        }
                        var_18 = (min((min(((((arr_7 [i_3] [i_2] [i_0 + 1] [i_0 + 1]) + var_9))), (1853646504682995536 - var_16))), ((((max(80, var_16)) + 65523)))));
                        arr_16 [i_0 - 2] [i_2] [i_1] [i_0 - 2] = var_12;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_5] [i_2] [i_2] [i_1] [i_0 + 1] = ((-22 ? -1902898319 : -1902898328));

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_19 = (min(var_19, var_11));
                            var_20 = var_5;
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_21 += (~1);
                            arr_26 [i_7] [i_1] [i_2] [i_1] [8] = (var_4 & 0);
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_22 = (max(var_22, ((max((max(1902898319, var_14)), (((var_16 < var_12) ? var_3 : 35)))))));
                        var_23 = (min(var_23, 35));
                        var_24 &= var_0;

                        for (int i_9 = 3; i_9 < 21;i_9 += 1)
                        {
                            arr_33 [i_9 - 1] [i_8 - 1] [i_2] [i_1] [5] [i_0 + 3] = var_10;
                            var_25 += ((-1902898311 ? 3543689091 : -1392));
                            var_26 = 55175;
                            var_27 = (max((((arr_22 [i_9 - 3] [i_9] [i_9 - 3] [i_9] [i_9 + 1]) ? var_4 : (arr_22 [i_9 - 1] [7] [21] [i_9] [i_9 - 1]))), (arr_22 [i_9 - 3] [i_9] [i_9] [i_9] [i_9 + 1])));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_1] [i_0] = var_6;
                            arr_37 [i_1] [i_1] [i_0 - 3] [i_1] [i_0 - 3] = 4633;
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_11] [i_8] [i_2] [i_1] [i_0] = 22;
                            arr_41 [i_2] [i_1] [i_0] = (min(1902898322, var_9));
                            arr_42 [i_11] [i_8] [i_0 + 3] [i_1] [i_0 + 3] = (241 / 751278205);
                            arr_43 [i_8] [10] [i_8] [i_8] [i_1] [i_1] [i_0] = (((((arr_6 [i_1] [i_0 - 3]) || (arr_21 [i_11] [i_8] [i_8 - 1] [i_2] [i_0 - 3]))) && (((arr_6 [i_2] [i_0 - 3]) && (arr_6 [i_0 - 3] [i_0 - 3])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {
                    var_28 = ((arr_47 [i_14]) ? -40 : var_11);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_57 [i_15] = ((65523 - (1 - 1902898319)));
                                arr_58 [i_16] [11] [i_13] [i_12] [i_13] [i_12] |= ((((min((arr_48 [i_12 + 2] [i_12 + 1] [i_12 + 2]), (arr_48 [i_13] [i_12 + 2] [i_12 + 2])))) <= var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = 213;
    #pragma endscop
}
