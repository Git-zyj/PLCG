/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((var_11 ? ((3127 ? (arr_2 [i_0]) : 1)) : (((max(var_4, (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_15 &= -6037966871982404267;
            var_16 = (max(var_16, (arr_1 [i_0])));
            var_17 = ((-(arr_3 [i_0] [i_1] [i_1 + 1])));
        }
        var_18 += ((1 ? 22240 : -8327749647475036148));
        var_19 |= (arr_5 [i_0] [i_0]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = ((((95 || (arr_2 [i_2]))) ? (arr_2 [i_2]) : (max(2047698351206957027, 25))));
        var_21 = (((var_4 / var_13) ? (min(-6037966871982404267, 63)) : (arr_8 [i_2])));
        arr_10 [i_2] = (((arr_4 [i_2] [17] [i_2]) ? (arr_1 [i_2]) : 1));
        var_22 = (max(var_22, var_0));
        var_23 = (min(var_23, 255));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        var_24 = (arr_12 [i_3 + 1]);
        arr_13 [i_3] [1] &= (((arr_4 [i_3] [i_3 + 2] [i_3]) ? 248 : var_4));
        arr_14 [i_3] = arr_1 [i_3 + 2];
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_18 [i_4] = (arr_16 [i_4] [i_4]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_4] = 1;
            var_25 = (((arr_21 [i_5] [i_5] [i_4]) ^ (arr_15 [i_5])));
            var_26 = var_7;
            var_27 ^= ((1608232532 ^ ((var_10 ? -28 : var_2))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_28 += var_3;
            var_29 = (((((1 ? var_6 : -110))) ? ((34579955 ? ((1 ? 18446744073709551615 : var_9)) : 16777184)) : 1));
            arr_25 [i_4] [16] |= 1;
        }
        var_30 = ((var_4 ? (((arr_16 [3] [i_4]) ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4]))) : ((-(((arr_15 [i_4]) ? var_8 : (arr_17 [i_4] [i_4])))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_33 [i_4] [i_4] = (arr_19 [22] [i_7]);

                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    var_31 = (-9223372036854775807 - 1);
                    var_32 = ((arr_24 [15]) == (arr_32 [i_4] [i_7] [i_8] [14]));
                }
            }
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                arr_39 [i_4] [i_4] = (((!(arr_28 [i_4] [i_4]))) ? (arr_32 [i_10 - 1] [2] [i_10] [i_10]) : 864119219);
                var_33 ^= (((-15 + 2147483647) << (((-6037966871982404262 + 6037966871982404292) - 30))));
                var_34 = 16399045722502594588;
                var_35 = (min(var_35, var_0));
            }
            for (int i_11 = 4; i_11 < 22;i_11 += 1)
            {
                arr_42 [i_4] [16] [i_4] [i_11 - 1] = (~0);
                var_36 = ((arr_20 [i_11 - 2] [i_4]) * 16777183);
            }
            arr_43 [i_4] [i_4] = var_12;
            var_37 = (((arr_38 [i_4]) ? (!576459652791795712) : ((var_6 ? (arr_21 [i_4] [1] [i_7]) : var_8))));
            var_38 = (max(var_38, (((~(arr_16 [i_4] [18]))))));
            var_39 = var_8;
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_47 [i_4] [i_12] = ((~(((arr_20 [i_4] [i_4]) - (arr_20 [i_4] [i_4])))));

            /* vectorizable */
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                arr_51 [i_13] [i_4] [i_4] = (arr_21 [i_13 + 3] [i_13 - 1] [i_13 + 3]);
                arr_52 [i_4] [i_12] [16] = (arr_36 [i_13] [i_13] [i_13 + 1] [i_13 + 3]);
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                arr_55 [8] [i_12] [i_4] [19] = (!var_6);
                var_40 = ((arr_38 [i_4]) ? 16383 : var_8);
            }
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 23;i_15 += 1)
        {
            arr_58 [i_4] [i_4] = 30872;
            arr_59 [i_4] [i_15] = (((arr_48 [19] [19] [i_15 + 1] [i_4]) / -1209849871));
            arr_60 [i_4] [i_4] [i_4] = (arr_31 [i_15] [i_4]);
        }
    }
    var_41 = (((1 || (((var_1 ? var_11 : 58))))));
    var_42 = (max(var_42, 0));
    var_43 = var_5;
    var_44 = var_1;
    #pragma endscop
}
