/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = var_9;
                                arr_14 [i_0] [1] [i_0] [i_0] [i_4] = var_6;
                                var_14 = (max(var_14, 17));
                            }
                        }
                    }
                    var_15 = (max(var_15, (((((1 ? 1 : 1452440788)))))));
                    var_16 &= (arr_3 [i_2]);
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = (((max((arr_11 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_12 [i_5] [i_5] [i_5])))) ? (((arr_11 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) + (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))) : 1);

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_20 [i_5] = 1;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_17 = (min(var_17, (((1588369162 ? (((arr_0 [i_5]) ? var_3 : 0)) : (arr_3 [16]))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_18 ^= (arr_23 [i_5] [4] [i_8] [i_9]);
                            var_19 = 0;
                            arr_28 [i_9] [i_9] |= var_8;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                var_20 = 1588369162;
                var_21 |= 2439737196670528696;
                var_22 = (min(var_22, (var_2 << var_5)));
                arr_31 [i_5] [i_6] [i_10] = ((-1 ? (arr_22 [20]) : 1));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_38 [i_13] [i_13] [i_11] [i_5] [i_13] = var_6;
                            arr_39 [i_5] [i_5] [i_11] [i_5] [i_5] [i_13] = (arr_8 [i_5] [i_6] [i_11] [i_12] [i_11] [i_11]);
                            arr_40 [i_5] [i_6] [i_11] [i_12] [i_13] = -1588369155;
                            arr_41 [i_5] [i_5] [i_6] [i_6] [i_12] [i_13] = (((var_10 & (arr_8 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) & 1);
                        }
                    }
                }
                arr_42 [0] &= (((arr_2 [i_5] [i_5 - 1]) + 18446744073709551615));
            }
            arr_43 [16] [i_6] &= (((((((arr_0 [i_6]) ? (arr_1 [i_5] [18]) : (arr_2 [1] [i_6])))))) - (((arr_32 [4]) ? var_1 : (((max(var_8, 1)))))));
        }
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_23 = ((~(((arr_29 [i_14] [i_14] [i_14] [i_14 + 1]) ? (!var_7) : ((var_2 ? var_1 : var_7))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    arr_52 [7] [i_14] = var_9;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                arr_61 [i_14] = (((arr_24 [i_14] [i_14] [i_14] [i_14] [i_14 + 1] [i_14]) ? (((max((arr_32 [i_14]), (arr_32 [i_14]))))) : var_5));
                                arr_62 [i_15] [i_14] [i_15] [6] [i_15] = var_12;
                                arr_63 [i_16] [i_15] [i_16] [i_16] [20] [i_18] &= ((1 != (((((arr_56 [i_14] [i_16] [i_14] [i_16] [i_14]) != (arr_56 [i_14] [i_16] [i_14] [i_16] [i_14 + 1])))))));
                                var_24 = (((((~(min(var_10, var_0))))) ? (arr_15 [i_17]) : ((((arr_51 [i_14 + 1] [i_14] [i_14 + 1] [i_14]) ? (arr_51 [i_14 - 1] [i_14] [i_14 + 1] [i_14]) : var_8)))));
                            }
                        }
                    }
                    var_25 = ((((arr_59 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_15]) ? (arr_59 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_16]) : (arr_59 [i_14] [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1]))));
                    var_26 = 1;
                }
            }
        }
        var_27 = (min(var_27, (((((arr_22 [i_14]) && (arr_5 [20] [i_14 - 1] [i_14 - 1])))))));
    }
    var_28 += 1005808403;
    #pragma endscop
}
