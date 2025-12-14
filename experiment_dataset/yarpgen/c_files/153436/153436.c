/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 = ((var_6 ? (min(((var_3 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0]))) : (((((-(arr_1 [i_0]))) > (arr_2 [i_0]))))));
        var_11 = (min(var_11, var_0));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_13 = (((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_3 [i_3]))) << (((((arr_3 [i_1]) ? var_6 : var_5)) - 221))));
                    var_14 = (((arr_6 [i_2] [i_2] [i_3]) > (arr_6 [i_1] [i_2] [i_1])));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((var_7 ? ((((arr_1 [i_1]) + (((arr_7 [i_1] [i_2] [i_3]) ? var_3 : var_6))))) : ((var_0 ? var_7 : ((var_0 ? var_8 : var_9))))));
                    var_15 = (((arr_10 [i_1] [i_2] [i_3] [i_2]) << ((((arr_10 [i_1] [i_2] [i_3] [i_3]) > (arr_10 [i_3] [i_3] [i_2] [i_1]))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((((((arr_7 [i_4] [i_4] [i_4]) << (var_5 - 1512146758852510018)))) ? var_0 : ((var_8 ? (arr_13 [i_4] [i_4]) : (arr_7 [i_4] [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5] [i_5] = (max((arr_7 [i_7 + 1] [i_6 - 1] [i_6]), (((-(var_5 > var_1))))));
                        var_16 = ((var_4 << (((arr_19 [i_4] [i_5] [i_6] [i_7]) - 102))));
                    }
                }
            }
        }
        var_17 = (-(((max(var_8, var_0)) - (arr_11 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_29 [i_8] [i_9] = (((arr_27 [i_8] [i_8 - 2] [i_8]) ? (arr_21 [i_8 + 3] [i_8 + 3] [i_8 + 3]) : (arr_27 [i_8] [i_8 + 3] [i_9])));
            arr_30 [i_9] [i_8] [i_9] = (((((~(arr_14 [i_9])))) / (arr_27 [i_8] [i_8 + 3] [i_8 + 4])));
            var_18 = (((arr_1 [i_8 - 2]) / var_9));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                {
                    arr_36 [i_10] [i_10] [i_11] [i_11] = var_8;
                    arr_37 [i_10] [i_10] [i_8] [i_10] = ((~(((arr_14 [i_10]) + var_7))));
                    var_19 = (((arr_6 [i_8] [i_8 + 1] [i_11]) * (arr_6 [i_8] [i_8 + 4] [i_11])));
                    var_20 = ((var_4 ? ((var_9 + (arr_7 [i_11] [i_10] [i_8]))) : (arr_11 [i_8 + 1] [i_11 - 1] [i_11] [i_11])));
                }
            }
        }
    }

    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        var_21 = (((((-var_7 / ((~(arr_41 [i_12])))))) ? (arr_39 [i_12 - 2]) : (~var_2)));
        var_22 &= (((((((arr_39 [i_12 + 1]) > (arr_39 [i_12 + 1]))))) > var_8));
    }
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                var_23 *= (var_2 << (((arr_38 [i_13 - 1]) - 78)));
                var_24 = ((arr_48 [i_13] [i_13] [i_13 + 1]) ? (arr_48 [i_13 + 1] [i_13 + 1] [i_13]) : var_2);
                var_25 = ((((var_8 + (arr_45 [i_14] [i_13]))) << (((arr_42 [i_14]) - 217))));
                var_26 = var_3;
            }
            var_27 = (+(((arr_48 [i_13 + 1] [i_13] [i_13]) + (arr_48 [i_13] [i_14] [i_14]))));
            arr_49 [i_13] [i_13] [i_13] = ((((-((var_3 ? var_8 : var_3)))) > (arr_38 [i_13])));
        }
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    var_28 = (((((arr_54 [i_16]) > (((arr_38 [i_13]) / var_0)))) ? var_1 : (arr_44 [i_17])));
                    var_29 = (((arr_53 [i_16 + 1] [i_16 - 3]) ? ((var_6 ? var_2 : (arr_42 [i_13]))) : (((var_3 ? var_9 : var_6)))));
                    var_30 = ((((((arr_39 [i_16 + 2]) * var_9))) ? ((max(var_0, var_2))) : (arr_39 [i_16 + 3])));
                }
            }
        }
        arr_55 [i_13] [i_13] = (((((arr_40 [i_13 - 1]) ^ (arr_51 [i_13 + 1] [i_13]))) / (arr_51 [i_13 - 1] [i_13])));
    }
    var_31 = var_7;
    var_32 = ((((((var_2 * var_2) ? var_7 : (min(var_2, var_9))))) * (((var_2 / var_6) ? var_3 : ((var_2 ? var_5 : var_3))))));
    var_33 = var_2;
    #pragma endscop
}
