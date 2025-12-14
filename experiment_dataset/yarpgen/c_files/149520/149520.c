/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((-(~var_4)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (!-1008315605);
        var_21 += ((~(arr_1 [4])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (min(var_22, (arr_6 [i_1])));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_23 = ((~(arr_13 [i_3] [i_2])));
                    arr_15 [i_1] [i_1] [i_1] [i_4] [i_3] [i_1] = ((!((((arr_13 [18] [i_4]) ? (arr_6 [i_1]) : (arr_14 [i_1] [i_1] [i_3] [i_1]))))));

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_3] [i_5] [i_1] [i_1] = ((!(arr_13 [i_1] [i_2])));
                        var_24 += (arr_16 [15] [i_2] [i_3] [i_4] [15]);
                        var_25 = (min(var_25, ((((arr_5 [i_2]) ? 13055 : (arr_8 [i_1] [i_1]))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_26 = (max(var_26, (((~(arr_7 [i_2]))))));
                        var_27 ^= ((-(((!(arr_19 [i_3]))))));
                        var_28 = (min(var_28, ((((arr_13 [i_6] [i_1]) ? (arr_7 [i_1]) : (arr_9 [i_1] [i_1]))))));
                    }
                    var_29 = (arr_7 [i_1]);
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_2] [i_3] = (arr_20 [i_1] [i_2]);
                    var_30 = (arr_8 [i_2] [i_3]);
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_31 = (((arr_13 [i_2] [i_2]) ? (arr_13 [i_1] [i_1]) : (arr_10 [i_1] [i_1] [19] [18])));
                    var_32 = ((((~(arr_26 [i_3])))) ? (arr_12 [i_2] [i_3]) : (arr_7 [i_1]));
                    var_33 = (~(arr_26 [i_3]));
                }
                var_34 ^= ((((~(arr_12 [i_3] [i_1])))) ? ((~(arr_5 [i_3]))) : (((~(arr_25 [16] [i_2] [16])))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_35 = (arr_11 [i_1]);
                arr_30 [13] [i_2] [13] [i_9] = ((((!(arr_28 [i_9] [i_9] [i_9] [i_9]))) ? (arr_10 [i_1] [11] [i_1] [14]) : (arr_5 [8])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_36 [i_2] [i_11] = ((!((((arr_27 [i_1] [i_1] [i_9] [i_10]) ? (arr_19 [i_9]) : (arr_20 [i_1] [i_2]))))));
                            var_36 = ((((!(arr_24 [i_2] [i_9] [i_10]))) ? ((~(arr_13 [6] [i_9]))) : ((-(arr_6 [i_1])))));
                        }
                    }
                }
                var_37 = (min(var_37, (arr_10 [i_1] [i_1] [i_1] [i_1])));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {
                arr_40 [1] [1] [i_12] = (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]);
                var_38 = ((+(((arr_5 [i_1]) ? (arr_28 [i_1] [i_2] [i_12] [i_1]) : (arr_31 [i_1])))));
            }
            var_39 = ((-((-(arr_19 [i_2])))));
            var_40 = (min(var_40, (((-(arr_5 [i_1]))))));
        }
        arr_41 [i_1] = ((~(arr_12 [i_1] [i_1])));
        var_41 *= ((-((-(arr_19 [i_1])))));
    }
    for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_42 = (arr_11 [i_13 - 2]);
        var_43 = (min(var_43, (((+((~(((arr_33 [i_13] [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13 - 2]) ? (arr_25 [8] [i_13 - 3] [1]) : (arr_28 [i_13] [i_13] [i_13 + 1] [i_13]))))))))));
    }
    for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
    {
        arr_47 [i_14] = (((arr_11 [i_14]) ? ((-((-(arr_25 [i_14] [i_14] [1]))))) : ((-(((!(arr_37 [3] [3] [i_14] [i_14]))))))));
        var_44 = (((((arr_44 [10]) ? (arr_14 [i_14] [i_14] [8] [i_14 - 1]) : (arr_8 [i_14] [i_14])))));
        var_45 ^= ((((!(((-(arr_13 [i_14] [i_14])))))) ? (((!(arr_28 [i_14] [i_14] [i_14] [i_14])))) : (~71)));
        var_46 &= (arr_35 [i_14 - 3]);
    }
    var_47 -= ((((((~var_10) ? var_3 : ((var_1 ? var_9 : var_9))))) ? ((~(~var_8))) : ((~(~var_6)))));
    var_48 = ((-var_1 ? var_0 : var_10));
    #pragma endscop
}
