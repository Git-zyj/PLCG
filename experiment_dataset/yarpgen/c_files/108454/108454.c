/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = var_3;
                arr_7 [i_0] [4] = (((arr_5 [i_1] [i_0]) ? (((1148417904979476480 ? (arr_4 [i_0] [i_0 + 3] [i_1]) : (arr_4 [i_0 + 3] [i_1] [i_0 + 3])))) : var_6));
            }
        }
    }
    var_17 = var_15;

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_14 [i_4] = (((((((-2048 ? 63488 : 128))) ? ((min(var_8, 2047))) : (var_10 & 1))) > var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = (arr_11 [i_2] [i_3]);
                                var_19 = ((!((max(var_8, (max((arr_8 [3]), 32767)))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_28 [i_2] [i_7] [i_8] = (((((arr_24 [i_8] [i_8 - 1]) ? var_14 : (arr_20 [i_8] [i_9]))) & (((arr_21 [i_7 - 1] [i_7]) ? var_6 : ((max((arr_22 [i_2] [i_7] [i_9]), (arr_18 [i_7]))))))));
                        arr_29 [i_2] [1] [1] [i_8] [i_2] = (min(((~(arr_13 [i_8 - 1] [13] [i_8]))), (((255 * (arr_24 [i_8] [i_8 - 1]))))));
                        arr_30 [i_9] [i_9] [i_8] = var_10;
                        var_20 = ((-((((var_8 == (arr_8 [i_7]))) ? (((arr_25 [i_7] [i_7] [i_8]) ? var_7 : var_2)) : (arr_17 [i_2] [i_7 + 1])))));
                    }
                }
            }
        }
        arr_31 [i_2] = ((0 ? (((max(115, 7)))) : (((arr_27 [i_2] [i_2] [i_2] [i_2]) ? (var_3 / var_3) : (max((arr_20 [0] [3]), var_15))))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        var_21 = ((!((((((((arr_25 [i_10] [i_10] [i_10]) >= -1)))) - (arr_17 [i_10] [i_10]))))));
        var_22 = (~var_8);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    arr_40 [i_11] [10] [i_12] = (17458 - (arr_15 [i_11] [18] [18] [i_12]));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_46 [i_12] [i_12] [i_13] [i_13] [3] [i_13] = (~342186260);
                                var_23 = ((!(arr_21 [i_12] [i_13])));
                                var_24 = ((~(arr_26 [i_11] [i_12] [i_13])));
                                var_25 = (((!(arr_20 [i_11] [i_11]))) ? 6 : (arr_45 [22] [i_12] [i_13]));
                            }
                        }
                    }
                    arr_47 [i_12] [21] [14] [i_13] = 3345809262276321155;
                }
            }
        }
        arr_48 [3] [17] = (arr_33 [i_11]);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_55 [i_11] [i_11] [i_11] [i_16] = (((arr_9 [i_16]) ? (arr_9 [i_11]) : (arr_9 [i_18])));
                        arr_56 [i_16] [i_16] [i_16] [i_18] = var_1;
                        arr_57 [i_16] = 647169928;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 16;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            {
                var_26 = (arr_21 [i_19 - 1] [i_20]);
                var_27 = var_5;
                var_28 = (max(var_28, (((max((max((arr_43 [i_19] [i_20] [i_20] [i_20] [i_20] [i_20]), var_15)), ((((arr_59 [2]) ? (arr_15 [i_19] [i_19] [i_20] [i_20]) : (arr_6 [i_19]))))))))));
                arr_62 [i_19] [i_19] = ((((!var_4) - (arr_3 [i_19]))));
            }
        }
    }
    #pragma endscop
}
