/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((var_7 * 255) ? ((min(0, (arr_0 [i_0] [i_0])))) : ((var_0 ? var_8 : var_17))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((var_4 ? ((1 % ((var_12 ? (arr_3 [i_0] [i_0]) : 2156584176240256411)))) : ((((((~(arr_3 [i_0] [i_1])))) ? (((arr_0 [15] [i_0]) ? -7934656403203832485 : var_2)) : (~0))))));
            arr_6 [i_1] [i_1] = ((~((var_0 ? 2147483647 : (arr_0 [21] [i_1])))));
            arr_7 [i_1] = (~245);
            arr_8 [i_1] [i_1] = (arr_1 [i_1]);
            var_18 ^= ((~(arr_0 [i_1] [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_12 [i_2] [i_0] = (~6744995794519896801);
            var_19 = (arr_3 [i_0] [i_2 + 1]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_16 [7] = (~32027);
            var_20 = (((~var_3) ? (((~((2 ? var_1 : 11))))) : (min(var_6, (var_2 != var_7)))));
            arr_17 [i_0] [22] [i_0] = 255;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 ^= ((((max((arr_0 [i_0] [i_4]), (arr_9 [i_0])))) ? -31 : var_2));
            arr_22 [0] = ((~(~var_15)));
            var_22 = (arr_0 [i_0] [i_4]);
            arr_23 [i_0] [i_0] [i_4] = (((18446744073709551612 % (var_9 || var_0))));
            arr_24 [i_0] = ((~((~((-8128179664164935753 ? (arr_4 [i_4]) : var_11))))));
        }
    }

    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        arr_28 [i_5] [8] = ((((min(3, -31))) * (!var_7)));
        var_23 = 15;
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_33 [9] [i_6] [i_6] = var_4;
            var_24 = (max(var_24, (((-1657931614283905637 ? var_15 : ((min((arr_32 [i_6 - 1] [i_7]), (arr_32 [i_6 - 1] [i_7])))))))));
            arr_34 [i_6 - 1] [i_6] [i_6 - 1] = ((~(((arr_20 [i_6] [i_6 - 1] [i_6]) ? (arr_20 [i_7] [i_6 - 1] [i_6]) : 17758))));
            arr_35 [i_6] [i_7] = (((~var_3) ? 4126063771 : (((((arr_27 [i_6]) || var_17)) ? (~var_9) : var_3))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_39 [i_6] [1] = (arr_37 [i_6] [i_6]);
            var_25 = ((min(((-718146240 ? (arr_4 [i_6]) : (arr_20 [i_8] [i_8] [i_8]))), (arr_32 [i_6 - 1] [i_6 - 1]))));

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_26 = (min(-718146265, (min((arr_11 [10] [i_8]), var_8))));
                arr_42 [i_9] [i_9] [i_9] [i_6] = (((~((~(arr_21 [i_6] [i_6]))))));
                var_27 ^= ((((min(((var_0 ? var_16 : var_6)), (((arr_1 [i_6]) * var_7))))) ? ((((arr_26 [i_8] [i_6 - 1]) % (arr_26 [i_6] [i_6 - 1])))) : (max((((337218626 ? var_4 : 254))), (min(16777215, var_15))))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_45 [i_6 - 1] [i_10] [i_10] = (arr_21 [i_6 - 1] [i_6 - 1]);
            arr_46 [1] [i_10] = (~-var_3);
            arr_47 [i_6] = ((~(arr_27 [i_6])));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_28 = (min((((var_2 ? var_12 : 255))), (arr_9 [i_6])));
            var_29 += (((~((-122 | (arr_18 [i_11]))))));
            arr_51 [i_11] = ((var_13 - (arr_13 [i_6 - 1] [i_6 - 1])));
        }
        var_30 = 9223372036854775785;
        var_31 = (min(var_31, (~var_13)));
        arr_52 [i_6] [2] = ((((((arr_11 [i_6 - 1] [i_6 - 1]) ? (arr_11 [i_6 - 1] [0]) : (arr_11 [i_6 - 1] [i_6])))) ? var_8 : var_3));
    }
    #pragma endscop
}
