/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 *= (((max(-4634264425629842732, var_8)) * (((44 ? (arr_10 [i_0 + 2] [i_1] [i_4 + 2] [i_3 - 1] [i_4]) : (~-4634264425629842737))))));
                                var_21 ^= ((((var_7 & ((var_18 ? var_13 : var_11)))) << ((((-(var_2 > var_17))) + 10))));
                                var_22 = ((~(((arr_3 [i_3 - 1] [10] [i_3 - 1]) ? (arr_11 [i_4 - 1] [i_2] [i_2] [i_4 + 3]) : var_15))));
                                arr_14 [i_0] [10] [i_0 + 1] = ((var_10 ? ((max(var_5, var_6))) : ((-(24830 % -7267578192212981082)))));
                            }
                        }
                    }
                    var_23 += (max((!119), ((5576718182034657758 ? ((var_1 ? var_8 : 22102)) : (arr_8 [i_0] [i_1] [i_1] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_24 = 224;
                                var_25 = -var_17;
                                arr_19 [i_0] [i_0] [i_1] [i_1] [i_5] [1] [i_6 + 3] = (arr_4 [i_0] [i_0] [7]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_22 [i_7] = ((~((11162229310573738866 ? (!var_13) : (arr_20 [i_7])))));
        var_26 = (min(((((arr_21 [i_7 + 1] [i_7]) < 15281101600739389363))), (arr_21 [i_7 + 1] [i_7 + 1])));
        arr_23 [i_7] = ((~(-22636 >= var_13)));
        var_27 = (min(var_27, ((min(((min(-1972277224, var_4))), var_19)))));
    }
    var_28 = var_19;
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_30 [12] [i_10] [i_10] [i_8] |= 123;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_29 = (((var_11 < -1415657043) + (max(124, (~var_18)))));
                                var_30 = ((253952 ? var_17 : var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_31 += (var_14 % 195);
                                var_32 = (min(var_32, (((var_8 & (!-35184372088832))))));
                                var_33 ^= ((var_7 ? (9605241868278026739 + 10) : -var_5));
                            }
                        }
                    }
                    var_34 = (min(var_6, ((var_12 ? (arr_28 [1] [i_8 + 3] [i_8]) : var_10))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            {
                var_35 = var_11;
                var_36 = ((((max(var_14, var_3))) ? ((-((-(arr_21 [7] [7]))))) : var_14));
            }
        }
    }
    #pragma endscop
}
