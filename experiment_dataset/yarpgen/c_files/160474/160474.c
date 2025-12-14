/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((max(var_7, ((var_10 ? var_10 : 269719000))))) ? ((((var_4 ? var_0 : var_10)) & 28365)) : var_10)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = ((1 ? 130816 : 152));

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_18 [i_1] [i_3 - 2] [i_2] [i_1] [i_1] [i_1] = (((((224 ? (((max(var_16, (arr_17 [i_0 - 1] [16] [i_3] [i_3] [i_4] [i_1]))))) : (max((arr_1 [i_2]), (arr_12 [i_0] [i_1 + 3] [i_2] [i_3])))))) ? var_16 : ((var_11 ? (arr_3 [17] [i_0 - 1]) : var_6))));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = 0;
                        }
                    }
                }
            }
            arr_20 [i_0 - 1] [i_1] = (((min((arr_2 [i_0]), -5134602140385645490)) >= (((-((min((arr_4 [i_0 + 1] [i_1 + 2] [i_1]), 1))))))));
        }
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_20 = ((((!(arr_15 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [19])))));
        var_21 = (max((min((arr_0 [2] [i_5]), (max(5134602140385645483, 14578061913613647369)))), 63));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_30 [i_5] [i_5] [i_7] = 7;

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_33 [i_5 + 1] [i_5 + 3] [i_5] [i_5] = 152;
                        var_22 |= var_4;
                    }
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        var_23 = (arr_4 [i_5] [6] [i_9]);
                        var_24 = (min(var_24, ((max(((var_12 ? (arr_17 [i_5 + 3] [i_6 - 1] [i_7] [i_5 - 1] [i_9 - 1] [i_5 - 1]) : (arr_17 [i_5 - 1] [i_6 + 1] [i_7] [i_9] [i_9 - 1] [i_7]))), 0)))));
                        var_25 = 480;
                        arr_37 [i_6] [i_7] = (((arr_8 [i_5] [i_5 - 1] [i_6 - 1] [i_6 - 3]) & (((var_9 << (((arr_36 [i_5] [i_5] [1] [i_6 - 2] [i_5 + 2] [i_5]) - 293298985531037346)))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_26 = 0;
        arr_42 [i_10] [i_10] = ((((1 ? 1 : -4543344875331801121)) >= (max((arr_39 [i_10]), (arr_39 [i_10])))));

        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            var_27 ^= ((((min(1482524447, 1)))) >= var_2);
            var_28 = ((((arr_38 [i_11 - 1]) + (arr_38 [i_11 - 1]))));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 24;i_13 += 1)
                {
                    {
                        var_29 = (arr_50 [i_13]);

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_53 [i_14] [i_12 - 1] [i_10] = (arr_46 [i_13] [i_13] [i_13 - 3] [i_13]);
                            var_30 *= ((!((max(((1947725198 ? 15032 : 49154)), (arr_52 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 1]))))));
                            arr_54 [i_10] [0] [12] [i_10] = ((((min((0 - 64), var_0))) ? (max(((min((arr_41 [i_12]), 58720256))), (max(var_11, var_8)))) : -57));
                        }
                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 23;i_15 += 1)
                        {
                            arr_57 [i_15] [i_11] = ((596506945 >> (15872 - 15870)));
                            var_31 = (((arr_46 [i_10] [i_11] [i_12] [17]) ? (arr_38 [i_10]) : (arr_55 [i_15] [i_15] [i_15] [i_15] [i_11 + 1] [i_11 + 1])));
                            arr_58 [i_15] [i_13] [i_13] [i_15] [i_12] [i_11] [i_10] = ((arr_55 [i_11 + 1] [i_12 + 1] [i_12 + 1] [i_15] [1] [i_12]) < var_1);
                        }

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_62 [1] [i_13 - 2] [13] = (((arr_48 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [23] [i_12 + 1]) ? (arr_48 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_12 - 2]) : 9));
                            var_32 = var_17;
                        }
                    }
                }
            }
        }
        var_33 = (min(var_33, (((!(((var_8 / (max((arr_39 [i_10]), -29))))))))));
    }
    var_34 = (var_12 >= var_11);
    #pragma endscop
}
