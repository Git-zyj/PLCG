/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (((var_11 / var_1) << (((var_12 && (var_10 & -65))))));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
            {
                var_20 = var_9;

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0] [i_2] [i_3] = arr_9 [i_2] [i_1 - 1] [i_3] [13] [i_3] [i_3];
                    var_21 = ((~(arr_2 [i_1 + 1])));
                    arr_13 [i_3] [i_2] [i_1] [i_0] &= var_0;
                }
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_22 *= (arr_6 [i_4]);
                var_23 = (max(var_23, (arr_15 [i_0] [i_1] [i_4])));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_4] [i_5] = (((var_13 % (arr_7 [i_0] [3] [i_4] [i_5]))));
                    var_24 -= var_3;
                    var_25 = (min(var_25, ((((!var_8) & var_13)))));
                    var_26 = (((arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]) ^ (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])));
                }
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_27 &= var_5;

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_28 = (max(var_28, ((((arr_5 [i_1 - 2] [i_1 + 1] [i_1 - 2]) ^ (arr_5 [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                    var_29 = (((arr_23 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 2]) && (arr_1 [i_1] [i_1 - 2])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] [i_6] [2] = 39540;
                    var_30 = (((~var_1) > var_1));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_31 = (arr_23 [i_1] [i_1] [i_1] [i_1 + 1] [11] [i_1 - 1]);
                    var_32 = (max(var_32, (var_13 < var_7)));
                    var_33 = var_12;
                    var_34 = var_9;
                }
                var_35 = (((-var_13 ? (((arr_5 [i_0] [i_1] [i_6]) ? var_14 : var_0)) : (arr_7 [1] [1] [i_1 + 1] [i_6]))));
            }
            arr_34 [i_0] = ((~(arr_3 [i_1 - 1])));
            var_36 = (max(var_36, (((~(arr_8 [i_1 - 2]))))));
            arr_35 [0] [i_1 + 1] [i_1] = var_1;
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_38 [i_10] [1] [i_10] = (((arr_21 [i_0] [i_0] [i_0] [i_10]) ? ((-(((arr_32 [i_0] [i_10] [i_10] [i_10]) * var_14)))) : (((var_9 ? var_2 : (arr_20 [i_0]))))));
            arr_39 [i_0] [i_10] = ((((max((arr_3 [i_10]), (arr_31 [i_0] [i_0] [i_0] [i_10] [i_10])))) ? (((~((var_0 ? (arr_5 [i_0] [i_0] [i_10]) : (arr_5 [i_0] [i_0] [i_0])))))) : (((arr_6 [i_0]) ? (!var_10) : (arr_19 [i_10])))));
        }
        var_37 = (arr_0 [i_0]);
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_38 = ((((max((max((arr_11 [i_11]), var_12)), (arr_37 [i_11] [i_11])))) * (arr_19 [i_11])));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            arr_45 [i_11] [i_11] = ((-((((arr_22 [i_11] [i_11] [i_11] [1]) || var_9)))));
            var_39 = (max(var_39, (((~(arr_25 [i_12] [i_12 - 1] [i_12] [i_12]))))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            arr_48 [i_11] = (arr_46 [i_13 - 1] [i_13 + 1] [i_13 + 1]);
            arr_49 [i_13] = ((!(arr_36 [i_13 - 1] [i_13 - 1] [8])));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                {
                    var_40 = ((~(arr_47 [i_16 + 1] [i_16] [i_16 - 1])));
                    arr_58 [i_15] [i_15] [i_15] = (((((~(arr_27 [0] [i_15] [i_16])))) ? (((var_13 ? 127 : var_7))) : (arr_22 [i_14] [i_14] [i_15] [i_16])));

                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_41 = var_1;
                        arr_61 [i_14] [i_15] [i_16 - 1] [i_17] = (((arr_7 [i_14] [i_14] [i_14] [i_14]) + var_0));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_42 = var_8;
                        arr_65 [i_14] [i_15] [i_16 + 1] [4] &= (-(arr_55 [i_15]));
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                    {
                        arr_68 [i_15] [i_16 + 2] [i_15] [i_15] = var_3;
                        var_43 = (min(var_43, var_9));
                    }
                }
            }
        }
        var_44 = ((-(arr_24 [5] [i_14] [i_14] [i_14])));
        arr_69 [2] = (arr_24 [4] [i_14] [i_14] [i_14]);
    }
    var_45 = -var_13;
    #pragma endscop
}
