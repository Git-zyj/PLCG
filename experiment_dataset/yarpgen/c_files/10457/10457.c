/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (min((((4051 & 19) ? (((arr_1 [i_0]) | (arr_0 [i_0] [i_0]))) : ((-4051 ? 4040 : -1)))), (((((3461558731 ^ (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ^ -883735067)) : 4072))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = 127;
                        var_12 |= (arr_7 [16] [i_2] [16]);
                        var_13 = ((arr_0 [1] [1]) << (((-906800920 < ((var_7 ^ (arr_3 [i_1] [i_2] [i_3])))))));
                    }
                }
            }
            var_14 = (max(var_14, -21));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] = (arr_12 [i_0] [i_0]);

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_15 = ((arr_12 [i_0] [i_0]) % var_6);
                            var_16 *= var_6;
                        }
                        var_17 = ((((((arr_4 [i_1 + 2] [i_5]) ^ (arr_9 [i_0] [i_1] [i_1 + 1] [i_1 - 1])))) ^ ((~(arr_19 [i_1 + 1] [i_1] [i_0])))));
                        var_18 = ((((!(arr_9 [i_0] [i_5] [i_5] [i_0]))) && -4073));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min(var_2, var_5)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            {
                var_19 = (i_8 % 2 == zero) ? ((~(((arr_26 [i_7]) << ((((var_5 * (arr_5 [i_8] [i_8] [i_8]))) - 3366712313373728000)))))) : ((~(((arr_26 [i_7]) << ((((((var_5 * (arr_5 [i_8] [i_8] [i_8]))) - 3366712313373728000)) - 17469333015991162299))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_20 = ((-4057 ? 23364 : 18446744073709551615));

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_33 [i_7] [i_8] [i_9] [i_10] [i_10] = ((-(arr_23 [i_8 + 1])));
                        arr_34 [i_7] [i_8] [i_8] [i_9] [i_10] [i_8] = (((arr_32 [i_7] [i_8 - 3] [i_8]) ? (arr_25 [i_8]) : 23347));
                        arr_35 [i_8] [i_10] = (((arr_30 [i_8]) ? (arr_30 [i_8]) : (arr_30 [i_8])));
                        var_21 = (arr_24 [i_7]);
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_8] = (23347 / 1888532601);

                        for (int i_12 = 1; i_12 < 12;i_12 += 1)
                        {
                            var_22 = (arr_12 [i_8] [i_8]);
                            var_23 = ((var_8 ? (arr_9 [18] [i_11 - 1] [18] [i_12 + 1]) : (arr_15 [i_11 + 1] [i_12 + 1] [i_11 + 1] [i_12])));
                            arr_41 [i_8] [i_8] [i_8] = (arr_4 [i_12 + 1] [i_11]);
                            arr_42 [i_8] [i_11] [i_12] = (50056 == var_5);
                        }
                        var_24 = (!-2569113397522957362);
                        var_25 = ((((((arr_12 [i_8] [i_8]) / var_7))) ? var_7 : (arr_40 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11 - 1])));
                    }
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            arr_49 [i_7] [10] [i_8] [i_9] [i_13] [i_14] |= (arr_47 [8]);
                            arr_50 [i_8] [i_8] [i_9] = (arr_18 [i_7] [i_8] [i_8] [i_8] [i_14]);
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            var_26 = ((-4042 & (arr_2 [i_7] [i_8 + 1])));
                            arr_55 [i_7] [i_8] [i_9] [i_13] [i_13] [i_8] = (((arr_16 [i_8] [i_8] [i_8 + 3] [i_13 + 1] [i_15]) | (arr_16 [i_7] [i_8] [i_8 - 1] [i_13 - 1] [i_15])));
                            var_27 |= (arr_14 [i_13] [i_8] [i_8] [i_8]);
                        }
                        arr_56 [i_7] [i_7] [i_8] [i_7] [i_8] [i_7] = var_9;
                        var_28 = (2897241107 > -4393111859969319821);
                    }
                }
                var_29 -= (arr_10 [i_7] [i_8] [i_7] [i_8] [i_7] [i_7]);
                arr_57 [i_7] [i_8] = (((arr_13 [i_8]) * (((arr_13 [i_8]) ? (arr_13 [i_8]) : (arr_13 [i_8])))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_30 = ((23366 ? -1 : -64));
                            arr_62 [i_8] = (((arr_1 [i_8]) <= ((((arr_8 [i_8] [i_7] [i_8 + 2] [i_8 + 2] [i_7]) || (arr_8 [i_8] [i_17] [i_8 + 2] [i_8] [i_17]))))));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_1;
    #pragma endscop
}
