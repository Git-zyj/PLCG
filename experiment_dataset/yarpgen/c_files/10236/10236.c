/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0 - 1] [i_0] = ((((((-127 - 1) ? 14483 : (min((arr_7 [i_0]), var_10))))) || var_15));
                arr_9 [i_0] [15] = arr_5 [i_0] [i_1 + 1] [i_1 - 1];

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((min(((((9061718333372934462 ? 168 : var_14)))), var_14)))));
                        var_21 |= (((!51053) / (var_12 <= var_8)));
                        var_22 = (0 && var_16);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((arr_13 [i_1 + 1] [i_1 - 1]) ? var_9 : 0)))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_21 [3] [i_1 + 1] [i_1 + 1] [i_1] [15] [i_0] [i_5] = (((((arr_2 [i_0] [i_0]) && (arr_13 [i_0 - 1] [i_0]))) ? (51058 <= var_0) : var_8));
                            var_24 = 1;
                            arr_22 [i_2] [i_0] [i_2] [i_4] = (((-32767 - 1) ? (arr_17 [i_1] [i_0] [i_1 - 1] [i_4 - 1]) : (var_1 <= 14502)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_25 = (max(var_25, var_16));
                            arr_25 [7] [i_4 - 1] [i_0] [13] [i_0] = (((arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? -32767 : -121));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_26 = (!1);
                            var_27 = (min(var_27, (((14482 / (arr_16 [i_4 - 1] [i_1] [i_1 + 1] [i_1] [i_0]))))));
                        }
                        arr_28 [i_0] = arr_23 [i_0] [15] [10] [17] [i_0] [i_4];
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_28 ^= (var_12 / 51045);
                        var_29 = (((arr_7 [i_0]) ? ((~(arr_7 [i_0]))) : (((arr_7 [i_0]) + (arr_7 [i_0])))));
                        var_30 = (arr_23 [19] [i_1] [14] [i_2] [i_0] [i_8]);
                    }
                    arr_31 [i_0] = ((-((max(14479, 1)))));
                    arr_32 [i_0 - 1] [i_0 - 1] [1] [i_0] = var_4;
                    var_31 = ((-24 ? var_17 : 14477));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_40 [1] [i_0] [i_9] [i_10] [i_11] = arr_16 [i_0] [0] [2] [i_10] [i_1 - 1];
                                var_32 = (((((var_2 ? (min(-21, var_7)) : (arr_35 [i_0 - 1] [i_10] [i_10] [i_11])))) % -3611018575909067148));
                            }
                        }
                    }

                    for (int i_12 = 4; i_12 < 19;i_12 += 1)
                    {
                        var_33 ^= (max(((((max(var_8, var_12))) ? (max(var_17, var_11)) : (((3406977776 ? (arr_34 [10] [i_1 + 1] [i_1] [i_1]) : (arr_3 [18])))))), ((max((arr_27 [i_12] [i_12] [i_12 + 1] [i_0 - 1] [1] [i_0] [i_0]), var_2)))));
                        var_34 = (min(var_34, ((min(var_3, (min((arr_14 [1] [i_12 + 1] [i_1] [1]), (min((arr_20 [3] [i_1] [7] [i_9] [3]), 14459)))))))));
                    }
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        arr_47 [19] [i_0] [i_0] [12] = ((max(390094590, ((1 << (-23432 + 23450))))));
                        arr_48 [1] [i_1] [i_9] [i_0] = var_6;
                        var_35 ^= ((((min((max(var_15, 1)), 1))) ? (arr_15 [2] [i_1 - 1] [i_9] [i_13]) : (((max((arr_36 [i_13] [17]), 4251612747697027285)) ^ (((min(1, 1))))))));
                    }
                    var_36 = (max(var_36, ((min(2566610054, ((((max((arr_43 [i_9] [i_1] [11] [i_9]), var_14))) ? (~1) : var_9)))))));
                }
            }
        }
    }
    var_37 += (var_16 ? (((((var_4 ? var_14 : 1)) == ((min(-27085, var_5)))))) : var_1);
    #pragma endscop
}
