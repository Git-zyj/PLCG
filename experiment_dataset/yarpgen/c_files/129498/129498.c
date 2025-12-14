/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (min(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = (((min(var_2, (arr_10 [i_0] [i_1] [i_2] [9] [7] [9])))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_0] [3] [i_0] [3] [i_0]))) : (max((arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3]), (arr_10 [i_0] [0] [i_0] [i_1] [i_2] [i_3]))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_16 = (arr_2 [i_4]);
                                var_17 -= (min(((~(min((arr_12 [i_2] [i_4]), (arr_4 [i_2] [i_3] [3]))))), 17722977413762357184));
                                var_18 = (max(((+((-2287990966616802462 ? (arr_8 [i_0] [i_2] [i_3]) : (arr_8 [i_0] [i_1] [i_2]))))), (--17146)));
                                var_19 |= (~553268335);
                                arr_14 [5] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((17722977413762357184 ? (arr_3 [i_1]) : 17157));
                var_20 -= (min(88047707, 2900613147));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_21 = ((!(arr_16 [i_5] [i_5])));
        arr_18 [i_5] = var_5;

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_22 = -30117;
            arr_22 [i_5] [i_6] [i_5] &= ((((17146 ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))) + (arr_21 [i_6])));
            arr_23 [i_6] [i_6] = -88047707;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_23 = (var_3 >= var_1);
            arr_28 [i_7] [i_5] = (--2287990966616802462);
        }

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_24 = (arr_24 [i_8] [i_5]);
            var_25 = (max(var_25, 249));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_5] [i_5] [i_8] [i_8] = ((57 ? -29482 : -17158));
                var_26 = (arr_24 [i_9] [i_5]);

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_27 = var_1;
                    var_28 ^= (arr_17 [i_8] [i_9]);
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_29 = (!(arr_29 [4] [i_9]));
                    var_30 = (((arr_29 [i_9] [i_8]) ? (arr_29 [i_5] [i_11]) : -1574866615348271999));
                    var_31 ^= (arr_30 [i_5]);
                }
            }
            var_32 = (max(var_32, (arr_38 [i_5] [i_5] [i_5] [i_8])));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_33 = (min(var_33, (30646 != 231)));
        arr_43 [13] = ((((-30089 ? (arr_42 [i_12] [i_12]) : var_11)) < (-17149 & var_2)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        var_34 = (arr_45 [i_13]);
        var_35 *= 17149699398584013715;
    }
    var_36 *= ((((((var_7 ? var_8 : var_8))) ? 5608462721411512089 : var_7)));
    #pragma endscop
}
