/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 5726763256793193093;
    var_15 = (min(51224, -12719980816916358522));
    var_16 = (max(var_16, ((min((((max(1, -7810522636106413757)))), ((var_11 ? var_3 : 7790368274216981331)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((-(max(-7810522636106413757, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_17 &= ((var_11 >= ((var_13 + (var_11 >> var_6)))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((((((arr_9 [1] [i_1] [i_5] [i_1]) + 2147483647)) << (12719980816916358528 - 12719980816916358528)))) < var_3));
                                var_18 ^= (!(arr_20 [i_7 + 1] [i_1] [i_5] [i_6] [i_1] [i_6] [i_7 + 1]));
                                arr_23 [i_0] [i_1] [9] [i_1] = (arr_12 [i_5] [i_5] [i_5] [i_6] [i_7 + 1] [i_0] [i_5]);
                                var_19 |= ((5726763256793193093 ? ((var_3 ? 9685372151985994129 : (arr_8 [i_0] [9] [i_0] [1]))) : 12719980816916358522));
                            }
                        }
                    }
                    var_20 ^= (~641596907);
                    arr_24 [i_0] [i_0] [i_5] = 8761371921723557488;
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    arr_28 [i_0] [i_0] = (((var_7 ? -536870904 : ((31268 ? var_10 : 12719980816916358528)))));
                    var_21 = (max(var_21, var_0));
                    var_22 = var_5;
                    var_23 |= var_10;
                }
            }
        }
    }
    #pragma endscop
}
