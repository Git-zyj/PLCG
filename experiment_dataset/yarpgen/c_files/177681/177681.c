/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) - (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 = (~56549);
            var_16 = (arr_3 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_17 = (((((~(arr_8 [i_0] [i_1] [i_2])))) ? (~87) : (arr_4 [i_2] [i_1] [i_0])));

                for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] [i_1] [i_2] [i_3] = (arr_2 [i_1] [i_0]);
                    arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_18 |= (6 <= 8191);
                    arr_15 [i_1] [i_1] [i_2] [i_0] [i_3] = ((~(arr_12 [i_1] [i_3 - 3] [i_3])));
                }
                for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_2]);
                    var_19 = ((((((102 > (arr_6 [i_2]))))) <= (arr_12 [i_1] [i_2] [i_4])));
                }
                var_20 = (min(var_20, (arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2])));
                arr_19 [i_0] [i_1] [i_1] [i_2] = (((((!(arr_0 [i_0] [i_1])))) | (arr_6 [i_1])));

                for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] = (~-22);
                    arr_24 [i_5] [i_1] [i_2] [i_5] [i_2] = ((!(arr_16 [i_1] [i_1] [i_5 + 3] [i_5] [i_0] [i_5])));
                    var_21 -= (((arr_16 [i_0] [i_0] [i_2] [i_5 - 1] [i_5] [i_5]) <= 11517058560224495959));
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (((~(arr_22 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                    arr_28 [i_0] [i_1] [i_2] [i_6] &= (arr_10 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6]);
                }
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_31 [i_7] = (((arr_30 [i_7] [i_1] [i_0] [i_0]) >= (arr_0 [i_0] [i_0])));
                arr_32 [i_0] = -107;
            }

            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_10] [i_8] [i_8] = (arr_5 [i_9 - 2]);
                            arr_41 [i_1] [i_1] [i_0] [i_8] [i_10] [i_8] = (((arr_30 [i_1] [i_8] [i_8] [i_1]) & (arr_38 [i_9] [i_9 + 4] [i_9] [i_9] [i_9] [i_9 + 3])));
                            arr_42 [i_0] [i_1] [i_8] [i_10] [i_10] = -2291584122538450963;
                            var_23 = (max(var_23, (arr_20 [i_0] [i_9 + 1] [i_8] [i_9] [i_10] [i_9])));
                        }
                    }
                }
                var_24 *= (arr_11 [i_0]);
                var_25 -= (((arr_27 [i_0]) || (arr_37 [i_0] [i_1] [i_8] [i_0])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
            {
                var_26 = 3409534504;
                var_27 = (max(var_27, (((25495 ? (arr_6 [i_11]) : (arr_6 [i_0]))))));
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                arr_49 [i_0] [i_1] [i_0] [i_12] = 73;
                var_28 |= 252;
                var_29 = (((arr_29 [i_0] [i_1]) * (arr_29 [i_12] [i_1])));
            }
        }
    }
    var_30 = var_0;
    var_31 -= var_9;

    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_32 = (max(var_32, (((((((arr_51 [i_13]) == (max(13435681301513798509, (arr_51 [i_13])))))) >> (((arr_51 [i_13]) - 3802106087)))))));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_33 = (arr_52 [i_14] [i_14] [i_13]);
            arr_55 [i_13] [i_13] [i_13] = (((242885993 ^ 25495) << (((((arr_52 [i_13] [i_13] [i_13]) + 30)) - 5))));
            arr_56 [i_14] = (arr_53 [i_13]);
        }
    }
    #pragma endscop
}
