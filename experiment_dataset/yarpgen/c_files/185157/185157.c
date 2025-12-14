/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = ((((((var_3 ? var_6 : var_8) == ((((3840 || (arr_2 [i_2]))))))))));
                        var_16 &= ((+((var_10 - (((arr_6 [i_0] [i_0] [5] [i_0]) ? var_5 : var_9))))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = ((((var_14 ? (var_1 != var_1) : ((var_5 % (arr_8 [i_1] [i_1]))))) % ((((arr_9 [i_4] [i_1] [i_0 + 2]) ? (((arr_6 [i_1] [4] [i_4] [i_1]) - (arr_13 [i_0]))) : var_2)))));
                var_18 = (((61696 ? (min(var_1, 3243213246) : (max(61708, var_10))))));
                var_19 = ((+((var_1 ? ((((arr_13 [i_1]) < var_2))) : var_8))));
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_20 = ((var_0 || (2501269779521624509 & var_9)));
                    var_21 = var_10;
                    var_22 = (arr_8 [i_5 - 1] [i_0 + 2]);
                    var_23 = (min(var_23, 41875));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_24 *= ((var_8 ? (arr_2 [i_5 + 3]) : var_9));
                    var_25 = (((var_6 - 1) ? (arr_9 [i_0] [i_0] [i_1]) : (((arr_17 [i_0] [i_0] [i_0] [8]) ^ var_4))));
                    var_26 = ((+(((arr_12 [i_0] [1] [i_5]) & var_5))));
                    var_27 ^= (arr_14 [i_0 + 2]);
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_28 = ((-(arr_23 [i_0] [i_0] [10] [i_0])));
                    var_29 = (max(var_29, (arr_7 [i_0] [i_1] [i_5])));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_30 = (arr_16 [i_0 + 1] [i_0 + 2] [i_5 + 1] [i_5]);
                    var_31 = (((var_7 + var_9) ? (((2040 == (arr_9 [i_0] [0] [i_0 - 1])))) : (-14629 % 1)));
                    var_32 = 2501269779521624509;
                    var_33 += var_10;
                }
                var_34 += 61673;
                var_35 = ((((var_6 ? (arr_19 [i_0] [i_1] [i_5]) : (arr_26 [i_5 - 2] [i_1] [i_5] [i_1] [i_1]))) / var_1));
                var_36 = -var_0;
                var_37 = var_12;
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_38 = (arr_8 [i_0 + 2] [i_0 + 1]);
                var_39 += (min((arr_19 [8] [8] [i_0]), (min(var_12, var_1))));
            }
        }
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            var_40 = (max(var_40, ((((arr_9 [i_0 - 1] [i_0 - 1] [6]) * (arr_9 [i_0 + 1] [i_11] [3]))))));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    var_41 = (max(var_41, (((var_8 == (~-1592588258))))));

                    for (int i_14 = 2; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_42 = var_5;
                        var_43 = ((var_0 || (arr_7 [i_14 - 2] [i_13] [i_0 - 1])));
                        var_44 = var_6;
                    }
                    for (int i_15 = 2; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_45 &= (var_2 ? var_1 : var_3);
                        var_46 |= (arr_26 [i_11] [i_11 - 2] [i_11 - 3] [i_13 + 3] [i_13]);
                    }

                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        var_47 = 18446744073709551614;
                        var_48 ^= (((-2 ? 15945474294187927107 : var_10)));
                        var_49 = ((134217727 ? (((var_9 | (arr_7 [i_0] [4] [i_16 + 1])))) : ((var_3 ? var_2 : var_6))));
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        var_50 = 18951;
                        var_51 = (arr_44 [5] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]);
                        var_52 = (arr_18 [i_13 - 1]);
                    }
                }
                var_53 = (arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] [i_0 - 1]);
                var_54 |= (arr_34 [i_12]);
            }
        }
        var_55 = (min(var_55, (((((((max(var_10, (arr_22 [10])))))) / ((var_7 + (var_6 % var_12))))))));
        var_56 = ((min(3300324262636054408, (arr_29 [i_0] [2] [i_0] [i_0]))));
        var_57 = ((101 / (min(var_5, var_11))));
    }
    var_58 = var_0;
    var_59 = (1 & 255);
    #pragma endscop
}
