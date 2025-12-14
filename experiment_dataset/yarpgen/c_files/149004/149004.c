/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_8;

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_10 = ((9 ? var_8 : (~0)));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = -71;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_11 = (31 ? (arr_1 [i_1]) : (arr_13 [i_0] [i_0] [i_3] [i_3]));
                    var_12 = (2924200565 > var_7);
                    var_13 = (((arr_2 [i_1]) << (var_7 - 3500385827)));
                    var_14 *= (((760158609 ? 14 : var_0)));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_15 = (arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 = ((var_2 ? (arr_13 [i_4 + 2] [i_4] [i_6] [i_6]) : (arr_3 [10] [i_0])));
                                var_17 ^= var_6;
                                var_18 = (min(var_18, (((-28 ? (var_3 & var_8) : var_2)))));
                                var_19 = (min(var_19, (arr_7 [i_5] [i_4] [i_0] [i_0])));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_20 ^= 16286;

                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [21] [14] [i_8] = (max((arr_25 [i_0]), var_1));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_21 = 16;
                            arr_30 [i_0] [i_0] [i_7] [0] = (min((~3390177764055936491), 22));
                        }
                        var_22 = (min(var_22, (((!((min(0, 3390177764055936491))))))));

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_34 [i_0] [i_1] [i_0] = (max(((-var_5 ? 3390177764055936491 : ((var_4 ? -6646827031561523309 : 206)))), 1500091844));
                            arr_35 [i_0] [i_1] = ((!(253 && 44282)));
                            var_23 = ((max((arr_3 [i_0] [i_0]), 70)));
                        }
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        var_24 |= ((!(arr_10 [i_11])));
                        var_25 = (((((14 ? 37950 : -3501387293095000069) + -4294967295))));
                        arr_39 [i_0] [i_1] [1] [i_11] = 39;
                        var_26 = var_9;
                        var_27 = ((-(1 | 35872)));
                    }
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = var_9;
    #pragma endscop
}
