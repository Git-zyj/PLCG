/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((!((min(var_3, ((-(arr_1 [3]))))))));
        var_20 = (min(((((arr_3 [i_0 - 2]) < (arr_3 [i_0 - 2])))), ((+((var_17 ? (arr_2 [i_0] [i_0 - 1]) : var_15))))));
        arr_5 [17] [i_0] = min(((7192222192086042352 ? (-2147483647 - 1) : 3807121845)), (~2147483647));
        var_21 = (min(var_13, (((arr_1 [i_0]) >> (!var_9)))));
        var_22 = (min((-9223372036854775807 - 1), (-127 - 1)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [6] [i_1] &= ((~((~(arr_7 [0])))));
        arr_9 [i_1] [i_1] = (min(var_16, ((-(arr_7 [i_1])))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [i_1 - 1] = (!var_14);
            arr_14 [11] [i_1] [i_1] = ((var_8 ? (arr_7 [i_1]) : var_4));
            arr_15 [i_1] = var_17;
            arr_16 [i_1] [i_2] [17] = (arr_7 [i_1]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_19 [i_1] [14] [i_1] = (((((arr_11 [i_1 - 1]) != var_4)) ? ((var_8 ? (arr_11 [i_1 + 3]) : (arr_11 [i_1 + 2]))) : (((arr_11 [i_1 - 1]) ^ (arr_11 [i_1 - 1])))));
            arr_20 [19] [i_1] [19] = (((arr_10 [i_1]) ? (((min(var_6, (arr_12 [i_1 + 1] [i_3]))))) : var_6));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_24 [i_1] [i_4] [i_4 - 1] = (min((arr_10 [i_1]), (min((~var_1), ((~(arr_7 [i_1])))))));
            var_23 += (-(((var_15 && (arr_23 [i_1 + 2])))));
            arr_25 [i_1] = (~7651155201911177173);
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            arr_28 [i_5] [i_1] [i_5] &= ((9226 == (-2147483647 - 1)));
            var_24 -= ((-(min((arr_11 [i_1 + 3]), (var_8 * var_6)))));
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_31 [i_1] [4] [i_1] = ((~(!2147483647)));
            arr_32 [i_1] [i_6] [i_6] = var_13;
            var_25 -= var_8;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_37 [i_1 + 3] [i_1] [i_1] = (~((((arr_23 [i_1 - 1]) > var_15))));

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_40 [i_1] [i_1] [i_1 + 3] = var_15;
                var_26 = (((((!(arr_11 [i_1 + 1]))))) | (((arr_11 [i_1 + 3]) | (arr_11 [i_1 - 1]))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    arr_47 [i_1] [i_1] [i_10] = (-(arr_44 [20] [18] [i_1] [i_10 + 2]));

                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        arr_50 [i_1] [i_7] [i_7] [i_7] [i_7] = var_0;
                        arr_51 [19] [20] [i_1] [i_10] [20] [i_1] [i_10] = ((!(arr_38 [i_1 - 1] [i_10 - 2])));
                        arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = (~0);
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_27 = var_2;
                    var_28 -= (arr_54 [i_1] [i_1] [1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                    arr_55 [i_1] [i_1] [i_7] [i_9] [15] = var_11;
                }
                arr_56 [i_1] = (arr_7 [i_1]);
            }
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                var_29 = (max(var_29, (((((~(arr_12 [i_1 + 2] [i_13 - 2]))) * ((((arr_39 [i_1 + 1]) > var_5))))))));
                arr_60 [i_1] = min(((~(arr_33 [i_7] [i_13 + 1] [i_1]))), (min(var_19, var_3)));
                arr_61 [i_1] = ((var_18 | (((((min(var_0, (arr_58 [i_1])))) ? (((!(arr_35 [i_1 + 2] [i_1] [i_1])))) : (arr_49 [i_13 + 3] [i_1] [i_13 + 2] [i_13 + 3] [i_13]))))));
                arr_62 [i_7] [i_7] [i_1] = (min(((~(arr_27 [21] [i_1] [i_1 - 1]))), (~132120576)));
                var_30 = (!-25899);
            }
            arr_63 [i_1] = ((!((min(-var_0, (var_14 < var_1))))));
            var_31 = (arr_39 [i_1]);
            arr_64 [i_1] [1] = ((+((min((arr_43 [i_1]), (arr_43 [i_1]))))));
        }
    }
    for (int i_14 = 2; i_14 < 17;i_14 += 1)
    {
        arr_67 [i_14 - 2] = min(var_14, (min((arr_44 [i_14] [i_14] [i_14] [i_14 - 1]), (arr_44 [i_14] [i_14] [i_14] [i_14 - 1]))));
        arr_68 [i_14] = var_5;
    }
    var_32 = var_4;
    var_33 = (((((min(var_11, var_19)) | -var_13))) ? (min(((var_13 ? var_4 : var_4)), var_17)) : (((!(4200106307 & 0)))));

    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        arr_71 [i_15] [i_15] = (~var_9);
        arr_72 [i_15] = (((min((arr_22 [i_15]), (arr_22 [i_15]))) & (min((arr_22 [i_15]), (arr_22 [i_15])))));
        arr_73 [i_15] [i_15] = ((((var_0 + (arr_38 [i_15] [i_15]))) + (((var_2 ? (arr_38 [i_15] [21]) : var_4)))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_76 [i_16] = ((~(var_17 ^ var_18)));
        var_34 = (min(var_34, (arr_3 [i_16])));
    }
    for (int i_17 = 3; i_17 < 23;i_17 += 1)
    {
        arr_79 [i_17 - 2] = ((((var_8 ? (arr_77 [i_17]) : var_5)) >= var_10));
        arr_80 [i_17] = (((((arr_78 [i_17] [i_17 - 2]) & (arr_78 [i_17 - 2] [i_17 - 2]))) << (((min((arr_78 [i_17] [i_17 + 1]), (arr_78 [i_17 + 1] [i_17 - 2]))) - 1881399427))));
        arr_81 [i_17] [17] = var_12;
    }
    #pragma endscop
}
