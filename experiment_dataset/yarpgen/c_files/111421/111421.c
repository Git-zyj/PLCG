/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((max((var_8 + var_12), -var_4)) + var_11)))));
    var_14 ^= var_1;
    var_15 = (~var_12);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] |= (((-(arr_2 [i_0]))));
        var_16 = -var_6;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_9 [i_0] [i_1] [i_1] = 3710489143413860682;

            /* vectorizable */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_17 = (min(var_17, ((((((arr_3 [i_0]) ? (arr_1 [14]) : (arr_5 [i_0]))) / (arr_5 [i_2 + 2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((!(arr_7 [i_2 + 2] [i_2 + 1] [i_3]))))));
                            var_19 = ((-((-(arr_11 [13] [i_1])))));
                            var_20 = ((-(arr_13 [i_0] [i_0] [i_2 + 2])));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_22 [i_5] [i_2 + 2] [i_1] [i_0] [i_0] [i_0] = ((~(var_0 && var_5)));

                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        var_21 += -var_1;
                        var_22 = var_4;
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((40 || (arr_6 [12])))) : var_1));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_23 = (min(var_23, ((((((var_3 & (arr_6 [i_0])))) ? (var_2 | var_2) : (((arr_28 [i_0] [i_1] [12] [i_0] [i_1] [i_1]) & var_0)))))));
                        var_24 = (max(var_24, (((var_1 ? ((var_3 >> (var_10 - 4220222682799028392))) : (((arr_16 [i_0] [i_5] [i_7] [i_5]) ? var_3 : var_3)))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_11 & (arr_27 [i_7] [i_5] [i_0] [13] [i_1] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = (((arr_12 [11] [11] [16] [16]) ? (arr_18 [i_0] [i_1] [i_2] [i_5] [i_2 - 1] [9]) : (arr_12 [i_0] [i_1] [i_2] [11])));
                        var_26 = ((0 ? ((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1))) : (arr_8 [i_8])));
                        var_27 = -var_4;
                        var_28 = ((-(arr_0 [i_2 + 2] [i_1])));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_29 ^= (((var_0 || 123) >= (!0)));
                        var_30 = (((arr_37 [16] [i_1] [i_2 + 1] [16]) * (var_11 > 8850)));
                        arr_39 [i_0] [i_0] [i_2 - 1] [i_5] [i_9] = (((((-(arr_10 [i_1] [i_5] [15])))) ? (((arr_14 [i_9] [i_5] [i_2] [i_1]) & var_7)) : (!var_2)));
                    }

                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_31 = var_12;
                        var_32 = var_5;
                        arr_42 [i_10] [i_5] [2] [i_1] = (((arr_2 [i_2 + 2]) ? ((~(arr_30 [i_0] [3] [3] [i_5] [i_10]))) : -var_1));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_33 = ((var_4 / (69 || var_12)));
                        var_34 = (((arr_40 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 1]) || var_10));
                    }
                    arr_47 [i_5] [i_2] [i_1] [i_0] = ((1023 ? (arr_14 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2]) : (arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2])));
                }
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    var_35 -= -var_7;
                    arr_50 [2] [2] = ((var_1 ? (var_11 & var_1) : var_8));
                    arr_51 [10] [10] [i_1] [16] [i_12 + 1] = (((arr_8 [i_2]) - (-24953 ^ var_6)));
                    var_36 -= 107;
                }
                var_37 = ((-(arr_21 [1] [1])));
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_55 [i_13] [i_13] = (((var_10 + 107) % ((min((var_6 || var_7), (~var_0))))));
            var_38 = (min((((1761335053 ? (arr_5 [i_0]) : (!var_1)))), (((~var_11) ? -24953 : (min(var_10, var_2))))));
            arr_56 [i_0] [i_13] = var_9;
            var_39 = (max((((~(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), ((((var_0 ? 0 : var_11)) % var_5))));
            arr_57 [i_13] [i_13] = ((~(min((var_8 | var_4), ((70 ? var_9 : 1134012887757631841))))));
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_40 = (((arr_58 [i_14]) - (!var_1)));
        var_41 += (((((-var_5 * (((!(arr_59 [i_14] [i_14]))))))) % ((-(((arr_60 [i_14]) ? var_12 : var_8))))));
    }
    var_42 = ((-((((((-2147483647 - 1) ? var_4 : var_7)) >= ((max(var_8, var_5))))))));
    #pragma endscop
}
