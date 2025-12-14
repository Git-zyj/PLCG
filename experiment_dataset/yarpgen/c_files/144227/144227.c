/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_16));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (min((((var_5 >= var_9) * ((var_7 + (arr_0 [i_0]))))), var_4));
        arr_2 [i_0] = (((1692505515 ? ((var_3 ? -2406941489298395009 : var_1)) : ((((!(arr_1 [i_0]))))))) + (((var_1 * (arr_0 [i_0])))));
        arr_3 [i_0] = (min(((var_15 ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) + var_9))));
        var_20 = (max(var_20, var_0));
        var_21 = (((arr_1 [i_0]) << (var_13 - 14131109)));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_11 [i_1 - 2] [i_2] [i_1 - 2] = 1138368853413879335;
                    var_22 = ((var_15 ? var_10 : ((min(var_9, (!var_6))))));
                }
            }
        }
        var_23 = ((((((231745294 / var_16) ? (arr_9 [i_1 + 3] [i_1 + 2]) : ((var_2 ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1 + 3] [i_1])))))) / ((var_15 ? var_5 : (((arr_5 [i_1 - 1] [i_1 - 1]) ? 4748753326714112564 : var_11))))));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_18 [i_1] [i_4] [i_4] [i_5] = ((((((!(arr_4 [i_1]))) || (arr_13 [i_1 + 1]))) ? ((var_3 ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1]))) : (((((arr_14 [i_5]) && (((60388 ? var_7 : var_11)))))))));
                arr_19 [i_5] = (((1 ? var_2 : var_6)) >> (((!((min((arr_7 [i_5] [i_1] [i_1]), 1)))))));
                var_24 = (max(var_24, (arr_9 [i_4] [i_5])));
            }

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                arr_23 [i_4] = (((((-2406941489298395009 + 9223372036854775807) >> (((arr_16 [i_1] [i_1 + 1] [i_1 - 2] [i_6 - 1]) - 41943))))) ? -1 : (((arr_13 [i_6 + 1]) << (var_14 - 16936283948787220875))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_25 = ((!((((arr_10 [i_1 + 1] [i_1 + 3] [i_1 + 1]) | (arr_17 [i_1 + 1] [i_1]))))));
                            var_26 ^= var_10;
                        }
                    }
                }
                var_27 = (arr_13 [i_1 + 1]);
            }
        }
        var_28 = 65535;
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_29 = (arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 1]);
        var_30 = ((var_14 ? (((arr_24 [i_9] [i_9 - 1] [i_9 - 1] [i_9]) ? (arr_10 [i_9] [i_9 - 1] [i_9 - 1]) : var_0)) : (var_4 - var_4)));
    }
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        var_31 = (min(((var_10 ? var_10 : var_1)), var_12));
        arr_36 [i_10] = (arr_24 [i_10] [i_10] [i_10] [i_10]);
        var_32 = ((~(var_1 ^ 2145008289)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 7;i_12 += 1)
            {
                {
                    var_33 = (((((~(arr_20 [i_10 - 2] [i_12 + 1])))) ? (var_3 / var_14) : (((var_3 ? var_15 : (arr_20 [i_10 + 1] [i_12 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            {
                                var_34 = ((((var_5 ? 65535 : ((-2145008289 ? var_12 : (arr_42 [i_11] [i_12] [i_13]))))) != -var_15));
                                var_35 = (max(var_35, (((((((arr_15 [i_13 - 1] [i_13 + 3] [i_12]) ? (arr_15 [i_13] [i_13 - 1] [i_11]) : var_0))) ? -var_9 : var_11)))));
                            }
                        }
                    }
                    var_36 = var_17;
                }
            }
        }
    }
    var_37 = (max(var_37, var_15));
    #pragma endscop
}
