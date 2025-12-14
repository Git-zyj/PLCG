/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_3 + 1] [i_1] [i_1] [i_1] [i_0] [1] [1] = var_8;
                            var_20 ^= arr_11 [i_0] [i_1] [i_0] [i_3 + 1];
                            arr_16 [i_1] = ((+(((((arr_9 [i_0 + 1]) << var_6)) ^ (arr_7 [1] [i_1] [1])))));
                        }
                    }
                }
            }
            var_21 = (min(((1 - (arr_13 [1]))), ((-(arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_1])))));
            var_22 = (min(((-(arr_4 [i_1] [i_0 + 1]))), 1));
        }
        var_23 = (min(var_23, (((1 > 1) && (((var_11 ^ ((min((arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [1] [i_0]), (arr_4 [i_0 + 1] [i_0 + 1])))))))))));
    }
    var_24 = (max(var_24, -var_0));
    var_25 = min(var_9, 0);
    var_26 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_27 = (min(var_18, (((1 | var_4) ? (1 * var_9) : ((((arr_6 [i_5] [1]) > var_12)))))));
                arr_21 [i_5] [i_6] = ((((-((((arr_17 [i_6] [i_5]) > (arr_5 [1] [1] [i_5])))))) * ((((((arr_14 [1] [1]) < (arr_0 [1] [1])))) * ((((arr_7 [i_5] [i_5 + 1] [i_5]) == 1)))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = (min(var_28, ((min((((arr_22 [i_5 + 1]) ? var_8 : (arr_22 [i_5 + 1]))), ((min((arr_4 [i_5 + 1] [i_6]), (arr_4 [i_5 + 1] [i_6])))))))));
                    arr_24 [i_5] [i_5] = ((1 ? 1 : 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 = (min(((min(0, 1))), ((var_6 ? (arr_11 [1] [i_6] [i_6] [i_5 + 1]) : (arr_13 [i_5 + 1])))));
                                var_30 -= -var_7;
                                arr_30 [i_7] [0] [i_7] [i_7] [i_7] &= ((-(((arr_25 [1] [i_9] [i_9] [1]) ? ((min((arr_4 [1] [i_9]), (arr_12 [i_6] [i_6] [i_6] [1] [1] [i_8] [i_7])))) : (arr_11 [1] [i_5] [i_7] [i_8])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_31 -= var_16;
                                var_32 = (min((((((min(1, (arr_5 [i_5 + 1] [i_5] [i_5 + 1])))) == -var_19))), ((1 << ((((~(arr_18 [i_10]))) + 16))))));
                                arr_39 [1] [i_6] [i_6] [0] [i_7] [1] [i_11] |= (arr_37 [i_5]);
                                arr_40 [i_5] [1] [i_5] [i_11] = ((-((~(!var_15)))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_44 [i_5] [i_6] [i_6] [i_6] = (!(arr_10 [i_12] [i_12] [i_5] [i_6] [i_5] [i_5]));
                    arr_45 [i_6] [1] [i_6] &= (((arr_43 [i_5 + 1]) ? ((min((arr_6 [i_5 + 1] [i_5 + 1]), (arr_6 [i_5 + 1] [i_5 + 1])))) : ((min((arr_6 [i_6] [i_5 + 1]), (arr_26 [i_5 + 1] [1] [i_12] [i_5 + 1] [i_5] [i_5 + 1]))))));
                    var_33 = (~var_18);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_34 = (min(var_34, ((min((min((arr_37 [i_6]), (((arr_0 [i_5 + 1] [i_5 + 1]) + (arr_13 [i_5]))))), (arr_49 [i_5 + 1] [i_5 + 1] [i_13] [i_14] [i_14]))))));
                                var_35 += (1 << 1);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_36 = ((var_19 - (((arr_26 [i_5] [i_6] [1] [i_16] [i_16] [1]) ? (arr_27 [i_5] [i_5] [i_15] [i_15] [i_16]) : 1))));
                            arr_58 [i_6] [i_16] [i_16] [i_6] [i_5] = var_1;
                            var_37 = (((((((arr_48 [i_16] [1] [i_6] [1] [1]) ? var_10 : 0)))) << ((min(1, 0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
