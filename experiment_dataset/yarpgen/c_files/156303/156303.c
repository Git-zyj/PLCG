/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 *= var_3;
                                var_21 = ((((var_5 ? var_5 : ((var_9 ? var_4 : var_10)))) < var_4));
                                var_22 = ((var_13 ? ((var_6 ? var_6 : var_17)) : (var_6 < var_4)));
                                arr_16 [i_0] [i_4] [i_4] = var_14;
                                var_23 += ((var_15 ? (var_7 + var_9) : var_10));
                            }
                        }
                    }
                    var_24 = var_15;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_25 -= ((var_1 ? var_6 : var_9));
                    var_26 = ((var_9 ? var_17 : var_5));
                    var_27 = ((var_2 << (((var_1 + 8489) - 21))));
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_24 [i_1] = ((var_18 << ((((var_12 >> (var_13 + 15953))) - 420812))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_28 = ((var_12 <= (var_17 | var_9)));
                        arr_28 [i_0] [i_1] [i_0] [i_7] [i_7] = (var_18 ? var_14 : var_13);
                        arr_29 [i_0] [i_1] [i_1] [i_1] [i_7] = ((var_12 ? var_11 : var_12));
                    }
                    arr_30 [i_0] [i_0] [i_0] = (((((var_18 ? var_1 : var_13))) ? (var_10 / var_12) : ((((var_3 == ((var_5 ? var_9 : var_6))))))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_29 -= ((((var_4 << (((var_11 + 1709663574) - 29))))) ? var_14 : (var_15 - var_17));

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_8] [i_1] [i_8] [i_9] = (((((var_2 ? var_17 : var_15))) ? ((var_0 ? var_7 : var_15)) : (((var_4 ? var_12 : var_2)))));
                        arr_36 [i_0] [i_0] [2] [i_8] [i_0] [i_0] = var_7;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_39 [i_8] [i_1] [i_8] [i_8] = ((((((var_10 ? var_15 : var_4)) < var_1)) ? ((var_6 >> (var_1 + 8481))) : (var_12 || var_14)));
                            var_30 = (((((var_16 || (var_0 + var_10)))) + ((var_12 ? var_4 : ((var_16 ? var_14 : var_2))))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_31 = ((((((((var_13 ? var_13 : var_6))) + var_18))) ? var_12 : var_9));
                            var_32 = ((var_14 ? ((var_15 & ((var_18 ? var_15 : var_0)))) : (((var_14 ? var_18 : var_10)))));
                            arr_42 [i_0] [i_8] [i_0] = (((var_15 ? var_17 : var_17)) < (var_5 / var_0));
                        }
                    }
                    for (int i_12 = 4; i_12 < 16;i_12 += 1)
                    {
                        var_33 = (((((var_18 ? (0 < 6811756642796317621) : var_15))) ? (((var_17 / var_17) ? ((var_14 ? var_4 : var_16)) : (var_16 < var_7))) : var_17));
                        var_34 -= ((((var_8 ? var_10 : var_4)) << ((((var_3 ? var_13 : var_14)) + 15911))));
                    }
                }
                var_35 -= (((((var_3 ? var_16 : var_11))) ? ((var_1 ? var_6 : var_11)) : var_4));
                arr_46 [i_0] [17] [i_1] = ((((((((var_18 ? var_1 : var_6))) ? (var_1 <= var_10) : ((var_10 ? var_13 : var_13))))) || (((var_3 ? var_11 : (((var_1 + 2147483647) << (var_4 - 85))))))));
            }
        }
    }
    #pragma endscop
}
