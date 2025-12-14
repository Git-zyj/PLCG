/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((((var_3 ? var_6 : var_4))), var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_10;
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (((1 && (arr_2 [i_1 - 1]))) || (arr_2 [i_1 + 2]));
        var_15 = ((min((~var_2), var_12)) <= (((max((arr_7 [i_1]), var_1)) * var_11)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = ((~((var_12 / (arr_22 [i_3 + 1] [i_3 + 1] [i_3] [i_3])))));
                                var_17 = (min(var_17, (1 == 1)));
                                arr_23 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = (arr_12 [i_2] [i_3]);
                                var_18 = ((((max((arr_14 [i_3 + 1] [i_3] [i_3 + 1]), (arr_14 [i_2] [i_3 + 1] [i_3 + 1])))) || (((var_12 ? (arr_14 [i_3] [i_3] [i_3 + 1]) : (arr_14 [i_3] [i_3 + 1] [i_3 + 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_28 [i_3] [i_3] [i_7] [i_8 + 1] = (~-var_0);
                            var_19 = (var_10 - var_8);
                            var_20 = (((~(arr_24 [i_8 + 3] [i_3] [i_3 + 1]))));
                            arr_29 [i_2] [i_2] [i_3] [i_8] = (arr_15 [i_2] [i_2] [i_2]);
                            var_21 = var_7;
                        }
                    }
                }
                var_22 = ((arr_4 [i_3 + 1] [i_3]) * ((min((arr_4 [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3])))));
                arr_30 [i_3] [i_3] = (!1);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_37 [i_2] [i_2] [i_3] = ((1 ? ((1 ? 1 : 1872529611)) : (min((arr_24 [i_2] [i_2] [i_9]), (arr_14 [i_2] [i_3] [i_3])))));

                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                var_23 &= (((min(var_4, (min(var_4, var_8)))) > (arr_32 [i_2] [i_3 + 1] [i_10])));
                                var_24 += var_3;
                            }
                            var_25 = (min(var_25, ((min((min((min(var_3, (arr_14 [i_2] [i_3 + 1] [i_9]))), 1)), -2033078730)))));
                            var_26 = (min(((var_3 || (min((arr_34 [i_3] [i_9] [i_3 + 1] [i_3]), 1)))), ((((var_6 && (arr_32 [i_2] [i_3] [i_3]))) && ((max(var_8, -1872529612)))))));
                            var_27 = (~((-(max((arr_1 [i_2]), var_3)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 4; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_28 = (var_0 > var_3);
                                var_29 = (((arr_25 [i_12 + 1]) ? (arr_5 [i_12 - 2]) : (arr_46 [i_12 - 4] [i_13] [i_16 + 1])));
                                arr_56 [i_12 + 1] [i_13] [i_14] [i_15] [i_16] [i_12 - 1] = max((((arr_18 [i_16] [i_16 - 1] [i_14] [i_12 - 3]) ? var_7 : 1)), (min(1, (min(var_12, var_5)))));
                                var_30 = (((((((arr_51 [i_12 - 1] [i_13] [i_12 - 1] [i_12]) == 142922179)) ? var_11 : (((arr_13 [i_13] [i_15]) & var_8))))) ? (((((var_6 ? var_9 : 1))) ? -1 : ((-(arr_41 [i_12 - 1]))))) : ((((arr_12 [i_16 + 3] [i_12 - 4]) && (arr_12 [i_16 + 2] [i_12 - 4])))));
                                arr_57 [i_13] [i_13] [i_14] [i_15] [i_16] = (+((((arr_7 [i_16 - 1]) || var_8))));
                            }
                        }
                    }
                    var_31 = var_6;

                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_32 = (!((min((arr_38 [i_12 - 4] [i_14] [i_17 - 1] [i_17 - 1] [i_17]), (arr_35 [i_17 - 1] [i_17] [i_13] [i_17 - 1])))));
                        arr_60 [i_17 - 1] [i_13] [i_13] [i_12 - 3] = (((min((arr_13 [i_17 - 1] [i_13]), (arr_13 [i_17 - 1] [i_13])))) ? (((var_6 && (arr_13 [i_17 - 1] [i_13])))) : ((((arr_59 [i_17 - 1] [i_13] [i_12 - 1] [i_13]) < (arr_59 [i_17 - 1] [i_13] [i_12 - 4] [i_17])))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_33 = (min(var_33, ((max(var_12, var_8)))));
                                var_34 ^= (~((((arr_41 [i_12 + 1]) >= (arr_41 [i_12 - 4])))));
                                arr_65 [i_13] [i_19] [i_18 + 1] [i_13] [i_14] [i_13] [i_13] = ((((~(arr_46 [i_12 - 3] [i_13] [i_18 - 4])))) ? (((!(arr_10 [i_12 - 4])))) : var_2);
                                var_35 += (((max(1, var_1))) ? var_0 : (max((min(var_4, (arr_24 [i_12 - 1] [i_13] [i_14]))), (arr_12 [i_12 - 1] [i_12 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = var_4;
    #pragma endscop
}
