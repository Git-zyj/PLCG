/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_18 = (min(var_18, (arr_0 [i_0 + 2] [i_0 - 3])));
            var_19 = -1;
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_2] [i_0] = (((arr_2 [i_0 + 3]) == 189));
            var_20 = ((((4041593157 ? var_14 : 2863388373)) - (arr_2 [i_0 - 3])));
        }
        var_21 = ((1431578940 ? ((2446 ? (arr_1 [i_0]) : 1099511627775)) : (arr_0 [i_0 + 2] [i_0 + 3])));
        var_22 += (var_9 > var_14);
        arr_10 [i_0] = (arr_0 [i_0 - 2] [i_0 - 3]);
        arr_11 [i_0] &= 1431578920;
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_23 = (((((-((min(var_12, (arr_13 [i_3 + 1]))))))) ? (min((arr_8 [i_3] [i_3]), (((var_5 - (arr_3 [i_3] [i_3] [i_3])))))) : (((arr_8 [i_3 - 2] [i_3 + 2]) & (arr_8 [i_3 - 2] [i_3 + 2])))));
        var_24 = (max((arr_7 [i_3 - 2]), ((((max(var_6, 18446744073709551594))) ? 190 : (18 ^ var_1)))));
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((max((max(((1348755654348788278 ? (arr_3 [i_4 - 1] [i_4] [20]) : -1741863910)), (arr_7 [14]))), var_10)))));
        var_26 = (min((~-64), var_7));
        var_27 = (min(var_27, (((!(((-(arr_18 [i_4 - 4])))))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_28 = 18446744073709551611;

        /* vectorizable */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_29 &= arr_7 [15];
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_30 += ((arr_6 [i_8 + 1] [3] [i_7 + 1]) ? ((8337466757315946517 ? var_9 : (arr_23 [i_5] [i_5] [i_7]))) : var_12);
                            var_31 = ((var_13 & (arr_15 [i_8 + 2])));
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_32 = (((arr_18 [i_5 - 1]) | var_3));
                            var_33 = ((-var_5 ? var_5 : (65535 | 11)));
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_34 = 253374129;
                            arr_37 [i_5] [6] [1] [i_11] = (((((var_12 ? 67 : var_5))) ? var_11 : (arr_22 [i_11])));
                            arr_38 [i_5] [1] [i_7] [i_11] [i_11] = (var_15 ^ var_7);
                        }
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            arr_41 [i_7 - 1] [i_12] [i_7 + 1] [i_7] [i_7] [i_7] = var_10;
                            arr_42 [i_12] [i_12] [i_12] = (arr_40 [i_5 - 1] [2] [i_7] [i_8]);
                            var_35 = (((arr_24 [i_5 - 1]) % (arr_24 [i_5 - 1])));
                        }
                        var_36 = arr_16 [i_5] [8];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_49 [i_5 - 1] [i_5 - 1] [i_13] [i_14 - 2] [1] = (((((557592020 % (arr_32 [i_5] [i_6] [i_6] [i_14])))) ? 9223372036854775807 : var_1));

                        for (int i_15 = 1; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_5] [i_6] [i_6 + 4] [14] [1] [i_15] = (arr_18 [i_13 + 2]);
                            var_37 = (min(var_37, (((var_7 * (arr_32 [i_6 + 1] [i_13] [i_13 + 2] [i_15 + 2]))))));
                            var_38 = (3070 + 227);
                            var_39 = ((~(669159540 ^ var_14)));
                        }
                        for (int i_16 = 1; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            var_40 = (((var_2 ? var_4 : (arr_56 [i_5] [i_6] [i_5] [0] [i_16 - 1]))));
                            var_41 = (max(var_41, (arr_53 [i_16] [i_13] [i_13] [i_13] [i_5 - 1] [i_5 - 1])));
                            var_42 = (((arr_26 [i_5 - 1]) ? 8 : (arr_26 [i_5 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            arr_61 [1] = (arr_52 [i_17] [8] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]);
            var_43 = (min(var_43, ((max(((min(var_17, var_7))), (min((!var_6), var_12)))))));
        }
    }
    var_44 += 1383602017672271069;
    #pragma endscop
}
