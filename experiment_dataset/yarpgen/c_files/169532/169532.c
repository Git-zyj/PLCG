/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_6;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [9] [i_0 - 1] = (((-var_7 ? -3453499509 : var_4)));
        arr_3 [i_0 + 2] = (((arr_0 [i_0]) & (!var_8)));
        arr_4 [i_0] = ((((arr_0 [i_0 + 3]) + (((arr_0 [i_0]) - 178)))));
        arr_5 [i_0] = (max(var_4, 3453499513));
        var_14 += (((-(arr_1 [i_0 + 3]))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_2] &= ((min((((-(arr_11 [i_1] [i_1] [i_4]))), (max(841467788, -2772472753837297302))))));
                        var_15 = 255;
                    }
                }
            }
            var_16 = 208;
            var_17 += (arr_7 [i_1]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_5] [i_1] [i_1] = (3453499505 | var_5);

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_18 += 0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_19 &= (((-((max((arr_22 [i_1] [i_1] [i_6] [i_6]), var_9))))) < var_5);
                            var_20 = (min(var_20, (((~(!var_10))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_21 = (((((0 & ((max(var_2, 255)))))) < 1135045522));
                            var_22 = (arr_10 [2] [i_6] [i_6] [i_10]);
                        }
                    }
                }
                var_23 = (max(var_23, (arr_10 [i_6] [i_5] [i_5] [i_1])));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_24 -= ((min((arr_26 [16] [16] [16] [14] [i_11]), (min(18446744073709551590, var_9)))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_25 = ((-(max(((32767 ? (arr_28 [i_5] [i_11] [i_5] [i_13]) : (arr_19 [i_1] [i_1]))), (arr_24 [i_5] [i_5] [i_12] [i_13])))));
                            var_26 = (max(2077611524, ((-(min(var_0, var_0))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_27 = (((arr_39 [i_1] [i_1] [i_5] [i_14] [i_14] [i_1]) & (arr_39 [i_1] [i_5] [i_5] [6] [i_1] [i_1])));
                var_28 = (var_0 == 218);
                var_29 = (max(var_29, ((0 ^ (arr_30 [i_1] [i_5] [i_14] [i_14] [i_14])))));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 16;i_16 += 1)
                {
                    {
                        var_30 = (((min((max(var_11, (arr_19 [i_1] [i_5]))), 841467783)) << (var_11 - 79709693)));
                        arr_46 [i_1] [i_5] [i_15] [i_16] = var_11;
                        arr_47 [i_16] [i_16 - 1] [i_15] [i_16 - 1] [18] = (max((((arr_19 [i_5] [i_5]) - (var_12 & 4159881866))), (var_9 - 78)));
                        var_31 = (var_11 | 9223372036854775807);
                        var_32 = (arr_11 [i_16] [i_15] [i_15]);
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            arr_50 [i_1] [1] [1] = (min((max(54576, 0)), var_3));
            arr_51 [i_1] = (var_0 ? (max((arr_21 [i_1] [i_17]), (arr_11 [i_17] [i_17] [i_17]))) : (((!841467765) ^ (((arr_41 [i_1] [i_1] [i_1]) ? var_9 : (arr_37 [i_1] [i_17]))))));
            var_33 = (min(var_33, var_2));
        }

        /* vectorizable */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_34 = ((~(arr_14 [i_1] [i_18] [i_18])));
            arr_56 [i_1] [1] = ((841467787 ? var_12 : var_2));
            arr_57 [i_1] = ((17999 <= (arr_11 [i_1] [i_18] [i_18])));
        }
    }
    #pragma endscop
}
