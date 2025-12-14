/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~var_10) ? ((max(var_3, 90))) : (90 ^ -90))) ^ (min(var_3, (~var_10)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = ((-91 / ((-((min(var_10, var_9)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_1] [i_2 - 2] [5] [i_4] [0] [i_4] = (min(3549865361, 57780));
                                var_13 = (((37510 | 3072) ? (((!((max(var_3, var_8)))))) : 90));
                            }
                        }
                    }
                    var_14 *= (max((((((min(var_3, 83)))) + (arr_12 [i_0] [i_1] [i_1] [2] [2]))), var_9));
                    var_15 = (min(var_15, (((max(var_1, (max((arr_4 [i_0] [i_2]), var_1))))))));
                    arr_15 [i_0] [i_2] [i_2 + 1] = ((((max((((var_6 ? var_3 : var_10))), var_6))) || (arr_2 [i_2 + 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_22 [10] [i_6] = ((var_10 ? var_3 : 0));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_16 = (((arr_24 [i_6] [i_7] [i_7] [i_9]) ? (arr_24 [i_8] [i_7 - 1] [i_5] [i_5]) : var_3));
                            var_17 *= (((arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_6]) ? (arr_23 [i_8 - 1] [3] [i_8] [i_8]) : 2147483647));
                            var_18 *= ((var_4 ? 2668170040245584129 : 0));
                            var_19 = (((arr_21 [i_5]) >= (arr_21 [i_5])));
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_20 *= (((((var_4 + (arr_28 [i_5] [i_6] [14])))) ? (arr_21 [i_5]) : (arr_18 [i_5])));
                var_21 = ((-(arr_28 [i_5] [i_5] [i_5])));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, 745101934));
                    var_23 = ((arr_29 [i_5] [i_6] [i_11]) != var_7);
                    var_24 = ((!(((arr_21 [i_12]) || var_9))));
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_25 = (var_10 * 745101935);

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_47 [i_11] [i_11] = ((((15778574033463967485 ? var_7 : (arr_32 [i_11] [i_11] [i_11] [13]))) / 15778574033463967484));
                        var_26 = (min(var_26, (arr_43 [1] [i_6] [22] [i_6] [22])));
                    }
                    for (int i_15 = 3; i_15 < 20;i_15 += 1)
                    {
                        var_27 = (max(var_27, (arr_45 [i_5] [i_6] [i_5] [1] [i_15 + 1] [i_5] [i_15])));
                        var_28 = (((-(arr_23 [10] [i_13] [22] [i_6]))));
                        var_29 = (var_1 ? 91 : (arr_27 [i_15 + 4] [i_15 - 1] [i_15] [i_15 + 4] [18]));
                        arr_51 [i_5] [i_11] [i_13] = var_10;
                        arr_52 [1] [i_13] [i_11] = ((0 ? -1 : 15778574033463967485));
                    }
                    var_30 = var_10;
                }
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_31 = (((arr_18 [i_16 - 2]) ? var_4 : var_4));
                            var_32 *= (((arr_48 [15]) ? (((-764581050 >= (arr_24 [i_5] [i_6] [i_11] [i_17])))) : (((!(arr_20 [i_5] [i_11] [i_5]))))));
                        }
                    }
                }
                var_33 *= var_2;
            }
            var_34 = (min(var_34, ((65535 ? 32 : 3549865355))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                {
                    var_35 = (((arr_64 [i_5] [i_19] [i_19]) >= var_7));
                    arr_66 [i_5] [i_19] [i_19] = (((((arr_54 [i_18] [i_19] [10] [i_19 + 1]) + 2147483647)) << (((var_4 + 1928038767) - 16))));
                    var_36 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
