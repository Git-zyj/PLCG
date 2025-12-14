/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_12, -var_16)));
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = var_12;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_11 [i_0] = 14;
                    var_19 = ((var_15 ? (((var_4 ? var_4 : 224))) : ((var_2 ? var_9 : -3226649301068172770))));
                    var_20 = 33658;
                    var_21 = 9007199254740991;
                    var_22 &= ((((min(var_11, -65))) ? ((-((17 ? 1 : 227)))) : (min(var_8, var_5))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_23 *= ((var_3 ? var_5 : var_14));
                    arr_14 [i_3] [i_1 - 2] [i_3] [i_3] = var_9;
                    var_24 = var_10;
                    var_25 = var_6;
                    var_26 *= 13;
                }
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_22 [i_4] [i_1] = 18446744073709551615;
                                arr_23 [i_4] = (-32767 - 1);
                            }
                        }
                    }
                    var_27 *= var_0;
                    var_28 = var_14;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_4] [i_0] [i_0] [i_0] = var_2;
                                var_29 = (min(var_29, var_6));
                                var_30 = var_10;
                                arr_33 [i_0] [2] [2] [i_0] [i_0] [i_4] = (min(var_15, -var_9));
                                var_31 = var_0;
                            }
                        }
                    }
                }
                var_32 = (var_2 ? ((var_13 ? var_14 : var_7)) : -2147483623);
            }
        }
    }
    #pragma endscop
}
