/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((min(-8840516681706487114, (arr_1 [i_1])))) ? ((~(arr_1 [i_0]))) : var_3));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 ^= (min((min((min(-16777216, var_10)), ((max(1, var_7))))), (((((var_1 ? var_1 : var_8))) ? ((var_2 ? var_1 : (arr_9 [2] [i_2] [i_1] [2]))) : (!1)))));
                        var_15 = ((((((max((arr_5 [i_1]), 1)) ? (((min(var_4, (arr_7 [1] [i_2] [i_3]))))) : var_2))) ? ((((max(53555, var_2))))) : (((arr_0 [i_2]) ? ((min(var_9, var_1))) : 1))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_16 = ((~(arr_8 [i_0] [i_0])));
                        var_17 = var_7;
                        var_18 = (~var_1);
                    }
                    var_19 = ((1 && (((~(max(var_7, var_9)))))));
                }
            }
        }
    }
    var_20 = (max(var_2, ((var_0 ? -var_12 : (((var_4 ? var_8 : var_1)))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_21 = var_7;
                var_22 = (i_6 % 2 == 0) ? ((((((((arr_17 [i_6]) ? (arr_17 [i_6]) : (arr_17 [i_6]))) + 2147483647)) << (((arr_17 [i_6]) - 103))))) : ((((((((((arr_17 [i_6]) ? (arr_17 [i_6]) : (arr_17 [i_6]))) - 2147483647)) + 2147483647)) << (((((arr_17 [i_6]) - 103)) + 49)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_23 -= (max((arr_13 [i_7]), (max(var_5, (arr_13 [i_7])))));

                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    var_24 &= (max((((((var_3 ? 1 : var_4))) ? (max(var_2, (arr_17 [2]))) : (var_2 / var_5))), (((max(2147483647, (arr_13 [i_7])))))));
                    arr_25 [i_7] [i_7] [1] [i_7] = (((((((1 ? var_6 : (arr_13 [i_9]))) << (var_5 || var_6)))) ? ((var_10 ? var_9 : (((arr_18 [i_9]) ? (arr_22 [i_7]) : (arr_13 [i_9 - 1]))))) : (max((~2041172103), ((4881673904504456777 ? var_3 : var_2))))));
                    arr_26 [i_7] [i_8] [i_9] = ((((((((arr_18 [i_8]) << (var_4 + 4502)))) ? (((4881673904504456786 >> (var_12 - 7980022891247266265)))) : (min((arr_13 [i_7]), 250)))) | (max((min(var_9, (arr_13 [i_9]))), (arr_16 [1] [i_8] [i_9])))));
                }
                var_25 = (arr_23 [i_8] [i_8] [i_8] [i_8]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            {
                arr_31 [i_10] = ((min((max(var_5, 18446744073709551615)), (arr_18 [i_11]))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 = (((((-(((arr_22 [8]) ? var_10 : var_4))))) % var_2));

                            /* vectorizable */
                            for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                            {
                                var_27 = var_9;
                                var_28 = (((arr_20 [i_12] [i_13]) / (arr_22 [i_14 + 1])));
                                var_29 = (((arr_13 [i_14 + 3]) ? (arr_35 [i_11 + 2] [i_13] [i_11 + 2] [i_11 + 2]) : (arr_36 [i_14 + 2] [i_13] [i_13] [i_14 + 3])));
                                var_30 = (((var_11 <= 2089280006) && (arr_19 [i_11 + 2] [i_11 + 1])));
                            }
                            for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                            {
                                var_31 &= max(((-(arr_24 [i_10] [i_15]))), var_4);
                                var_32 ^= (((-16 ? (arr_14 [1] [i_15 + 3]) : (arr_14 [i_12] [i_15 + 3]))));
                            }
                            for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                            {
                                var_33 = ((((max((arr_41 [i_16] [i_16 - 1] [i_16 + 1] [i_16 + 2] [4] [i_11 + 1] [i_10]), (arr_39 [i_10] [i_16 + 1] [i_11 + 1] [i_13] [i_16 + 1] [i_11 + 1])))) && (((arr_43 [i_16 + 1]) <= (arr_41 [1] [i_16 + 2] [i_16 - 1] [i_16 + 3] [1] [i_11 + 1] [i_10])))));
                                var_34 *= (max(((((min(var_7, var_1))) ? var_6 : var_7)), (((-27 ? ((var_7 ? (arr_41 [i_16 + 3] [i_16 - 1] [i_10] [i_12] [i_12] [i_11 + 2] [i_10]) : var_3)) : (((arr_39 [i_10] [i_11 + 1] [i_11 + 1] [i_12] [i_11 + 1] [i_12]) ? var_4 : 8706)))))));
                                var_35 = (min((var_4 ^ var_5), ((max((arr_29 [i_16 + 2] [i_11 + 2]), (arr_29 [i_16 + 1] [i_11 + 1]))))));
                            }
                        }
                    }
                }
                var_36 = min((((arr_21 [i_11 + 2] [i_11 + 1]) ? (arr_34 [i_11 + 1] [i_11 + 2]) : var_4)), (max((arr_21 [i_11 - 1] [i_11 + 1]), var_7)));
            }
        }
    }
    #pragma endscop
}
