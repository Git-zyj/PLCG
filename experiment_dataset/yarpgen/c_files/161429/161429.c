/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = ((((max((arr_0 [i_0 + 1] [i_0]), var_7))) ? ((var_3 ? (arr_1 [i_0]) : var_0)) : (((min((!var_4), var_7))))));
        arr_2 [i_0] = max((arr_0 [i_0 + 2] [i_0 + 2]), (((!var_7) ? ((var_11 ? var_0 : var_1)) : (max(var_8, var_0)))));
        var_15 *= ((((min((((73 ? 73 : 1027047240))), (arr_1 [i_0])))) + (var_11 + var_0)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 *= ((~((-14313 ? 1830107623 : 8490047266493031730))));
            var_17 &= (min((((0 ? var_1 : var_9))), (((arr_0 [i_0] [i_0]) ? (((var_0 ? (arr_0 [i_0] [i_0]) : var_10))) : (((arr_1 [i_0]) ? var_13 : var_2))))));
            var_18 = (max(var_18, (((!((min((arr_0 [i_0] [i_1]), (arr_3 [i_0 + 1])))))))));
        }
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_19 = (arr_3 [i_2]);
            arr_9 [i_2] [i_3] = ((-((((var_2 / var_0) != (((arr_0 [i_2] [i_3]) % -5298845216019746980)))))));
        }
        var_20 += (((((max(31, -1991644783)))) ? ((((var_8 || (((arr_1 [i_2]) || var_10)))))) : 1071188693));
        var_21 -= (((var_0 - var_8) ? var_12 : var_0));
        var_22 = (max(((((arr_1 [i_2]) + var_3))), (arr_3 [i_2 + 1])));
        arr_10 [i_2] [i_2] = (max(((var_5 ? (arr_1 [i_2 + 3]) : (arr_6 [i_2 + 2]))), (((~(!var_4))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_23 = ((65535 / var_5) ? var_5 : (((arr_12 [i_4]) ? var_6 : (arr_11 [i_4]))));
        var_24 = (((((arr_12 [i_4]) / var_8)) < -var_5));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_25 = (((2637450503808166948 ? var_0 : var_11)));
            var_26 = ((~var_7) & (~var_7));
        }
    }

    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_27 = (~-9223372036854775790);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_28 &= (arr_4 [i_6 - 2] [i_9 - 1]);
                            var_29 = var_9;
                            var_30 = (((((~(arr_13 [i_6])))) ? var_7 : (arr_22 [i_6] [i_10 - 2] [i_10])));
                            arr_29 [i_8] [i_6] [i_8] [i_9] [i_10] = ((var_6 ? var_2 : var_7));
                            var_31 &= (!var_3);
                        }
                    }
                }
            }
            var_32 = (((arr_15 [i_6 - 3] [i_6 - 3] [i_6]) ? (arr_15 [i_7] [i_6 - 3] [18]) : var_8));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_33 ^= (((var_0 ? (!var_2) : var_4)) / (arr_16 [i_6] [i_11]));
            var_34 *= (((min((min(var_3, (arr_6 [i_6]))), (((var_1 / (arr_0 [i_6] [i_11])))))) > var_3));
            var_35 = (max(var_35, -73));
        }
        arr_32 [i_6] = min(var_6, (((~9) ? (~var_6) : var_0)));
        var_36 = (max(var_36, var_6));
        var_37 = ((((min((arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_8 [i_6 - 1] [i_6 - 1])))) ? (arr_28 [i_6] [i_6] [9] [i_6] [i_6] [i_6] [i_6]) : (((arr_21 [i_6] [i_6 - 1] [i_6]) ? (arr_8 [i_6] [i_6]) : (arr_21 [i_6 - 3] [i_6] [i_6 - 3])))));

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_38 = ((~(~-73)));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_39 += (max(var_12, ((-((((arr_17 [i_15] [i_15]) != var_0)))))));
                            var_40 = ((!((((((3621863247911842349 ? 113 : 15))) ? 0 : 84)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
        {
            arr_47 [i_6] [i_6] [i_16] = ((!(arr_13 [i_16])));
            arr_48 [i_6] [i_6] = -var_1;
            arr_49 [i_6] [i_6] [1] = var_10;
            arr_50 [i_16] [i_6] [i_6] &= (arr_5 [i_6 + 1]);
            arr_51 [i_6] = var_1;
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
        {
            arr_56 [i_6] [i_6] [i_6] = (((-var_4 + var_4) / -var_1));
            var_41 = (((((min(4294967274, 2313033862))) ? 18446744073709551615 : ((((-9223372036854775807 - 1) ? -8112744099948513358 : var_3))))));
            arr_57 [i_6] = var_5;
            var_42 = var_0;
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                {
                    var_43 = (min(var_43, (((74 + var_9) ? var_6 : ((20014 ? (!var_2) : ((var_1 ? var_2 : var_7))))))));
                    arr_68 [i_18] [i_18] [i_18] [i_18] = (((((~(~var_5)))) & ((((var_13 ? (arr_65 [5] [5] [i_18]) : var_2)) ^ var_8))));
                }
            }
        }
    }
    var_44 = ((((min((~var_3), var_8))) ? ((-(var_0 & var_3))) : var_0));
    #pragma endscop
}
