/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = -var_9;
                var_21 = 4294967295;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_15 [i_2] = 43921;
                                arr_16 [i_4] [i_2] [i_6 - 1] [i_5 + 1] = var_14;
                                var_22 ^= (arr_5 [i_5]);
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_23 = ((63 ? ((((arr_3 [i_2 - 1]) >> (var_18 - 436289010906858246)))) : (arr_6 [i_3] [i_7])));
                    arr_20 [i_2] [10] [i_2] |= max((((arr_17 [0] [2] [i_7]) ? (2659796930 - 6622) : -19501)), 43921);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_24 ^= (-((65527 ? var_17 : var_16)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_25 -= (arr_4 [i_2 + 1]);
                                arr_29 [i_2] [i_3] [i_8] [i_3] [i_2] = (((~4294967295) ? var_9 : (arr_26 [i_3] [1] [i_8] [1] [i_10] [i_2])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_26 = ((((((arr_27 [i_2] [1] [i_11]) << (var_10 - 46470)))) ? var_5 : var_3));
                    var_27 = var_2;
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_35 [i_2] [i_3] = var_18;
                    arr_36 [i_2] [i_2 - 1] = (((((32767 ? 63 : 11857))) ? (min((arr_19 [i_3] [i_3]), 187191818)) : ((min((arr_0 [i_2 + 1]), ((((arr_19 [i_12] [i_3]) ? var_2 : (arr_5 [i_12])))))))));
                }
                var_28 *= ((((((arr_2 [14]) & 65275))) ? (arr_30 [i_2 + 2] [6] [4]) : -19836));
            }
        }
    }
    #pragma endscop
}
