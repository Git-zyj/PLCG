/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_0 [i_1 - 1] [i_0]);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_11 = ((~((~((-(arr_3 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((-(var_1 > -569355808)));
                                var_13 = ((var_0 < (arr_2 [i_0])));
                                arr_13 [13] [i_1] [i_1] [i_2] [i_2] [i_3] [14] = (max((max((arr_9 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 3]), var_0)), -var_7));
                            }
                        }
                    }
                    var_14 = (max(var_9, (arr_5 [i_0] [i_1] [i_2])));
                    arr_14 [i_1] [5] [i_1] = (i_1 % 2 == zero) ? (((((var_4 ^ (arr_9 [i_1] [i_1] [i_1] [i_1 + 1]))) >> (((arr_12 [i_1] [i_1] [i_2] [i_2] [i_2]) - 9980))))) : (((((var_4 ^ (arr_9 [i_1] [i_1] [i_1] [i_1 + 1]))) >> (((((arr_12 [i_1] [i_1] [i_2] [i_2] [i_2]) - 9980)) - 16027)))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((63 != -63) > -var_10)))));
                                var_16 = (((arr_20 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] [i_7]) << (var_5 + 1146704249)));
                                arr_22 [1] [i_1] [i_5] [i_5 - 1] [i_5] [i_5] = ((var_9 ? 63 : (arr_21 [i_1] [i_6])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_17 = (((75 / var_10) < (arr_24 [i_1 - 3] [i_5 + 3] [i_5] [8])));
                                var_18 = var_0;
                                var_19 = ((!(arr_24 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 3])));
                                var_20 = (max(var_20, (((0 ? 2060827722 : 70)))));
                            }
                        }
                    }
                }
                var_21 = ((var_0 >> (((~var_10) - 7314))));
            }
        }
    }

    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_14] [i_10] = (min(((19626 ? 24844 : -11)), 19626));
                            var_22 = (max(var_22, var_1));
                            arr_44 [i_10] [i_10] = (!65535);
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((~((-var_9 ? 1 : -var_10)))))));
            arr_45 [i_10] = (!(((var_7 ? (arr_30 [i_11]) : 17658518048795353600))));
            arr_46 [16] [i_10] [i_10] = var_4;
        }
        var_24 = (min(var_24, ((((min((arr_27 [i_10] [i_10]), 11)) << (-11 + 27))))));
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        arr_49 [i_15] = ((~((-(arr_47 [i_15])))));
        arr_50 [i_15] = max((((((max(-11, 0))) && (((var_8 ? -75 : 1)))))), (((((86 ? (arr_47 [i_15]) : var_10))) ? ((-(arr_48 [3]))) : 1)));
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    {
                        var_25 = (max(var_25, (((~((var_7 ? (((min(-18, 65535)))) : (min(var_1, (arr_51 [i_15] [2]))))))))));
                        var_26 = (min(var_26, (((var_0 ? var_6 : (((arr_59 [i_16] [i_17 - 2] [i_17 - 2] [i_18]) ? 1 : (arr_59 [i_15] [i_17 - 1] [i_15] [9]))))))));
                        var_27 = (min(var_27, (~1)));
                        var_28 = ((((min(var_3, (arr_57 [i_17 + 2] [i_17 - 2] [i_17 + 1])))) ? ((~(arr_57 [13] [i_17] [i_17 - 1]))) : (arr_57 [10] [i_17] [i_17 + 2])));
                        arr_60 [i_15] [i_16] [i_17] [i_18] = (min(var_10, ((-(max(var_0, (arr_56 [i_16])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
