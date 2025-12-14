/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (((((109 | ((var_12 ? 149 : var_4))))) ? (((((var_7 ? var_1 : var_10))) ? (var_5 ^ 107) : ((var_7 ? var_0 : var_12)))) : (((var_12 ? var_9 : ((var_8 ? var_7 : var_5)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = 95;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = min((((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1]))), 4163490132846749014);
            arr_6 [i_0] [i_1] [i_1] = ((((((arr_3 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : var_8))) * ((var_11 * ((var_8 ? var_12 : var_7))))));
            var_17 = arr_4 [i_1];
        }
        var_18 = var_6;
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_19 = ((~(((min((arr_1 [i_2]), var_1)) & ((var_8 ? (arr_5 [i_2] [9]) : (arr_3 [i_2])))))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 |= ((var_1 ? ((min(((((arr_9 [i_2]) ? 24576 : var_3))), ((var_1 ? var_1 : (arr_9 [3])))))) : ((((min(var_3, 1682977589))) ? (~var_5) : (((min(98, var_7))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_19 [i_2] = -7755614721390966376;
                            var_21 = (((!40652) ? ((((-146 == ((min(72, (arr_18 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] [i_6])))))))) : ((var_7 ? (var_11 >= -30281) : (arr_5 [i_2 + 1] [i_3])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 ^= (((((-60 && var_5) ? (arr_20 [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1]) : (((arr_9 [i_4]) ? -1 : -7755614721390966376)))) << (min((arr_4 [i_4]), (min(var_3, var_12))))));
                            arr_24 [i_2] [i_2 - 1] [i_2 - 1] [i_3] [3] [i_5] [i_2] = 44770;
                            var_23 += (((((arr_12 [i_2] [i_2] [i_2] [i_2 + 1]) / var_11))) ? (min((((var_10 ? (arr_21 [i_7] [i_7] [i_7] [i_7]) : var_8))), (arr_14 [i_2 - 1] [i_2 - 1] [i_5] [i_3]))) : (((((-(arr_11 [7] [0]))) / (var_3 + 1263201136313440766)))));
                            arr_25 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_7] [i_4] [i_7] = ((-var_1 % ((~(arr_17 [i_5] [7] [i_4] [i_5] [i_2 - 1] [i_5] [i_7])))));
                            arr_26 [i_2] = ((((arr_3 [i_2 - 1]) == ((-(arr_17 [i_2] [i_3] [i_3] [i_5] [i_5] [i_3] [i_7]))))) && var_4);
                        }
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            var_24 = (((39 ? var_10 : -1682977589)));
                            arr_29 [i_2] [i_2] = var_1;
                            arr_30 [i_8] [i_8 + 1] [i_5] [i_2] [i_3] [i_2 + 1] [i_2 + 1] = var_7;
                        }
                        arr_31 [i_2] [i_3] [i_4] [i_2] = var_6;
                        arr_32 [i_5] [i_2] = ((-((min(var_8, var_0)))));
                        var_25 &= var_2;
                    }
                }
            }
            arr_33 [i_2] [i_2] = ((((var_10 + (min(var_2, (arr_22 [i_2] [i_2] [i_2 - 2] [i_2] [i_2]))))) <= (~var_0)));
        }
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_26 = -var_7;
                arr_40 [i_2] [i_9] [i_2] [i_9 - 2] = ((-var_7 ? var_9 : (min(((min(var_3, var_0))), -7755614721390966376))));
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    {
                        var_27 = (min((((arr_43 [i_2]) ? var_4 : var_5)), 109));
                        var_28 = ((((((((~(arr_38 [i_11])))) % -9000139882249672046))) ? (min((((arr_14 [i_2 + 1] [i_2 + 1] [i_11] [i_2]) % -30)), (var_10 ^ var_10))) : var_2));
                        var_29 = (arr_21 [i_12 + 1] [i_11] [i_9] [i_2]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 8;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    var_30 = (min((~107), (min((arr_37 [i_2] [i_2] [i_13 - 2] [i_13]), (arr_34 [i_2] [i_13])))));
                    arr_50 [i_2] [i_13 + 2] [i_13 - 1] = (((((((var_10 ? var_1 : 39))) == var_9)) ? var_3 : var_6));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_15 = 3; i_15 < 10;i_15 += 1)
    {
        var_31 -= (((arr_54 [6]) | var_1));
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 11;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 11;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                var_32 = 8854641177296862697;
                                var_33 |= ((var_4 ? (arr_59 [i_15 + 2]) : 1));
                                var_34 = (-((var_10 << (var_5 + 1082621837262800073))));
                            }
                        }
                    }
                    var_35 = ((var_0 ? (arr_63 [i_15 + 1]) : (arr_63 [i_15 - 2])));
                    var_36 = (((arr_56 [i_15] [i_16]) || (arr_56 [i_15] [i_17 + 1])));
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                arr_71 [i_15] [i_16 - 2] [i_17 - 1] [i_20] [i_15] = (~13768);
                                var_37 = (((arr_65 [i_16 + 1] [i_15] [6] [i_17 - 2] [i_20 + 1]) ? (arr_56 [i_15 + 2] [i_17 + 1]) : 12695));
                                var_38 = -var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = var_2;
    #pragma endscop
}
