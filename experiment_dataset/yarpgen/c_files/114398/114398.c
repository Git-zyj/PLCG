/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = 105;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_11 = -19042;
                    arr_10 [i_0] [i_1] [i_0] = ((~(arr_5 [i_2 - 1] [i_1] [i_0])));
                }
                var_12 *= (!(-105 && 3805529635));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 24;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_20 [i_3] [i_4] = (arr_16 [i_4 - 2]);

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_25 [i_3] [i_3] [i_3] [17] [i_3] = (((~(arr_13 [i_3 + 2]))));
                        arr_26 [i_3] [i_6] [i_3] [i_3] [i_4] [i_3] = ((var_4 ? (arr_17 [i_3 + 2]) : (arr_17 [i_3 + 2])));
                        var_13 = (arr_12 [i_3 + 1]);
                    }
                    var_14 = var_4;
                    var_15 = (arr_16 [i_5]);
                    var_16 = -19042;
                }
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_34 [i_3] [9] [i_3] [13] [13] = 19034;
                                arr_35 [i_3] = (((var_3 + 2147483647) << ((((2093056 ? ((-(arr_16 [i_4]))) : (((var_5 * (arr_30 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7] [i_8] [i_9])))))) - 3169643914455565915))));
                                arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [3] = (~864691128455135232);
                                arr_37 [i_3 + 1] [i_4] [i_3] [i_8] [i_9] = var_8;
                                var_17 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_18 = (max(((4294967286 ? (arr_33 [i_3] [i_3] [i_3] [i_10] [i_11]) : 22)), (((19042 ? (var_2 < 1758309413) : (arr_19 [i_11] [i_7 + 2] [i_7 + 2] [i_3]))))));
                                var_19 *= (19034 && 83);
                                var_20 = (min((max(-96, 4292874223)), (~-56)));
                            }
                        }
                    }
                    arr_43 [i_3] = (min((((arr_28 [19] [i_4]) & 0)), var_8));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            arr_51 [i_14] [i_4] [i_3] = (3678750580 ? 6745639868491135010 : 107);
                            var_21 = var_7;
                        }
                        var_22 ^= (4292874232 * 4294967286);
                        var_23 = (min(var_23, (((106 ? ((((arr_17 [i_3]) ? var_6 : var_8))) : (arr_15 [6]))))));
                        var_24 = (max(var_24, (((arr_32 [i_3 + 1] [i_13 - 1] [i_4 - 2]) ? (arr_32 [i_3 - 1] [i_13 - 1] [i_4 + 1]) : var_3))));
                        var_25 = ((1632809443587229727 ? (!var_2) : ((1 ? 3063641448 : (arr_29 [i_3] [i_3])))));
                    }
                    for (int i_15 = 1; i_15 < 23;i_15 += 1)
                    {
                        var_26 = (((arr_28 [i_4 - 1] [i_15 + 2]) ? var_9 : var_0));
                        arr_54 [i_15 + 1] [i_3] [i_3] [21] = ((((((arr_13 [i_4]) ? -87 : var_6))) ? (arr_33 [i_15 - 1] [i_15 - 1] [i_15] [i_15 + 2] [i_15]) : var_2));
                        arr_55 [i_3] = (~var_3);
                        arr_56 [i_15 + 2] [i_3] [i_4] [i_3] [10] = -96;
                    }
                    var_27 = ((-2093081 ? (((arr_28 [i_3] [8]) * 5439845578759627603)) : -115));
                }
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 22;i_18 += 1)
                        {
                            {
                                var_28 = ((1 ? 1 : 10));
                                var_29 = (~136);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 25;i_20 += 1)
                        {
                            {
                                var_30 = (arr_60 [i_20] [i_20] [i_20] [i_19] [i_16] [i_4 - 1]);
                                arr_69 [i_3 + 2] [i_4] [23] [i_16] [i_3] [i_19 + 1] [i_4] = (((((max(var_5, var_1))) && var_8)));
                            }
                        }
                    }
                }
                arr_70 [i_3] [i_4] [11] = ((var_9 ? ((var_7 ? (min((arr_50 [i_3 - 1] [i_4] [i_3] [i_4] [i_4 - 1]), var_7)) : ((min(0, 19063))))) : (((min(-111, 127))))));
            }
        }
    }
    #pragma endscop
}
