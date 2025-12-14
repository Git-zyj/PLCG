/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105261
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
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_2 [i_2 - 1] [i_4 + 1] [i_4 - 3])));
                                var_21 = max(((min(3259648759, (0 || 8852687700932228309)))), var_4);
                            }
                        }
                    }
                }
                arr_10 [i_0] [i_0] = ((((max(0, 96)))) | (min(var_11, (arr_0 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_16 [i_0] = ((!(((((512 ? (arr_3 [i_5] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_6])))) > ((var_1 ? 5761913277904645050 : 1035318536))))));
                            arr_17 [i_6 + 1] [i_0] [i_0] [i_0] = (((((!((max(56932, 5761913277904645041)))))) * (!var_3)));
                            arr_18 [1] [i_1] |= ((-(max(9223372036854775807, 5761913277904645019))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    arr_22 [i_0] [i_0] [i_7] [i_1] = ((var_16 << (arr_12 [i_0] [i_0] [i_7])));
                    var_22 = ((1 ? -16658 : 186));
                }
                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    arr_25 [i_0] [i_1] [i_0] = 3259648741;
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_0] [7] [i_9] [i_8] = (((max((max(var_18, -5761913277904645051)), 1)) << ((((~(~var_5))) - 1861535515))));
                                arr_34 [i_0] [i_9] [i_8] [i_1] [23] [i_0] = (min(((((((16657 ? var_12 : 2146435072))) + 164))), var_15));
                                var_23 |= (min(18446744073709551609, 26126));
                                arr_35 [i_0] [i_0] = (((arr_19 [i_9]) * ((((!(arr_7 [i_0] [i_1] [i_9] [17])))))));
                            }
                        }
                    }
                    arr_36 [i_0] [15] [i_0] = (arr_29 [i_8] [i_0] [i_1] [i_0] [i_0]);
                }
                var_24 = ((((max((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]), -875875161))) ? ((max(14225, -875875161))) : (max(var_0, (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_25 = ((~(((min(209, var_1)) % -8496802015244334912))));
    var_26 = ((-(max(43650, var_18))));
    #pragma endscop
}
