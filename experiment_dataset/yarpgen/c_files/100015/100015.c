/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 &= (((((min(var_1, var_13)))) ? (min(var_3, (arr_1 [10]))) : ((((479475819 / var_3) ? (((var_12 ? var_5 : var_11))) : var_8)))));
        arr_3 [i_0] = ((-((56 ? 0 : 1))));
        arr_4 [i_0] = (((var_16 <= (var_7 % var_12))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] = var_16;
            var_20 = (((arr_6 [i_0] [i_1] [i_0]) ? var_11 : (((min(45, 64))))));
            arr_8 [i_0] = (i_0 % 2 == 0) ? (((var_17 & ((((((((arr_1 [i_0]) + 9223372036854775807)) << (((((arr_1 [i_0]) + 1747727820018938176)) - 30))))) ? ((var_12 % (arr_1 [i_0]))) : (arr_5 [i_0] [i_0])))))) : (((var_17 & ((((((((((arr_1 [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (((((((arr_1 [i_0]) + 1747727820018938176)) - 30)) - 2205386346673438791))))) ? ((var_12 % (arr_1 [i_0]))) : (arr_5 [i_0] [i_0]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_21 -= (arr_5 [i_0] [i_1]);
                var_22 = ((var_4 << (var_6 - 67)));
            }
            var_23 = ((var_17 ? ((-(var_9 % var_3))) : (((var_3 ? (arr_0 [i_0] [i_1]) : var_4)))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_24 = (max(((min(var_10, var_8))), var_18));
        var_25 |= (max(((((0 || var_11) <= (arr_14 [i_3] [i_3])))), (arr_13 [i_3] [i_3])));
        var_26 *= (arr_14 [i_3] [i_3]);
        var_27 = var_18;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_28 = var_10;
            var_29 = var_18;
            var_30 = (max(var_30, var_17));
            arr_17 [i_3] [i_4] = (var_3 | 56);
            var_31 = (((var_4 == var_18) ? (arr_13 [i_4 + 2] [i_4 + 2]) : 56));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((((arr_13 [i_5] [i_5]) ? 9223372036854775807 : (arr_13 [i_5] [i_5]))));
        var_32 = ((((((var_2 + (arr_18 [i_5] [i_5])))) ? (arr_18 [i_5] [i_5]) : ((var_15 ? var_14 : var_6)))));
        var_33 = 56;
        arr_22 [i_5] = (min(532217931, (((((((var_15 < (arr_13 [10] [10]))))) < ((var_16 ^ (arr_13 [i_5] [i_5]))))))));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_34 = var_11;
            var_35 = (min(((max((arr_18 [i_5] [i_6]), var_0))), (((((var_2 ? 532217931 : (arr_19 [i_6])))) ? (arr_16 [7] [i_5]) : (var_14 / var_3)))));

            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                var_36 |= ((((((arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1]) ? var_10 : (arr_28 [i_7 - 1] [i_7 + 2] [i_7 - 2])))) || (arr_28 [i_7 - 2] [i_7 + 1] [i_7 - 2])));
                var_37 = var_14;
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_38 = ((var_16 ? (((((var_18 ? (arr_24 [i_5]) : var_11))))) : var_10));
                var_39 &= (((53 ? (((min(var_5, var_8)))) : (((arr_14 [i_8] [16]) ? var_16 : var_2)))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_40 *= (max(((((((arr_31 [i_9] [10] [10] [i_5]) <= (arr_31 [i_5] [12] [i_5] [i_5]))) || -23))), var_6));
                var_41 &= (min((((1 > (arr_32 [i_5] [i_5] [i_6] [i_5])))), (arr_16 [18] [18])));
            }
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_42 = var_16;
            var_43 = 44;
            var_44 = (min((max(((max(56, 1))), (max(-360161891, var_0)))), (((var_17 || (((var_15 ? var_13 : var_6))))))));
            var_45 = (arr_33 [i_5]);
        }
    }
    var_46 = var_6;
    var_47 = ((var_5 < ((((10059 ? var_0 : -15518)) << (((min(var_14, var_0)) - 1094901601))))));
    var_48 = var_0;
    #pragma endscop
}
