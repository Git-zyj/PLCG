/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = -8191;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = var_13;
                    var_15 += ((((((arr_1 [i_0 + 3]) ? (arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : -4114))) ? -71 : var_9));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_16 &= ((((((((-8191 + 2147483647) << (((-536042378 + 536042390) - 12))))) != 6512910215945464612)) ? 24844 : 8191));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 = (max(var_18, var_10));
                                arr_17 [i_0 + 4] [i_0 + 4] [i_3] [i_4] = (min(var_5, 32));
                            }
                        }
                    }
                    arr_18 [i_3] [i_3] = ((-32767 - 1) | -8191);
                    var_19 ^= -var_8;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] = -8172;
                    var_20 &= (((arr_2 [i_1]) ? -8181 : (arr_2 [i_1])));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_21 -= var_0;
                        var_22 *= ((((arr_3 [i_8] [i_8]) > 8172)));
                        var_23 = (arr_0 [i_0 + 1]);
                        arr_26 [i_7] [i_7] [i_8] = ((!(((arr_11 [i_7] [i_1] [i_1]) && (((arr_23 [i_0 - 1] [i_0] [i_0]) < (arr_20 [i_0] [i_1] [i_7])))))));
                        var_24 = var_2;
                    }
                    var_25 = var_1;
                    var_26 = 127;
                }

                /* vectorizable */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    var_27 = ((+(((arr_6 [i_0] [i_0] [i_0 + 3] [i_0]) + var_9))));
                    var_28 += arr_14 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 3] [0];
                    var_29 = (((arr_19 [i_9] [i_1] [i_0]) / (~41)));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_30 = ((((((13392 * 14778094461228223469) ? ((var_12 ? var_8 : (arr_4 [i_0] [10] [i_10]))) : var_2))) ? (((arr_32 [i_0] [i_0] [i_0]) / -103)) : (((-(arr_7 [i_0] [i_0] [i_0 + 3] [i_0 + 1]))))));

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        arr_36 [i_10] [i_10] = (((var_5 + 9223372036854775807) << (((((arr_23 [i_0 + 3] [i_0 + 4] [i_0]) + 64)) - 1))));
                        arr_37 [i_10] [i_10] [i_0] [i_10] = (((56167 & 8172) ^ (arr_19 [i_0 + 2] [i_11 + 1] [i_11 - 1])));
                        var_31 = var_12;
                    }
                    arr_38 [i_10] = (arr_32 [i_0] [i_1] [i_10]);
                }
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    arr_41 [i_12] = (arr_12 [i_12] [i_12] [i_12] [i_0]);
                    arr_42 [i_0 + 2] [i_12] [i_0 + 2] = (((((~((max(var_0, 1)))))) ? var_8 : 67108352));
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    var_32 = 28960;
                    var_33 ^= (((arr_33 [i_0] [i_0] [1]) ? 0 : var_9));
                }
            }
        }
    }
    var_34 = -8192;
    var_35 = var_8;
    var_36 = ((-var_5 << (var_0 + 114)));
    #pragma endscop
}
