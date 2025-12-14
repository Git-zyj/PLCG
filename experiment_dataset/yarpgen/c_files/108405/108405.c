/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((2173470633 ? var_10 : var_12));
    var_15 = (max(((2121932036 ? 28175 : 48488)), (var_8 * var_9)));
    var_16 = (max(var_16, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] &= var_2;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_11 [10] [i_2] = (-(!28175));
                    var_17 = -13;
                    var_18 += var_3;
                    var_19 = ((!(((var_13 ? var_5 : var_3)))));
                    var_20 = (max(var_20, ((((arr_7 [i_1]) < ((var_12 ? -5 : 178)))))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_21 = var_9;
                    var_22 = (var_13 * -37);
                    var_23 = ((var_0 || (var_0 - -8876494283611858172)));

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        var_24 = (max(var_24, ((((arr_6 [i_0] [10] [i_4]) / 5)))));
                        arr_16 [i_4] [10] [i_5] [i_4] [i_5] [i_1] [i_0] = var_6;
                    }
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        var_25 = (min(var_25, (((-8876494283611858172 ? -32746 : -67)))));
                        var_26 ^= (-(arr_6 [i_0] [i_1] [i_4]));
                    }
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_27 += ((~((var_11 ? (arr_7 [i_7 + 1]) : var_13))));
                    arr_22 [14] [i_1] [i_1] [0] [i_1] [i_1] = ((~(arr_17 [i_7 - 2] [i_7] [i_7 - 1] [1] [i_7 - 2])));
                    arr_23 [i_0] [i_1] [i_2] [i_7] = ((var_7 || (arr_10 [i_1] [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_7])));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_1] [i_2]) ? var_3 : (arr_13 [i_0] [i_1] [i_2])));
                }
                var_28 = ((((var_11 ? (arr_10 [i_1] [21] [i_2] [i_0] [i_0] [i_2]) : 1)) * 0));
                var_29 = (max(var_29, (arr_17 [i_0] [i_0] [i_1] [i_2] [i_2])));
                var_30 = (!var_9);
                var_31 = (min(var_31, var_7));
            }
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_32 = var_1;

                    for (int i_10 = 4; i_10 < 20;i_10 += 1)
                    {
                        arr_33 [i_0] [i_8 + 3] [i_8] [i_10] = ((var_0 ? var_3 : (arr_15 [i_10 - 3] [i_1] [21] [i_8 + 1] [i_8])));
                        arr_34 [i_8] [i_1] [i_1] [i_1] [i_10] [i_1] [i_9] = (var_4 + var_2);
                        var_33 *= (arr_18 [i_8 + 1] [i_10]);
                    }
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        var_34 = var_13;
                        var_35 = (arr_9 [i_11] [i_9] [i_8] [i_1] [i_0]);
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_1] [i_8 + 4] [i_8] = (arr_36 [i_0] [i_8] [i_0] [i_0] [i_0] [2] [14]);
                    var_36 = -4;
                    var_37 = (min(var_37, (((((((arr_12 [i_8 - 1] [i_12] [i_8]) ? var_9 : var_5))) ? (var_3 + var_10) : ((var_11 ? (arr_26 [i_0] [i_8] [11]) : (arr_4 [i_8 + 3] [i_1] [i_0]))))))));
                }
                var_38 ^= ((var_8 ? var_9 : (arr_14 [i_8 + 1] [0] [i_8 + 1] [0] [i_8])));
            }
            var_39 = (max(var_39, (arr_18 [i_0] [2])));
            var_40 -= ((var_4 - (!var_5)));
            var_41 = var_11;
        }

        for (int i_13 = 3; i_13 < 19;i_13 += 1)
        {
            var_42 = (((arr_9 [i_13 + 1] [i_13 - 1] [21] [i_13] [i_13 + 2]) ? ((-(arr_43 [i_0] [i_13] [i_0]))) : var_0));
            arr_44 [i_0] [21] [i_13] = ((((var_11 ? -67 : var_11)) != var_11));
            var_43 |= ((((var_4 >> (var_5 - 57363))) / (((arr_15 [i_0] [6] [i_0] [i_0] [8]) ^ (arr_18 [i_0] [10])))));
        }
    }

    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        var_44 = (max(var_44, (!var_6)));
        var_45 *= (arr_19 [i_14 + 3] [20] [i_14] [i_14 - 1] [i_14] [i_14 + 2] [i_14]);
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        arr_49 [16] &= (var_7 ? (max(var_12, (max((arr_48 [i_15]), (arr_48 [i_15]))))) : (((min(28187, 0)))));
        arr_50 [i_15] = (12 + -82);
    }
    #pragma endscop
}
