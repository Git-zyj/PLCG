/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? var_14 : (max((arr_0 [i_0]), var_9))));
        var_17 &= ((((((arr_0 [i_0]) <= (arr_1 [i_0] [i_0]))) || ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 -= 32767;

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_19 = (min(var_19, ((((((var_16 % (arr_5 [i_2 - 1] [i_2] [i_2 - 1])))) ? (((max(var_7, (arr_5 [i_1] [i_2] [i_1]))))) : ((((min((arr_6 [i_1]), var_15))) ? (arr_6 [i_2 - 1]) : (arr_4 [8]))))))));
            arr_7 [i_1] [i_2] [i_2] = (arr_6 [i_1]);
            arr_8 [i_1] [i_2] = (arr_0 [i_2]);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_11 [12] [i_3] &= (min(var_11, var_6));
                var_20 ^= (max(((((arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1]) <= (arr_10 [i_2 - 2] [i_2 + 2] [i_2 - 1])))), (((arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2]) ? (arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 1]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
            }
        }
        var_21 = ((+(((((((arr_10 [i_1] [i_1] [i_1]) > var_4))) == (max((arr_4 [i_1]), var_1)))))));
        var_22 ^= var_7;
        arr_12 [i_1] [i_1] = (arr_5 [i_1] [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((~(((((((arr_5 [i_4] [i_4] [i_4]) <= var_12)))) + (min((arr_0 [i_4]), var_13))))));
        arr_16 [i_4] [i_4] = (min((108 > 251), (((arr_6 [i_4]) / (arr_0 [i_4])))));
        var_23 = (arr_13 [i_4]);
    }

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_24 = ((var_3 ? (arr_20 [i_5] [i_5]) : (arr_18 [i_5] [i_5])));
        arr_21 [i_5] [i_5] = (arr_19 [i_5]);
        var_25 ^= var_2;
    }

    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_26 [i_6] = var_15;
        var_26 &= (arr_1 [i_6] [i_6]);
    }
    for (int i_7 = 4; i_7 < 13;i_7 += 1)
    {
        arr_29 [i_7] = var_2;
        arr_30 [i_7] [i_7] = ((-(!1)));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_27 = (!274877906432);
            arr_35 [i_7] [i_8] [i_8] = ((((((arr_4 [6]) == (arr_6 [i_8]))))) > (((var_11 <= var_2) + (((-5343118111503197828 + 9223372036854775807) << (((-98 + 122) - 24)))))));
            arr_36 [i_8] [i_7] = ((max(((max(var_16, (arr_28 [i_7])))), (arr_10 [i_7] [i_7] [i_7]))) != (arr_33 [i_7] [i_8] [i_8]));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_28 = (min(var_28, ((!(((((arr_3 [14]) | (arr_6 [i_7]))) <= 121))))));
            arr_40 [i_9] [i_9] [i_7] = (((((var_5 < (((((arr_10 [i_7] [i_9] [i_9]) || (arr_10 [i_9] [i_7] [i_7])))))))) <= ((((arr_28 [i_7]) || (arr_28 [i_9 - 1]))))));
            arr_41 [i_9] = (arr_24 [i_7] [i_9]);
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_29 = (min(var_29, ((((arr_43 [4]) ? -var_14 : ((14547650 ? (max((arr_3 [6]), (arr_24 [i_10] [i_10]))) : var_1)))))));

            for (int i_11 = 3; i_11 < 12;i_11 += 1)
            {
                var_30 = (min(var_30, (((((((arr_4 [2]) || (arr_4 [6])))) < (arr_4 [12]))))));
                arr_47 [i_10] [i_10] [i_10] [i_11] = ((~((((arr_25 [i_7 - 3] [i_7 - 3]) < (arr_25 [i_7 - 3] [i_7 - 3]))))));
                var_31 = (((var_13 << ((((max(var_2, var_7))) - 50)))));
            }

            for (int i_12 = 2; i_12 < 12;i_12 += 1)
            {
                var_32 = (min(var_32, ((((min(((((arr_37 [i_12] [i_10] [i_12]) << (((arr_9 [i_7] [i_10] [i_12]) - 40852))))), (min((arr_17 [i_10]), var_11)))) <= var_2)))));
                var_33 = ((!((((((arr_34 [i_7] [i_10] [i_12]) ? var_10 : var_15)) | (arr_34 [i_7] [i_10] [i_12]))))));
                var_34 = var_6;
                var_35 = (min(var_35, ((((((-(((arr_33 [i_12] [i_10] [i_7]) ? (arr_13 [i_7]) : (arr_17 [i_7])))))) ? ((var_3 ? (arr_50 [i_12]) : ((((arr_50 [i_10]) <= (arr_19 [i_7])))))) : (((((var_5 ? (arr_44 [i_12] [i_10] [i_7]) : (arr_34 [i_7] [i_10] [i_12])))) ? (!var_12) : ((((arr_4 [i_12]) || var_16))))))))));
            }
            arr_51 [i_7] [i_7] [i_10] = (((((arr_1 [i_7 + 1] [i_10]) > (arr_3 [i_10]))) ? var_4 : ((((((var_6 - (arr_46 [i_10] [i_10] [i_7])))) ? ((max(118, -44))) : ((((arr_46 [i_7] [i_7] [i_7]) <= (arr_27 [i_7] [i_10])))))))));
        }
        var_36 |= (arr_3 [8]);
        var_37 = (min(var_37, ((((arr_48 [i_7 + 2] [i_7] [i_7 - 2] [i_7 - 1]) ^ (((arr_0 [i_7 + 2]) ? (arr_48 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (arr_48 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]))))))));
    }
    for (int i_13 = 1; i_13 < 13;i_13 += 1)
    {
        var_38 = var_13;

        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 3; i_15 < 14;i_15 += 1)
            {
                arr_61 [i_13] [i_13] [2] |= var_7;
                var_39 = ((123 >= ((((arr_23 [i_15]) <= (arr_19 [i_13]))))));
            }

            for (int i_16 = 1; i_16 < 15;i_16 += 1)
            {
                arr_65 [i_16] [i_14] [i_14] = (((!var_9) << (!var_15)));
                arr_66 [i_13] [i_13] [i_16] [i_16] = (arr_24 [i_13] [i_14]);
                arr_67 [i_16] [i_14] [i_16] = (arr_60 [i_13] [i_16 - 1] [i_16]);
            }
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
        {
            var_40 = (((((arr_22 [i_13 + 4] [i_13 + 3]) <= (arr_58 [i_13] [i_17] [i_13 - 1])))) & (~var_3));
            var_41 = (((max(var_14, var_2)) ? ((((arr_0 [i_17]) ? (arr_22 [i_13] [i_17]) : (arr_22 [i_17] [i_13])))) : (((arr_64 [i_13] [i_17] [i_17]) / (arr_0 [i_13])))));
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_42 = min((arr_72 [i_13] [i_13]), (((!(((~(arr_68 [i_18] [i_18] [i_13]))))))));
            arr_73 [i_13] = arr_25 [i_13] [i_13];
            var_43 = (((max((((arr_62 [i_18] [i_18] [i_13]) - (arr_19 [i_18]))), ((var_5 ? (arr_1 [i_13] [i_18]) : var_2)))) - ((~(arr_68 [i_13] [i_18] [i_18])))));
        }
        for (int i_19 = 2; i_19 < 16;i_19 += 1)
        {
            arr_78 [i_19] [i_13] [i_13] = (-(max((arr_71 [i_13] [i_13] [i_13 + 4]), (arr_72 [i_13 - 1] [i_19 - 2]))));
            arr_79 [i_13] [i_19] [i_19] = (min((arr_22 [i_19] [i_13]), (((arr_18 [i_13 + 3] [i_19 + 1]) ? (arr_62 [i_13] [i_19] [i_19]) : (arr_55 [i_19])))));
            arr_80 [i_13] [i_19] [i_19] = (((arr_18 [i_13] [i_19]) - (-127 - 1)));
            arr_81 [i_13] |= var_11;
        }
        arr_82 [i_13] [i_13] |= var_4;
        arr_83 [i_13] = var_2;
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 18;i_20 += 1)
    {
        var_44 = var_12;
        var_45 = (arr_19 [i_20]);
    }
    #pragma endscop
}
