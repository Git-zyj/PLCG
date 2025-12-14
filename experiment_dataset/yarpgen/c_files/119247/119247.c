/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(min(4294967295, -6243544260180141160))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] |= ((!((((((arr_2 [i_0] [i_0]) - var_10))) != ((2023411737 ? -1934244310 : -4970911260968510548))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_12 &= var_8;
                    var_13 ^= (var_5 && 53);
                    arr_9 [i_2] [i_2] [i_0] = (~var_2);

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, var_0));
                        var_15 = (1 << (-2023411737 + 2023411743));
                        var_16 = (((arr_7 [i_0] [i_2] [i_2 - 1] [i_3 - 1]) & (arr_11 [i_2] [i_1 + 2] [i_2 + 1] [i_3 - 1])));
                        var_17 &= (arr_1 [i_2 + 1]);
                        arr_12 [16] [i_1 + 3] [i_2] [i_3] = ((~(~13347694945336078741)));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 -= (((223563104609389609 ? 9 : var_7)));
                        var_19 ^= ((((arr_14 [i_0] [i_4] [i_2] [i_2 - 1]) / (arr_14 [i_0] [1] [i_0] [1]))));
                        arr_15 [i_0] [i_0] [i_2] = (arr_10 [i_0] [i_0] [i_1 + 3] [i_4 - 1] [i_4 + 1] [i_4 - 1]);
                        var_20 ^= ((var_5 != var_0) ? (arr_0 [i_1 + 3]) : ((var_1 ? var_10 : var_6)));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_2] = (((arr_10 [i_0] [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2]) - ((((var_1 + 2147483647) >> (var_1 + 32364))))));
                        var_21 = ((~-1) != var_1);
                    }
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_6] = ((((min((arr_21 [i_1 + 4]), var_5))) ? (((((var_10 ? 212315681 : 266347652))) ? (var_9 != 95) : (((arr_13 [i_0] [i_1] [i_1] [i_6] [i_6 + 1]) << (var_4 - 139))))) : ((max(1, ((2023411744 ? (arr_18 [i_0] [i_0] [i_0] [i_1] [0]) : var_9)))))));
                    arr_23 [i_6] [7] = ((((max((arr_16 [i_1] [i_1 + 2] [i_6 + 1] [1] [i_1] [i_6 + 1]), 20))) && ((min(((((((arr_16 [8] [i_0] [13] [i_1] [1] [i_6]) + 2147483647)) >> (var_8 - 107)))), (min((arr_18 [i_0] [i_1] [i_0] [i_0] [i_6]), 2147483647)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_30 [12] [i_0] [i_8 - 1] [i_1] [i_6] = (!var_1);
                                arr_31 [i_6] = ((var_8 / (arr_4 [i_6 + 1] [2])));
                                var_22 = (max(var_22, var_0));
                                arr_32 [i_6] [i_6] [i_6] [11] [i_8] = (((((!(arr_25 [i_0] [i_0] [i_6] [i_6]))) ? ((2023411737 ? var_3 : var_8)) : ((min(var_2, 1))))));
                                var_23 &= var_5;
                            }
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_24 = (max(var_24, (((~(((max(0, var_6)))))))));
                    var_25 = (max(32767, (!28790)));
                }
            }
        }
    }
    #pragma endscop
}
