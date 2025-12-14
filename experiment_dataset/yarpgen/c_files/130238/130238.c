/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_1] = (min((min((arr_2 [i_0]), (arr_1 [i_0] [i_2]))), (((-(((!(arr_4 [i_0])))))))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_19 *= ((~(((arr_8 [i_1] [i_1] [i_1 - 1] [i_3 - 1]) ? (((var_18 ? 17816 : var_18))) : var_10))));
                                var_20 *= (((arr_11 [i_0] [i_4] [i_2] [i_3] [i_4] [i_4]) << ((min((arr_11 [i_0] [i_4] [i_2] [i_3] [i_3] [i_2]), (arr_11 [14] [i_4] [14] [i_2] [i_3] [i_4]))))));
                            }
                            var_21 = ((-(arr_14 [i_3] [i_3] [i_3] [i_0] [15] [9] [i_3])));
                            var_22 = (((((arr_8 [i_0] [i_1] [i_2] [i_3]) * 1)) <= -var_0));
                        }
                    }
                }
                var_23 = (max(var_23, var_12));
                arr_15 [i_0] [i_1] = (arr_5 [1] [i_1] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 += (((~(((var_5 != (arr_18 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_25 = ((var_15 / (arr_24 [i_5] [i_8])));
                                var_26 = (((~(arr_3 [i_6] [i_9]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_36 [i_5] [i_7] [i_11] = (arr_22 [i_5]);
                                arr_37 [i_5] [i_6] [i_7] [i_10] [i_10] = ((min((((~(arr_31 [i_5] [i_6] [i_7] [i_10] [i_11])))), (min(10830394996091893020, var_14)))));
                                var_27 = (min(var_27, 3599));
                                var_28 += ((-(((var_7 + var_11) ? ((var_13 ? 3590 : var_0)) : ((3596 ? 61936 : (arr_8 [i_5] [i_6] [2] [i_10])))))));
                            }
                        }
                    }

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_29 = (((!((!(arr_10 [i_5] [i_6] [i_7] [7]))))) ? ((var_2 - (min((arr_13 [i_5] [i_7]), (arr_3 [i_5] [16]))))) : ((+(((arr_38 [i_5] [i_6] [i_7] [i_7]) ? (arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_1 [i_7] [i_7]))))));

                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            var_30 = (((!3564) >= ((min((((!(arr_28 [i_12] [i_6] [i_7] [i_6 - 1] [i_13])))), (min((arr_3 [i_6] [i_12]), 3564)))))));
                            var_31 = ((-((61958 ? var_6 : (((arr_14 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5] [i_5]) ? 3590 : (arr_4 [i_7])))))));
                            arr_44 [1] [7] [i_7] [i_12 - 1] [i_13] = (arr_38 [i_5] [7] [i_7] [i_12]);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_32 += ((var_13 ? var_0 : (arr_45 [i_6] [i_6] [i_6 - 1] [i_7] [i_7])));
                            var_33 = (((arr_2 [i_7]) ? ((var_1 - (arr_20 [i_7] [i_7]))) : (arr_39 [i_5])));
                            var_34 = (arr_40 [i_6] [i_6 - 2] [i_7] [i_14]);
                            var_35 = (((arr_39 [i_5]) ? (arr_39 [i_5]) : 61957));
                            var_36 -= ((((arr_26 [i_5] [i_6] [i_7] [i_12] [i_14] [i_12]) ^ 3564)));
                        }
                        var_37 = (((max(var_12, (arr_29 [i_5] [i_5] [i_6] [i_7] [i_7] [i_12] [i_12]))) | ((61937 ? 61945 : (arr_1 [i_7] [i_7])))));

                        for (int i_15 = 3; i_15 < 6;i_15 += 1)
                        {
                            var_38 = (max((arr_31 [i_5] [i_6] [i_7] [i_12] [i_15]), (arr_40 [i_5] [i_6 - 2] [i_12 - 1] [i_15 + 1])));
                            arr_51 [i_15] [i_7] [i_7] [i_7] [i_5] = ((-((((((61958 << (arr_33 [i_5] [i_6] [i_7] [i_12] [i_15])))) || (((arr_4 [i_7]) && var_14)))))));
                            var_39 = (((((((arr_32 [i_6]) ? (arr_2 [i_7]) : 3608)))) >= (((arr_45 [i_6 + 1] [i_6 - 2] [i_7] [i_12 - 1] [i_15 - 2]) - (min(3591, (arr_10 [i_5] [i_6] [i_7] [i_15])))))));
                        }
                    }
                }
            }
        }
    }
    var_40 = ((min((3614 + 3591), (var_1 + var_12))));
    var_41 = (var_16 ? var_10 : var_8);
    #pragma endscop
}
