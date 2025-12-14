/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_10 = (max(var_10, ((((((arr_1 [17]) >> (var_3 - 174135941))) | var_1)))));
                    var_11 = (max(var_11, (((arr_3 [i_1 + 3] [i_2 - 1]) ? (!var_1) : (((!(arr_2 [3] [3]))))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_12 = (((arr_2 [5] [i_1 + 3]) ? var_8 : (((var_4 || (arr_3 [i_0] [i_1 + 1]))))));
                    var_13 -= (max(var_6, ((-10580 ? -1267616729 : 2437806612))));
                    var_14 = (((((var_5 ? ((var_3 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1 - 1] [i_1 + 1]))) : (var_9 <= var_5)))) ^ ((var_3 ? -2437806612 : 2437806597))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = (max(var_15, ((((((var_3 << (55 - 40)))) ? (((arr_3 [i_3] [i_4]) ? (arr_4 [i_0]) : (arr_8 [i_4]))) : ((((arr_2 [17] [i_1]) ? var_5 : var_3))))))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_16 -= var_6;
                            var_17 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_18 = (((arr_9 [i_3] [i_3] [i_3] [i_3]) ? (var_5 <= var_4) : (((arr_2 [i_3] [i_5]) ? (arr_7 [17]) : var_8))));
                            var_19 = (min(var_19, (92 == 1857160699)));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_20 = (var_9 ? (arr_12 [i_4]) : (arr_3 [i_0] [i_1]));
                            var_21 = var_2;
                            var_22 *= (((((2437806597 << (6057 - 6033)))) ? (((var_6 == (arr_8 [i_0])))) : (~20)));
                            arr_18 [i_0] [i_4] [i_0] [i_0] = var_3;
                        }
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            var_23 = var_5;
                            var_24 -= ((var_1 ? (arr_6 [i_1] [i_4] [i_7 + 4]) : -var_4));
                            var_25 = (3655784777 <= 13634181224540134741);
                            arr_22 [i_0] [18] [i_4] = ((7 ? (1857160700 >= -1521050944) : (52595829 * 0)));
                            arr_23 [15] [8] [i_4] [1] [10] [i_7] = ((((((arr_9 [3] [i_1] [3] [i_1 + 2]) ? var_0 : (arr_20 [i_0] [5] [i_3] [12] [15])))) ? ((var_7 ? (arr_9 [i_0] [i_3] [i_4] [16]) : var_3)) : (arr_0 [i_7 + 1])));
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_26 -= (max(((var_5 << (((arr_5 [i_0] [i_0] [i_8]) - 3248211960)))), (((arr_21 [i_1] [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1]) ? var_3 : (arr_14 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [18])))));
                    var_27 = (arr_17 [10] [10] [1] [i_0] [1] [i_0]);
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_28 = ((((var_8 ? (arr_20 [i_0] [i_0] [i_9] [16] [3]) : (arr_24 [i_0] [i_0] [10] [i_9])))) ? var_1 : (arr_12 [i_9]));

                    for (int i_10 = 4; i_10 < 18;i_10 += 1)
                    {
                        var_29 = (max(var_29, (((arr_3 [i_1] [3]) ? var_1 : (arr_21 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 4] [i_10 - 3])))));
                        var_30 = var_2;
                    }
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        var_31 *= var_2;
                        var_32 = var_0;
                    }
                }
                arr_35 [8] = ((((((-1 | 18598) ? var_6 : -var_9))) ? (var_1 & var_9) : (((-(max((arr_24 [i_0] [2] [i_0] [17]), var_4)))))));
            }
        }
    }
    var_33 = ((var_8 + ((~(!var_2)))));
    var_34 = ((((!(var_5 <= var_8))) ? ((~((var_6 ? var_4 : var_5)))) : (max(((max(var_8, var_6))), (max(var_8, var_1))))));

    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        arr_38 [i_12] = ((((((((arr_28 [1]) ? (arr_20 [i_12] [i_12] [i_12] [i_12] [i_12]) : var_6))) ? -var_9 : (((0 ? 3633944177 : -9931))))) | (((((((arr_3 [i_12] [9]) ? var_7 : (arr_32 [0] [i_12] [i_12] [i_12])))) ^ var_3)))));
        arr_39 [i_12] [i_12] = (((arr_3 [i_12] [i_12]) + ((((max(var_7, var_6))) + (arr_37 [i_12])))));
        var_35 = ((1 ? 18446744073709551615 : 3));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 7;i_14 += 1)
            {
                {
                    arr_45 [i_12] [i_13] [6] [i_13] = ((((!(((var_5 ? var_0 : var_4))))) ? (arr_2 [16] [i_13]) : (arr_36 [i_13] [i_14])));
                    var_36 = (min(var_36, var_5));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_37 = (arr_13 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
        var_38 = ((~((~(arr_28 [i_15])))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_39 = (min(var_39, ((-(var_6 == var_6)))));
        var_40 = var_6;
    }
    #pragma endscop
}
