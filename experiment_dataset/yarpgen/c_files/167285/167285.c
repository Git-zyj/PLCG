/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, var_8));
                    var_12 -= ((8 * (((-(arr_3 [i_0] [13] [13]))))));
                }
            }
        }
    }
    var_13 = (8 >> 9);
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    var_14 ^= ((-(min(var_3, var_5))));
                    var_15 = 9428;
                    arr_13 [i_3] [i_3] [i_3] [i_4] |= ((var_6 || (22 >> var_4)));
                    var_16 += (min(9428, (((min(137, 4083763987254824462)) - 10))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_17 = (((((arr_16 [i_6 + 1] [i_6]) / (arr_16 [i_7] [i_6]))) * 34));

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                arr_29 [i_6] [i_6] = var_2;
                                arr_30 [i_6] [i_6] [13] [i_6] [i_10] [i_6] [i_6] = (((~-91) | (137 >> 11)));
                            }
                            for (int i_11 = 0; i_11 < 25;i_11 += 1)
                            {
                                var_18 = var_6;
                                arr_33 [i_9] [i_7] [i_6] [i_11] [i_11] [i_6 - 1] [i_8] = (min((((var_7 ? var_2 : var_1))), (var_8 ^ var_6)));
                            }
                            var_19 = var_8;
                        }
                    }
                }
                var_20 = (((var_9 ? 0 : var_2)));
                var_21 *= (((((((arr_5 [i_6]) || ((min(var_8, 19195))))))) == 1124741924));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_22 ^= (arr_4 [i_6 + 1] [i_7 + 3] [i_12] [i_7 + 3]);
                                var_23 -= var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
