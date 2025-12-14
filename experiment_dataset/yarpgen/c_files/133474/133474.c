/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_13 = (max((((!(((~(arr_3 [i_0]))))))), ((((max((arr_3 [i_0]), (arr_2 [i_0])))) / ((max((arr_2 [i_0]), var_1)))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_14 = ((249 == (((!(arr_3 [i_1]))))));
            arr_8 [i_0] [18] = ((((~(arr_5 [i_0] [i_1] [i_0]))) & ((max(((((arr_0 [i_0]) >= (arr_3 [i_1])))), (max((arr_0 [i_1]), -87)))))));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (max(((max((arr_4 [i_2] [i_2] [18]), (arr_4 [i_2] [i_2] [i_2])))), (((-(arr_6 [i_2]))))));
        var_15 |= (((((arr_7 [i_2]) & (arr_9 [i_2] [i_2]))) < (arr_1 [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_16 = ((((arr_3 [i_3]) ? var_4 : (arr_10 [i_3]))));

        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_17 = (min(var_17, ((max((arr_1 [7]), (min(-70, (arr_7 [i_4 + 3]))))))));
                var_18 = (min(17788, 52143));
                var_19 = ((((((arr_1 [i_4 + 1]) - (arr_1 [i_4 + 1])))) ? (((((max((arr_13 [3] [i_4]), var_3))) > (arr_7 [i_3])))) : (arr_19 [i_3] [i_4] [i_3])));
            }
            var_20 = (min((~var_2), (~-1)));

            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_21 = (((var_3 != (arr_22 [i_6] [i_6] [i_6 - 2]))));
                var_22 = (max(((!(var_6 & var_0))), (((~var_11) || (arr_20 [i_4])))));
                var_23 = (((!((min((arr_19 [i_3] [14] [i_6]), (arr_15 [8] [8] [8])))))));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                arr_26 [i_3] = (min((max((arr_7 [i_3]), (arr_2 [9]))), (((((max((arr_15 [12] [5] [i_3]), (arr_23 [i_3] [i_4] [i_3])))) != var_3)))));

                /* vectorizable */
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_24 = ((var_0 ? (((!(arr_17 [i_3] [i_3])))) : (47763 && 22938)));
                    var_25 = arr_0 [i_3];
                    arr_30 [20] [i_3] [20] = ((-0 ^ (arr_28 [7] [i_8 + 1] [i_8] [i_7] [i_3])));
                }
                var_26 = ((((max((arr_28 [i_4 - 1] [12] [i_7] [i_4] [1]), var_5))) ? (((arr_28 [i_4 - 1] [i_4 - 1] [21] [i_7] [i_4]) - (arr_28 [i_4 - 1] [i_4] [i_7] [20] [i_7]))) : (((arr_28 [i_4 - 1] [i_4 - 1] [i_7] [19] [8]) ? (arr_9 [i_4 - 1] [13]) : var_5))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_27 = ((max((arr_15 [i_3] [i_3] [i_4 + 1]), (arr_15 [12] [12] [i_4 + 2]))));
                var_28 = var_12;
            }
        }
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            var_29 = ((~(var_4 > var_0)));
            var_30 = (max(var_30, (arr_20 [i_3])));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_43 [i_3] [i_10] [i_3] [i_12] [5] = ((((((var_1 ? (arr_33 [i_11] [8] [i_11]) : var_4)))) ? (max((((arr_20 [i_10]) << (((arr_15 [i_3] [i_10] [i_11 + 3]) - 85)))), (arr_32 [i_11 + 2] [i_3] [i_3] [i_10 + 1]))) : (min(((max(var_2, (arr_16 [i_11] [i_3])))), ((52133 ? var_10 : (arr_12 [i_3])))))));
                        var_31 = (max((min(var_5, (var_11 ^ 0))), (arr_17 [i_3] [i_10])));
                        var_32 = arr_28 [10] [i_10] [i_10] [0] [i_3];
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_54 [i_13] [11] [11] [i_13] = ((+(((arr_14 [i_13] [i_13]) / (arr_27 [i_13] [18] [i_13] [18] [i_15])))));
                        arr_55 [7] [i_13] [i_15] [i_16] = ((((-(arr_29 [i_13]))) == (arr_24 [7] [i_15] [i_14])));
                    }
                }
            }
        }
        arr_56 [i_13] [i_13] = ((~(arr_7 [i_13])));
    }

    for (int i_17 = 2; i_17 < 13;i_17 += 1)
    {
        var_33 = (max(var_33, (((max((arr_58 [i_17] [i_17 - 1]), var_8))))));
        var_34 = ((((max((arr_38 [19] [i_17 - 1] [i_17 - 1] [i_17 - 1]), var_4))) << (var_7 - 76)));
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_35 = (max(((((((arr_29 [i_18]) ? (arr_53 [i_18] [10] [i_18]) : var_7)) == (arr_48 [i_18])))), (max((min(17757, var_3)), (arr_9 [i_18] [i_18])))));
        arr_63 [i_18] = ((((max(var_12, var_8))) ? ((max((arr_4 [i_18] [i_18] [i_18]), 65535))) : (arr_10 [21])));
    }
    var_36 = (min(var_4, -var_8));
    #pragma endscop
}
