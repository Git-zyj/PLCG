/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, var_7));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_13 ^= ((((var_9 % (arr_2 [2] [i_1] [8]))) & (arr_3 [i_0 + 1])));

                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_14 = (max(var_14, (((-(((arr_3 [10]) ? var_2 : var_8)))))));
                    var_15 = (((arr_6 [i_0] [i_1] [i_1] [i_1]) || (arr_2 [i_1] [i_1] [i_1])));

                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_2] [i_2] [i_2 - 1] [i_1] [i_2] = (((((var_6 ? var_10 : (arr_4 [15] [i_1] [i_3])))) || -1879048192));
                        arr_13 [3] [15] [15] [15] [11] [i_1] = (((arr_8 [i_0 - 1] [i_0 + 1] [i_1] [i_2 - 1] [i_3] [i_4]) | (arr_0 [i_2 - 1])));
                        var_16 = ((-(~1879048190)));
                        var_17 = ((((arr_3 [i_0 - 1]) + 2147483647)) >> ((((arr_0 [0]) == (arr_11 [i_1])))));
                        var_18 += ((arr_10 [i_2 + 1] [i_4] [i_2 - 1]) ^ (arr_10 [i_2 + 1] [i_4] [i_2 - 1]));
                    }
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_19 = (max(var_19, ((((arr_15 [i_0] [i_5 - 1] [i_2 + 1] [i_5 + 1] [14]) ? (arr_15 [i_0] [i_5 - 1] [i_2] [8] [8]) : (arr_15 [i_2] [i_5 - 1] [i_2] [i_5 - 1] [4]))))));
                    var_20 = (((var_4 % var_3) % (arr_8 [i_0] [i_0] [i_2] [i_0] [i_5 - 1] [i_2 - 1])));
                    arr_17 [14] [14] &= ((10 >> (245760 - 245731)));
                }
            }
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                var_21 += (arr_18 [i_0 - 1] [i_0 - 1] [i_0]);
                var_22 = ((-(((arr_5 [0] [0] [1]) * var_2))));
                var_23 = (((arr_16 [i_0] [i_0] [i_1]) && (arr_1 [i_0 - 1] [i_0 - 1])));
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_24 ^= (arr_1 [i_0 + 1] [i_0 + 1]);
                var_25 = ((arr_21 [i_0 - 1] [i_7] [i_7 - 1] [i_7]) && (arr_21 [i_0 - 1] [i_7 - 1] [i_7 - 1] [i_7]));
                arr_22 [i_1] = (arr_8 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]);
            }
            arr_23 [i_0] [i_1] = (arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_1]);
            var_26 = (~(arr_19 [10]));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_27 = (((arr_7 [i_0] [i_9 + 1] [i_10 + 2] [i_11 + 1]) + (arr_1 [i_8] [i_9 - 1])));
                            var_28 = ((arr_8 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 + 3]) + (arr_16 [i_0 + 1] [i_8] [i_9]));
                        }
                    }
                }
            }
            var_29 = (arr_34 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
            var_30 *= (((arr_34 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) + (arr_25 [i_0 + 1])));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            arr_38 [i_12] [8] [i_12] = ((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) && (arr_24 [i_0 - 1] [i_0 - 1]));
            var_31 = (((arr_27 [i_0]) - (arr_11 [i_12])));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_32 = (((arr_42 [i_0 + 1]) ? (arr_42 [i_0 + 1]) : (arr_42 [i_0 + 1])));
            var_33 = ((var_5 ? (arr_18 [i_0 + 1] [i_13] [11]) : (arr_19 [i_0 + 1])));
        }
    }
    for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_34 *= ((~(arr_29 [i_14 - 1] [14] [i_14 + 1])));

        /* vectorizable */
        for (int i_15 = 2; i_15 < 13;i_15 += 1)
        {
            var_35 |= (arr_34 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1]);
            arr_47 [i_14 + 1] [i_14 + 1] [i_14] = (((arr_11 [i_14]) ? (((arr_45 [i_14]) ^ var_1)) : var_10));
        }
    }
    for (int i_16 = 1; i_16 < 13;i_16 += 1) /* same iter space */
    {
        var_36 = (min(var_36, ((((max(var_2, var_3)) - (arr_46 [0] [0]))))));
        var_37 = (((((max((arr_26 [i_16 + 1] [i_16 + 1] [i_16 + 1]), (arr_6 [i_16] [i_16] [i_16] [i_16 + 1])))) ? (var_0 & var_5) : var_1)) | ((~(((arr_4 [i_16] [i_16] [6]) ^ (arr_44 [i_16]))))));
        arr_50 [i_16] [i_16] = ((arr_48 [i_16]) && ((!(((arr_49 [i_16] [i_16]) || (arr_19 [1]))))));
    }
    var_38 = (((~(var_8 < var_4))));
    #pragma endscop
}
