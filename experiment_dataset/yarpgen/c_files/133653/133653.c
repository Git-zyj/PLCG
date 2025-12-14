/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max((min((arr_1 [i_0]), (arr_0 [i_0]))), ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (((arr_3 [i_0] [i_1]) ? ((-1 ? var_4 : var_4)) : (((var_8 / ((var_0 * (arr_6 [i_2] [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((min((min((((!(arr_0 [i_4])))), 7)), var_7)))));
                                var_16 |= (min((arr_5 [i_0]), 2));
                                var_17 = (-31 != 0);
                            }
                        }
                    }
                    var_18 = ((-(10 + 255)));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (max((min(((var_0 ? var_3 : (arr_9 [i_2] [i_2] [i_5]))), (((arr_2 [i_1] [i_1] [9]) ? var_6 : (arr_5 [i_0]))))), (min((min((arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_2] [i_2] [i_2]))), (max(var_6, (arr_9 [i_2] [i_1] [i_0])))))));
                        var_20 = (arr_12 [i_0] [1] [1] [i_5] [i_5] [i_5]);
                        var_21 = (0 <= var_4);
                        var_22 = arr_5 [i_0];
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_23 = (((!14106) ? (arr_0 [i_0]) : (arr_10 [i_0] [i_0] [i_2] [15] [i_0])));
                            var_24 = (arr_7 [i_0] [i_2] [i_2]);
                            var_25 = ((-4 ? var_10 : (((-23 ? (arr_0 [i_0]) : 190)))));
                            var_26 = (arr_21 [i_0] [i_1] [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_27 = (min((((var_6 != (arr_4 [i_0])))), ((~(arr_4 [i_0])))));
                            var_28 = var_9;
                        }
                        var_29 = (min((((-3 ? 85 : 0))), ((1 ? (arr_3 [i_1] [i_2]) : (arr_6 [i_2] [i_6] [2])))));
                    }
                }
            }
        }
        arr_25 [i_0] = (min((((max((arr_8 [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))), (min(((min((arr_18 [i_0] [i_0] [i_0]), (arr_17 [i_0] [i_0] [14] [i_0] [1])))), (((arr_24 [i_0] [i_0] [13] [i_0] [i_0]) ^ (arr_2 [i_0] [i_0] [i_0])))))));
        var_30 = (min((arr_18 [i_0] [i_0] [i_0]), ((~(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_31 = (max(var_31, ((min(179, -1)))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                {
                    var_32 = ((((((arr_32 [i_9]) ? ((var_6 ? 1 : -361047458)) : var_0))) == var_5));
                    arr_35 [i_10] [i_10] = (arr_3 [i_10 + 1] [i_11 - 1]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_43 [4] [i_12] [i_13] [i_13] = ((((-(((arr_0 [i_9]) ? var_0 : var_5)))) | (((~((((arr_7 [i_13] [i_13] [i_12 - 1]) < (arr_26 [i_9])))))))));
                        var_33 = ((var_8 ? var_2 : 17869));
                        arr_44 [i_9] [i_13] [i_13] [i_13] = (arr_31 [i_9] [i_12 + 1]);
                        arr_45 [i_9] [i_9] [i_9] [i_13] [i_9] [i_9] = (((arr_36 [i_14]) ? var_7 : ((((var_6 ? (arr_13 [i_14] [i_13] [i_14] [i_13 - 1] [i_13] [i_13] [i_9]) : var_11)) ^ ((67 << (((arr_37 [i_9] [i_9] [i_9]) - 191))))))));
                        var_34 += (((arr_30 [i_13 - 1] [i_12 + 2] [i_12 + 1]) & ((max((arr_30 [i_13 - 1] [i_12 + 3] [i_12 - 1]), (arr_30 [i_13 + 1] [i_12 + 3] [i_12 - 1]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_53 [i_15] = ((-7615213747944731517 ? ((min((arr_51 [i_16 - 1] [i_16 - 2] [i_16 + 1] [i_16 + 1]), (arr_47 [i_15])))) : (((arr_23 [i_17] [6] [12] [i_16] [i_15] [i_9]) ? (((var_8 < (arr_17 [i_9] [i_15] [i_15] [i_15] [9])))) : (!var_3)))));
                        var_35 = (max(((((arr_34 [i_16 - 1] [i_15]) && var_10))), (max((arr_34 [i_9] [i_15]), (((var_6 && (arr_8 [9] [i_15]))))))));
                        arr_54 [i_9] [i_9] [i_9] [i_9] [i_15] = ((((((arr_51 [i_16 + 1] [i_15] [i_16] [i_17]) + 2147483647)) << (190 - 190))) ^ ((max((arr_51 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_9]), (arr_51 [i_16 + 1] [i_15] [i_16] [7])))));
                    }
                }
            }
        }
        var_36 = (min(var_36, (((((((arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_14 [i_9] [i_9] [i_9] [i_9])))) && ((((((-10 ? 15363 : -35))) ? 1901052859059439387 : 0))))))));
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        var_37 = (max(var_37, 42));
        arr_57 [i_18] [i_18] = (min((arr_56 [i_18] [i_18]), (((-30 ? ((var_0 ? var_6 : var_1)) : (((arr_7 [i_18] [6] [i_18]) ? var_11 : (arr_18 [6] [4] [i_18]))))))));
    }
    for (int i_19 = 3; i_19 < 9;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                {
                    var_38 |= var_10;
                    var_39 &= (arr_47 [i_21]);
                }
            }
        }
        arr_66 [i_19] [i_19] = (1 && 14015);
        var_40 = (((var_1 || -35) & var_9));
    }
    #pragma endscop
}
