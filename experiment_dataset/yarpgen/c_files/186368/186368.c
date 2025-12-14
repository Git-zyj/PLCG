/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_20 = var_17;
            var_21 += ((var_16 >= ((-1 ? -6039525090663811510 : 1))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_22 *= (var_13 && var_6);

            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                var_23 = ((var_13 ? ((var_2 ? var_6 : var_11)) : (var_5 % var_6)));
                var_24 -= (-61 && 12632);
                var_25 = (var_19 | var_18);
                var_26 = (-47 & 47);
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_13 [i_0] [i_2] [i_4] = (((6242534370073800168 + 2147483647) >> ((((var_14 ? var_1 : var_19)) - 18446744072478373265))));
                var_27 *= ((!(var_6 / var_5)));
                var_28 = ((var_12 << var_10) ? ((var_12 ? var_14 : var_11)) : var_8);
                arr_14 [i_0] [i_2] [i_4] = ((var_16 ? (var_4 + var_11) : var_0));
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                var_29 = ((-67 % 266338304) <= var_9);
                arr_18 [i_0] [i_2] [i_5] [i_5] = (var_5 || var_9);
                var_30 = ((1 << (4294967295 - 4294967282)));
                arr_19 [i_0] [i_5] [i_5] = -var_13;

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_22 [i_5] = ((-((var_3 ? 12778797728374549410 : 25474))));
                    var_31 ^= (var_12 ^ var_9);
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_32 = ((((1239295008481127470 ? 9223372036854775807 : -358730853)) >> (((~var_15) - 3047105971))));
                        var_33 += (((var_11 && var_0) <= ((var_18 ? var_15 : var_3))));
                        var_34 = var_5;
                    }
                    var_35 = (((var_13 < var_19) >= ((var_7 ? var_17 : var_18))));
                    arr_28 [i_5] [i_7] = (var_2 & var_2);
                    arr_29 [i_7 + 1] [i_5] [i_5] [i_5] = (((var_1 - var_13) || var_17));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_34 [i_0] [i_2] [i_5] = ((var_4 << ((((var_14 ? var_3 : var_10)) + 73))));
                    var_36 = (max(var_36, (!var_17)));
                }
            }
            var_37 = var_8;
        }
        var_38 = var_5;
        arr_35 [i_0] [i_0] = ((var_15 ? var_12 : var_17));
    }
    var_39 ^= (max(var_6, (((var_19 == var_1) ? var_13 : (max(var_1, var_14))))));
    #pragma endscop
}
