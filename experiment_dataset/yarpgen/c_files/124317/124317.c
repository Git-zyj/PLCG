/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_6, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((~(arr_1 [i_0])));
        var_16 ^= (((arr_0 [i_0]) ? -66 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 ^= ((arr_3 [18]) ? ((((min(var_6, (arr_2 [17])))) ? (arr_3 [i_1]) : (arr_2 [i_1]))) : (arr_2 [i_1]));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                arr_9 [i_2] [i_1] [i_2] [i_3] = ((!(!var_9)));
                var_18 = (min(var_18, 21));
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_13 [i_2] = ((((min((arr_7 [i_1] [i_2]), (arr_7 [i_1] [i_2])))) ? (((max((arr_7 [i_1] [i_4 - 1]), (arr_10 [i_2] [i_4] [i_2] [i_2]))))) : (((arr_10 [i_2] [i_2] [i_2] [i_2]) ? var_5 : (arr_3 [i_1])))));
                var_19 = 6;
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_17 [i_1] [i_1] [i_2] = ((var_8 + (arr_4 [i_1] [i_1] [i_5])));
                var_20 = (min(var_20, var_0));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_21 = var_1;
                    arr_25 [i_2] = (min(((((arr_20 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]) <= (max(var_2, 2147483647))))), ((~(arr_15 [i_7 + 2] [i_7 + 1] [i_7] [i_7 - 1])))));
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_22 = arr_10 [i_2] [i_6] [i_2] [i_2];
                    var_23 = (max((arr_16 [i_1] [i_2]), (~var_13)));
                }
                for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    arr_32 [9] [i_1] [i_6] [i_2] [i_9] = -22;
                    var_24 = (min(var_24, ((min(var_0, (((((min(2147483647, -3159405566729726524))) ? -2147483647 : 1373420912))))))));
                    arr_33 [0] [7] [i_2] = ((((max((((arr_31 [i_1] [i_1] [i_1] [i_1]) | 3159405566729726524)), ((((arr_27 [i_1] [i_1] [i_2] [i_1] [i_6] [17]) ? (arr_12 [i_9] [i_6] [i_2] [8]) : var_11)))))) ? var_7 : (arr_4 [i_1] [i_2] [i_9 + 1])));
                    var_25 = (max((((1637386600 | (arr_20 [i_9 - 1] [i_9] [i_9] [i_9])))), (arr_10 [i_2] [i_2] [i_6] [i_9 - 1])));
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_38 [i_2] [i_6] [i_2] [i_2] = (((arr_12 [i_6] [i_6] [13] [i_6]) ? (arr_20 [i_1] [i_1] [i_1] [i_1]) : (((arr_30 [i_1] [i_2] [i_6] [5] [i_10] [i_1]) ? (arr_30 [0] [i_2] [i_2] [i_6] [i_6] [i_10]) : var_7))));
                    arr_39 [i_1] [i_2] [i_1] [i_2] [i_6] [i_10] = ((!(((var_2 ? var_11 : (-127 - 1))))));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_26 = (min((6549711929945213410 != var_6), (((-3159405566729726524 ^ 67) | 21))));
                    var_27 = 1;
                }
                arr_42 [i_1] [i_2] [i_2] = 822882211;

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_46 [i_1] [i_2] [0] [i_12] = (min(((min(var_7, (arr_20 [i_6] [0] [0] [i_12])))), (min((arr_24 [i_1] [i_12]), ((min(var_10, 32417)))))));
                    var_28 = (max(var_28, ((((((var_0 ? 14 : var_0)) / (arr_20 [13] [i_2] [7] [i_12])))))));
                }
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    arr_51 [i_2] [i_2] = ((((var_7 ? -11277 : (arr_18 [i_1] [i_2] [i_6] [i_13]))) / (arr_18 [i_2] [i_6] [i_6] [i_13 + 2])));
                    arr_52 [i_13] [i_2] [i_2] [i_2] [i_1] = (((max(((-(arr_43 [i_2]))), ((((arr_22 [i_1] [i_2] [i_13]) ? var_7 : var_10))))) ^ 7336));
                }
            }
            arr_53 [i_2] = 1;
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
        {
            arr_56 [i_14] = ((((((((min(3472085085, 63))) ? (((arr_5 [i_1] [i_1]) ? var_11 : (arr_30 [i_1] [4] [i_1] [8] [i_1] [10]))) : (arr_45 [i_1]))) + 9223372036854775807)) >> (96 - 64)));
            var_29 ^= -55;
            arr_57 [i_1] = ((((((arr_22 [i_1] [i_1] [i_14]) ? (var_2 == 108) : (arr_18 [i_14] [i_14] [i_1] [i_1])))) + ((var_11 ? (!var_5) : -46))));
        }
        var_30 = (+(min(372869458, (((arr_48 [i_1] [8]) * var_12)))));
    }
    var_31 ^= ((((!((max(-63, 108))))) && -5023076623677949846));
    #pragma endscop
}
