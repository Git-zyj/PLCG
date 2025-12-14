/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = max(((+((-5665545580699577333 ? (arr_2 [i_0]) : 29453)))), (min(((var_5 ? 737557815 : var_6)), var_1)));
                var_10 = (max(var_10, (((((((((max(1, 18446744073709551615))) && var_1)))) + (max((max(var_4, var_2)), var_3)))))));
            }
        }
    }
    var_11 = (max(var_11, var_3));

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_12 = (max(((max((arr_9 [i_2 - 1] [i_2 + 1]), (arr_8 [i_2])))), var_8));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_13 &= ((((((arr_11 [1]) + var_9))) ? ((((((arr_10 [1]) / 18446744073709551594))) ? ((max(var_3, (arr_13 [i_4] [i_3])))) : (var_8 ^ var_2))) : (((((var_7 && var_8) || (arr_8 [i_3])))))));
                    var_14 |= (arr_8 [i_4 - 1]);

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_15 = (max(var_15, (((((((var_0 <= (max(var_8, (arr_16 [i_3] [i_4] [i_3] [i_3] [i_2 - 2]))))))) & ((var_1 ? (((arr_15 [i_3] [i_3] [i_5]) ? (arr_16 [i_2] [i_3] [i_2 + 1] [i_2 - 2] [i_5]) : var_0)) : var_1)))))));
                        arr_17 [i_3] [i_4] [i_3] = (max(((var_8 ? (arr_14 [i_5 - 1] [i_3] [i_4 + 1] [i_5]) : var_4)), var_4));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((max((((arr_15 [i_4 - 1] [i_4 - 1] [i_4 + 1]) + (arr_19 [i_2 + 1]))), var_3)))));
                        var_17 *= (((((arr_11 [10]) == (((arr_14 [i_2] [i_3] [i_4] [i_2]) * var_1)))) ? ((max((((arr_9 [i_3] [18]) >= var_7)), var_3))) : var_1));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_18 = (min(var_18, ((min((arr_20 [2] [i_4 + 1] [2]), ((((((18446744073709551615 ? 302709856 : 36083))) && 29447))))))));
                            var_19 |= ((((max(1437350294394264319, ((var_2 - (arr_12 [i_4])))))) ? ((max(((max((arr_14 [i_2] [i_3] [i_3] [i_2]), (arr_15 [i_7] [i_3] [i_3])))), (min(var_7, 36088))))) : ((max(var_1, 0)))));
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_20 = (max((arr_18 [i_3] [i_3] [i_8 + 1] [i_3]), var_8));
                            var_21 = (max(var_21, (((18446744073709551615 ? (((((arr_16 [i_2] [i_2 - 1] [i_3] [i_3] [i_2 - 1]) < var_5)))) : (max((((29453 > (arr_20 [i_2] [0] [14])))), -1)))))));
                            var_22 = (min(var_22, ((min((max(var_5, (arr_25 [i_6] [i_6] [i_3] [i_4 + 1] [i_3] [i_2]))), (arr_24 [i_2] [i_4 + 1] [i_4 + 1]))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            var_23 = (-((max(var_9, var_6))));
                            arr_32 [18] [i_9] |= (max((min(((var_0 ? (arr_24 [i_9] [i_3] [1]) : (arr_14 [4] [i_9] [0] [0]))), (0 - var_5))), var_2));
                            var_24 = ((((max(0, (arr_24 [i_10 - 3] [11] [i_2 - 2])))) ? (~var_6) : (((arr_12 [i_2 - 2]) & (arr_12 [i_2 + 1])))));
                            var_25 = (((((((((arr_24 [i_2] [i_3] [i_2]) ? var_4 : 29445))) ? 69 : (arr_14 [i_2 - 1] [i_4 - 1] [i_10 - 2] [i_10])))) ? var_0 : (((arr_26 [i_10 - 2] [i_4] [i_3] [i_2]) ? (((28183 ? var_6 : var_4))) : var_8))));
                        }
                        var_26 += (max((min((min(127, var_5)), (((var_3 > (arr_10 [16])))))), var_2));
                    }
                    arr_33 [9] [i_3] [i_2] = ((-4 ^ ((((~(arr_14 [i_2] [i_3] [i_4 + 1] [i_4 - 1])))))));
                }
            }
        }
        arr_34 [9] = var_0;
        arr_35 [i_2] &= (((((28179 ? (arr_30 [i_2 - 2] [i_2 - 2] [i_2 + 1] [1] [i_2 + 1] [1]) : ((((arr_12 [i_2]) ? 1 : var_2)))))) ? (min(var_1, (arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2]))) : (((-var_4 ? ((var_3 ? (arr_23 [i_2] [i_2] [i_2] [3] [i_2 - 1]) : 36091)) : (min(423776938, (arr_21 [i_2] [i_2] [3] [i_2 - 2]))))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 19;i_12 += 1)
            {
                {
                    var_27 = (min(var_27, var_8));
                    var_28 = (min(var_28, ((min((max((arr_30 [i_2] [i_2 - 1] [i_2 + 1] [2] [12] [i_12]), ((var_0 ? var_0 : -19421)))), (((!((max(5353786836881952799, var_6)))))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_29 = ((((15 ? -var_8 : (207 + 0))) - -var_1));
                                var_30 *= ((-((((((arr_36 [i_2 - 1] [i_2 - 1]) ? (arr_27 [i_2] [i_2 + 1] [2] [i_2] [2]) : (arr_11 [i_13])))) ? (var_9 && var_6) : var_5))));
                                var_31 &= (((((var_5 ? 1 : (arr_27 [i_2] [i_2] [i_2] [i_2 + 1] [i_2]))) / var_8)));
                                var_32 |= ((min((((var_5 ? 25262 : -47)), (arr_30 [i_12] [i_12] [1] [i_13] [i_12 + 1] [i_12])))));
                                var_33 += (max((max(var_4, ((1 + (arr_26 [16] [1] [i_13] [i_14 + 1]))))), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_34 -= var_0;
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                {
                    var_35 = max((max(-1, (arr_43 [12] [i_17 - 1] [i_16 + 1] [i_15] [12]))), (arr_20 [i_15] [i_16] [i_15]));
                    arr_54 [i_15] [0] [i_16] [i_17] &= 0;
                }
            }
        }
    }
    var_36 = (min((((var_6 && ((max(var_4, var_3)))))), (((-1 == var_4) ? var_6 : (max(31744, var_6))))));
    var_37 = (max((((var_8 ? ((min(0, var_2))) : 1))), (min(var_5, (max(var_3, var_0))))));
    #pragma endscop
}
