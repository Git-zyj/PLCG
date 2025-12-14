/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_6, var_10))) ? var_12 : ((((min(65535, var_1))) ^ ((15002827315665973992 ? 9223372036854775807 : 13)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_0 + 1] = ((var_5 << (((var_3 + 3489328138498330158) - 16))));

            for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_18 = (min(var_18, (var_9 || 1)));
                    var_19 = var_7;
                    var_20 += (((((0 ? var_13 : var_9))) ? ((1 ? -1 : 13)) : var_9));
                }
                var_21 = var_8;

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_0 - 1] [i_1] [i_2 - 1] [i_2] = (((var_11 + 2147483647) >> (var_1 - 2098877119)));
                    arr_16 [i_4] [i_2 + 1] [i_2] [i_1] [i_0 + 1] = ((var_6 ? -31 : 4));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_22 -= 57262;
                    var_23 = (((((var_8 ? 117 : 202))) || (((var_16 ? var_8 : 0)))));
                    arr_19 [i_2] [i_1] [i_2] = ((var_11 ? 1 : 1));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_24 [i_0 - 1] [i_0 + 1] [i_2] [i_0] [i_0 - 1] = 1686567262;
                    var_24 = ((1 ? (~1) : (-9223372036854775807 - 1)));

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_25 = 1;
                        var_26 += 1;
                        var_27 ^= (-var_4 * var_10);
                    }
                    arr_27 [i_0 - 2] [i_0] [i_2] [i_0 + 1] = ((var_8 / var_15) / var_5);
                    var_28 -= var_10;
                }
                var_29 = (max(var_29, var_15));
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
            {
                arr_31 [i_8 + 2] [i_8] [i_8] [i_0] = (((((var_4 ? var_5 : var_15))) ? var_12 : var_3));
                var_30 = ((0 ? 144110790029344768 : -8527978313320917675));
                var_31 *= (var_6 != 0);
                var_32 = -2137962767;
                arr_32 [i_8] = 185;
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_33 ^= ((1173106942 ? 9223372036854775807 : 124));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_42 [i_0 - 1] [i_9 - 1] [i_0] [i_11] |= (1 ^ 0);
                        arr_43 [i_1] [i_9] [i_11] = ((((17179852800 ? 53417 : var_11))) ? (var_9 != var_16) : (var_13 & 13313));
                    }
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        arr_48 [i_9] [i_1] [i_9] [i_10] [i_12 - 2] = var_2;
                        arr_49 [i_9] [i_1] [i_1] [i_1] [i_1] = var_3;
                        arr_50 [i_0] [i_1] [i_9] [i_12 - 3] [i_12 - 2] = ((266934555 ? 1 : var_8));
                        arr_51 [i_9] [i_9] [i_12] = var_14;
                    }
                    arr_52 [i_1] [i_1] [i_9] [i_1] [i_1] = ((((-13309 ? var_4 : 17438)) * var_6));
                }
                arr_53 [i_9] [i_9] = ((~var_2) - ((1 ? var_13 : var_4)));
                arr_54 [i_9] [i_1] [i_1] [i_9 - 1] = ((59 ? var_9 : var_10));
            }
            var_34 = 1;
            arr_55 [i_0 + 1] [i_1] [i_1] = ((var_0 ? var_10 : var_3));
            arr_56 [i_0] [i_0 - 2] [i_1] = 18446744056529698815;
        }
        arr_57 [i_0] [i_0 - 1] = (min((1 > 57262), ((-((var_9 ? 18446744073709551613 : 240))))));
    }
    var_35 = var_14;
    var_36 = (!var_13);
    var_37 = ((((min((((18446744073709551599 ? var_16 : var_7))), var_10))) ? ((min(var_12, var_5))) : 17675153555757175949));
    #pragma endscop
}
