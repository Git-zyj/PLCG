/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((2147483631 - 63240) - (min(var_8, 2147483647))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [7] [i_0] = (((arr_0 [i_0 - 1] [i_0 - 1]) * (arr_0 [i_0 - 1] [i_0 - 1])));
            var_14 = (max(var_14, (arr_4 [i_1] [11])));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, (arr_4 [i_2] [i_3 + 3])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_16 = ((((arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_0] [i_0] [i_4 + 1]) - -22304)));
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_5] = -2147483637;
                                var_17 = ((min((arr_4 [i_5] [10]), ((29603 ? -19923 : var_7)))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_18 -= (((((252 ? -15614 : 23221))) ? 187 : ((((((arr_6 [i_0 + 1] [i_3 - 1] [i_6]) ? 17 : 65535))) ^ ((65533 ? var_2 : var_11))))));
                        arr_20 [i_0] = (((((((arr_13 [i_2] [i_3]) ? (((~(arr_0 [i_6] [i_3 - 1])))) : (arr_2 [i_0] [i_0]))) + 9223372036854775807)) >> ((((((((arr_12 [10] [i_0] [i_3] [i_6]) << (var_12 - 10872152)))) ? ((~(arr_18 [i_0 - 1]))) : ((1171312711 ? (arr_14 [i_0] [7] [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0 - 1] [i_0]))))) + 65461))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [4] [i_7] [i_7] [i_0] [4] = (((arr_3 [i_0 + 1] [i_3 - 1] [i_0]) ? var_6 : (arr_3 [i_0 - 1] [i_3 + 3] [i_0])));
                        arr_24 [i_0] [i_2] [i_0] [i_3 - 1] [i_7] [i_7] = (arr_0 [i_0 + 1] [i_0 + 1]);
                    }
                }
            }
        }
        arr_25 [i_0] [i_0] = (-22296 % 23232);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_9 - 1] [i_9] [i_10] = (arr_14 [i_8] [i_8] [8] [i_8] [i_9 + 2] [i_9]);

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_19 = (arr_9 [i_8 - 1] [i_8 + 1] [i_8 + 1]);
                        arr_37 [i_8] [i_8] [i_10] [i_11] = arr_21 [i_11] [i_8] [0] [i_8];
                        var_20 = (((arr_21 [i_8 - 1] [10] [i_11] [i_11]) ? (arr_26 [i_10] [i_8]) : (arr_26 [i_8] [i_8])));
                        arr_38 [i_8] [8] &= 405210688;
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_21 = ((!(arr_2 [i_8 - 1] [i_8])));
                        var_22 = (max(var_22, ((~(arr_35 [i_9 + 1] [i_9] [i_8 - 1] [i_12])))));
                        var_23 = (((((arr_36 [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_9 - 1] [i_9 + 2]) + 2147483647)) << (((arr_13 [i_8 - 1] [i_8 + 1]) - 44983))));

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_24 ^= (arr_1 [14]);
                            var_25 |= (arr_39 [i_13] [i_12] [i_10] [i_9 + 2] [i_8] [i_8]);
                            arr_43 [i_8] [0] [14] [i_12] [i_13] [i_13] &= ((1 ? -1 : 453312359));
                        }
                    }
                }
            }
        }
        var_26 *= (((arr_19 [i_8 + 1] [i_8 + 1] [i_8 + 1]) ? (arr_6 [i_8 - 1] [i_8 - 1] [i_8 + 1]) : (arr_6 [i_8 - 1] [i_8 + 1] [i_8 + 1])));
        arr_44 [i_8] = (~19945);
        var_27 ^= 1725794214;
    }
    var_28 = var_12;
    var_29 -= (-var_8 ? var_11 : var_3);
    var_30 = (min(var_30, var_4));
    #pragma endscop
}
