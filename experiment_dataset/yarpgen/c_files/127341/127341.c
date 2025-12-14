/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 ^= ((var_8 % (!var_11)));
    var_14 = var_8;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((!(((var_0 ? (((arr_0 [i_0]) ? var_3 : (arr_0 [i_0]))) : var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_15 ^= var_10;
                        var_16 ^= ((!((!(~var_3)))));
                    }

                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (((((arr_1 [i_4]) ^ var_8)) ^ (((arr_1 [i_4 + 1]) ? (arr_1 [15]) : (arr_1 [i_1 - 1])))));
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_4] [10] [i_1] = (!var_1);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 ^= arr_15 [i_0 - 1] [i_1 + 2];
                                var_19 ^= (max((((arr_10 [i_0] [i_1 + 1] [i_2] [i_5]) / ((-(arr_6 [i_0] [i_1] [i_6]))))), var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_20 = (arr_1 [i_8]);

            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_21 = (arr_10 [i_7] [i_8] [i_9] [i_8]);
                arr_24 [i_7] [i_8] [6] = (((var_2 ? var_5 : var_3)));
                arr_25 [i_7] [i_8] [i_9] = ((-190 ? (!var_10) : (var_6 > var_5)));
                var_22 = (max(var_22, (((-(arr_8 [0] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_23 = (max(var_23, (((var_2 ? var_1 : (arr_4 [i_7] [i_7 + 3] [i_7 + 2]))))));
                arr_29 [i_8] [i_10] = var_4;
                var_24 = (((arr_22 [i_7]) * var_1));
                arr_30 [10] [i_10] = ((!(!-31571)));
            }
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                arr_33 [i_8] [i_11] = (((arr_5 [i_7] [i_7 + 3] [i_8] [i_11 - 1]) ? (arr_5 [i_7 + 2] [i_7] [i_8] [i_11]) : (arr_5 [1] [i_8] [i_7 + 2] [i_8])));
                var_25 = (arr_17 [i_7 + 1]);
                var_26 ^= ((!(arr_12 [i_11 + 3] [i_11 + 1] [i_11])));
                var_27 = (((arr_16 [1]) - (arr_32 [9] [5] [i_11])));
                var_28 = (max(var_28, (arr_17 [i_7 + 2])));
            }
            arr_34 [i_7] [i_8] = ((var_0 ? (arr_12 [5] [i_7 + 3] [i_8]) : var_2));
            var_29 ^= ((var_7 < (arr_0 [i_7])));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            arr_38 [i_12] [i_7] [i_7] = ((((((arr_21 [i_7 - 3]) / (arr_14 [i_7 - 3] [i_7] [i_7] [i_7] [i_12]))) + (arr_15 [i_7 - 2] [i_12]))));
            arr_39 [i_12] [i_7] = (min(((!(arr_31 [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 - 1]))), ((!(arr_4 [i_7] [i_12] [i_12])))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_30 ^= (var_0 - var_2);
            var_31 = ((((max((arr_5 [i_7 + 3] [i_7 - 1] [i_7 - 2] [i_7 - 2]), (arr_5 [i_7 - 3] [i_7 + 2] [i_7 - 1] [i_7 - 3])))) ? (-1 >= 190) : (!var_8)));
        }
        var_32 = (min(var_32, (arr_26 [i_7] [i_7])));
        arr_42 [i_7] = (190 / 255);
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        arr_45 [i_14] = (~111);
        var_33 = var_6;
        arr_46 [i_14] [i_14] = (~var_11);
    }
    var_34 ^= (((!var_2) ? var_0 : ((max(var_4, 228)))));
    #pragma endscop
}
