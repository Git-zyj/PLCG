/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 14376364085680111015;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 ^= (min((((!((min((arr_3 [i_0]), (arr_3 [i_0]))))))), (min(var_6, (((2002730574422860248 ? -262708502 : 133)))))));
        var_16 = (max(var_16, (((8955036683271853299 ? (arr_2 [i_0]) : var_2)))));
        arr_4 [i_0] = (min(((max((arr_0 [i_0]), (arr_0 [i_0])))), ((0 ? -2028386127643892605 : 12797699201752313451))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_2] = 1972779217;
                        arr_16 [i_1] [i_2] = -9223372036854775793;

                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5] = ((~(min(-9028635330204938868, (arr_3 [i_4 - 1])))));
                            var_17 = ((((min(31, 3912117813))) ? (!163) : ((-(((arr_2 [i_4]) ? (arr_2 [i_1]) : (arr_8 [i_1] [i_3])))))));
                        }
                        var_18 += ((((-(max(var_11, (arr_5 [i_1])))))) ? (arr_2 [i_1]) : -6476591156802315293);
                    }
                }
            }
        }
        arr_20 [11] = 162066440;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = (max((max(var_12, ((var_8 ? var_3 : -1876185119)))), (max(((-6040977141300492217 ? var_3 : var_10)), (min(12657647741302378922, var_12))))));
        var_19 = (((arr_17 [i_6] [i_6]) % (arr_17 [i_6] [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_20 = (((((arr_8 [i_7] [i_7]) ? var_7 : var_0)) >= 125));
            arr_30 [i_7] = (((((11274525012929079971 ? 563904061 : var_5))) ? (((var_2 ? 11 : (arr_22 [i_8])))) : 18446744073709551615));

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_21 = ((255 ? 21 : (((arr_28 [i_9]) ? (arr_34 [i_8] [i_9] [i_10] [i_11]) : (arr_1 [i_10])))));
                            arr_40 [i_9] = arr_23 [i_7];
                            arr_41 [i_9] [i_8] = var_1;
                            arr_42 [i_9] [i_9] [i_9] [i_10] [i_9] = ((((-299804071 ? 11527825777376865126 : (arr_12 [i_8] [i_10] [i_11])))) ? -5706388034809641433 : var_11);
                            var_22 -= (arr_38 [i_10] [i_10] [i_9] [i_10] [i_11]);
                        }
                    }
                }

                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    var_23 = 2147483647;
                    var_24 = var_1;
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    arr_49 [i_9] = ((((arr_35 [i_8] [i_8] [18] [i_13]) - (arr_32 [i_13]))) + (arr_0 [i_8]));
                    arr_50 [i_7] [i_9] [i_9] [i_9] [i_9] = ((-((255 ? 2005661596 : var_1))));

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        arr_53 [i_7] [9] [9] [i_13] [9] [i_13] [i_9] = var_7;
                        arr_54 [i_7] [i_9] [i_14] [i_7] [i_14] = arr_18 [i_7] [i_8] [i_9] [i_13] [i_14];
                        var_25 = (!126);
                    }
                }
            }
            for (int i_15 = 2; i_15 < 22;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        {
                            arr_62 [i_7] [i_7] [i_7] [i_7] [i_7] = ((arr_57 [i_17] [i_17] [i_16] [i_17]) ? ((2110644735 ? 4294967295 : -1875646615171073057)) : (arr_32 [i_15 - 1]));
                            arr_63 [i_7] [i_8] [i_15] [i_7] [i_17] [i_8] = (((arr_56 [i_15 + 1] [i_8] [i_16] [i_15 + 1]) / (arr_56 [i_15 - 1] [i_8] [i_15] [i_16])));
                        }
                    }
                }
                var_26 = (~0);
            }
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            arr_68 [i_7] = -6957160625839220257;
            var_27 += ((~(arr_46 [i_7] [i_7] [i_18])));
        }
        var_28 = (arr_8 [i_7] [i_7]);
    }
    var_29 = var_4;
    #pragma endscop
}
