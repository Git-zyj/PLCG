/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((arr_3 [i_0 + 2]) && (~786210555))) ? ((((((arr_4 [i_0] [i_1]) >= var_5)) ? (arr_4 [i_0] [i_0 + 1]) : (arr_2 [i_1] [i_1] [i_0 + 1])))) : (max((arr_0 [i_0 + 2] [i_0 - 1]), 72057594037927936))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (max(((~(arr_7 [i_2 - 1] [i_1] [i_0 + 3] [i_2]))), ((~(arr_0 [i_2 + 2] [i_0 + 2])))));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_2] [i_3] = var_10;
                            var_13 |= ((((((!(((0 ? 107 : (arr_6 [i_3 - 3] [0] [i_2] [0])))))))) ^ (max((arr_11 [i_0 + 1] [i_0 - 1]), var_3))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_0] [i_5] = ((((arr_14 [12] [1]) * (((arr_2 [i_0] [i_1] [i_0]) - var_2)))));
                            var_14 = var_0;
                        }
                        var_15 += (((-((0 ? -3734200281505052529 : (arr_9 [i_0] [i_2] [i_2]))))));
                        var_16 = (((((max(var_11, (arr_2 [i_0] [2] [i_3]))))) ? (max((((var_12 << (87 - 80)))), (max(var_1, 829649470)))) : 0));
                        arr_17 [i_2] [i_3] [i_2 + 3] = ((var_3 / ((max(var_4, (arr_3 [i_0 - 1]))))));
                        var_17 = (((((536805376 + (arr_6 [6] [i_1] [i_2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_18 = (min(var_18, ((((!(arr_18 [i_0] [i_0] [12] [i_0])))))));
                        var_19 = (((var_10 + var_7) / (arr_14 [i_0 + 2] [i_0 + 1])));
                        var_20 = (max(var_20, -var_5));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_23 [10] [10] [i_2] [i_2] [i_2] = var_5;
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_7] = ((arr_21 [i_6 - 2]) / 2733853059905793875);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_21 = ((((arr_4 [i_0] [i_6]) ? 11 : (arr_27 [i_0] [4] [i_6 - 1]))));
                            var_22 = (arr_7 [i_0 + 2] [i_2 + 2] [i_2 + 2] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_23 = ((((((arr_18 [i_9] [i_2] [i_0] [i_0]) ? 1 : (arr_26 [i_0] [i_1] [i_9])))) + (arr_19 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0])));
                            var_24 ^= (((arr_7 [i_6] [i_6 + 2] [i_2 + 2] [i_2 + 2]) ? (arr_28 [1] [1] [1] [i_6] [i_1] [i_2] [i_1]) : (!-1)));
                            arr_30 [i_0] [i_2] [i_9] = arr_9 [i_0] [i_0] [i_2];
                        }
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        arr_33 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [10] = ((((arr_22 [3] [3] [3]) + 2147483648)));
                        var_25 ^= ((((((max(14853468964787146017, var_6)) + ((max(var_8, (arr_11 [i_2] [i_1]))))))) ? ((max(var_7, (arr_27 [i_10 + 1] [i_1] [i_0 + 2])))) : (arr_14 [i_10] [i_2])));
                        var_26 = (min(var_26, ((((((((23257 ? 59 : 9223372036854644736)) & (var_6 + 14600097828081635370)))) ? ((-(((arr_28 [i_10] [i_10] [7] [i_1] [i_1] [i_0] [i_0]) ^ -14)))) : (arr_14 [i_2 - 1] [i_0 + 3]))))));
                    }
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        var_27 = (((!var_11) ? (1563132441 != var_1) : ((((max(3296491010, var_10))) % 16373675387454421177))));
                        var_28 = (min(var_28, (arr_20 [i_11] [i_11] [i_11] [i_11] [i_11])));
                        var_29 = (max(var_29, 1));
                        var_30 ^= (arr_20 [i_0] [i_1] [i_2] [i_0] [i_0]);
                    }
                }
                var_31 ^= ((((((var_8 & var_7) ? (!7157435418005270845) : var_0))) ? var_11 : ((((!(((arr_35 [i_1]) != var_4))))))));
            }
        }
    }
    var_32 = ((~((-var_2 / ((860931569 << (var_5 - 49770)))))));
    #pragma endscop
}
