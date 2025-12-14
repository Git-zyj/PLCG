/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_21 = (((arr_1 [i_0]) ? var_1 : (arr_1 [i_1])));
            var_22 = (max(var_22, 115));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [4] [23] [19] = (arr_5 [16]);
                        arr_14 [i_0] [i_1] [i_1] [i_1] = var_14;
                        var_23 = (min(var_23, (~0)));
                    }
                }
            }
            var_24 = (arr_10 [i_0] [23] [i_1] [23]);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = (((arr_17 [i_0] [i_0]) != (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_25 = (max(var_25, 65512));
                            var_26 = (min(var_26, (~23)));
                            var_27 = (~0);
                        }
                    }
                }
                arr_27 [1] [1] [i_5] = (((arr_17 [i_5] [i_5 + 1]) ? var_11 : (arr_6 [1] [i_5 + 1])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_32 [i_0] [5] [i_8] [i_0] = ((var_12 ? (~65513) : (arr_16 [i_4])));
                var_28 &= (((arr_5 [i_4]) ? (arr_5 [i_0]) : -1));
            }
            var_29 *= (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_6 [i_0] [22])));
            arr_33 [1] = (arr_20 [i_0] [i_0]);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_30 = (max(var_30, ((((arr_25 [i_9] [i_9] [i_0] [i_0] [i_0]) >> (arr_6 [i_0] [i_0]))))));
            var_31 = 42076;
            var_32 = ((-745775218 <= (arr_12 [i_9] [i_0] [i_0] [14] [i_0])));
        }
        arr_37 [i_0] = arr_1 [i_0];
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_33 = (max(var_33, (~1)));
        arr_41 [i_10] = (arr_2 [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_34 = ((10 * ((1 ? (arr_29 [i_10] [i_11] [i_12]) : (arr_39 [i_10] [i_12])))));
                                arr_52 [i_10] [i_11] [1] [i_14] = 39203;
                                var_35 ^= var_18;
                                var_36 = (arr_10 [i_13] [i_12] [i_11] [i_10]);
                                var_37 = arr_44 [1] [i_10];
                            }
                        }
                    }

                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_38 = ((8 ? ((((var_6 * (arr_49 [i_15] [i_12] [i_11] [4]))) + 23460)) : (2147483617 + 1)));
                        var_39 += (max((arr_31 [i_15 - 1]), ((~(arr_40 [i_15 - 1] [i_15 - 1])))));
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_40 *= (arr_9 [i_10] [i_11] [i_16] [i_16] [i_12] [i_16]);
                        var_41 = (65513 * (((1 >= ((23 ? (arr_28 [i_16]) : var_10))))));
                        var_42 = ((((((arr_23 [i_16] [i_11] [i_12] [i_16]) ? 1 : (arr_23 [i_16] [i_10] [11] [i_10])))) - var_3));
                        var_43 -= 2138;

                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            var_44 = (arr_22 [i_11] [i_12] [i_16]);
                            arr_60 [i_10] [i_16] [i_10] [i_10] [i_10] = ((0 ^ (arr_49 [i_10] [7] [i_16] [i_17])));
                            var_45 = (arr_30 [i_11]);
                            var_46 = max((((arr_24 [i_10]) ? ((((arr_0 [i_12]) >= (arr_56 [i_16] [i_11] [i_12] [i_11] [i_17])))) : ((min(var_7, var_13))))), ((((min(var_19, var_0))) ? ((1 >> (((arr_51 [i_10] [i_11] [6] [i_16] [i_17] [i_17]) + 913160584)))) : var_12)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            {
                                var_47 = var_4;
                                arr_67 [3] [12] [i_12] = var_13;
                                arr_68 [i_10] [i_11] [i_12] [i_10] [1] [i_11] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_48 = ((((max(((max(65513, var_5))), (var_12 / var_5)))) ? var_19 : -27));
    var_49 = (var_14 / var_15);
    #pragma endscop
}
