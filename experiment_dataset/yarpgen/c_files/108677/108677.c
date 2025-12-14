/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~1);
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(min((((arr_4 [i_0] [i_1]) ? 1 : 2)), 59))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_3]);

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((arr_8 [i_3 + 1] [i_2] [i_3 + 1] [i_2]) || (arr_14 [5] [i_4] [i_3 + 1] [i_3 + 1] [i_0] [i_3 + 1] [i_0]))) || ((((arr_10 [i_3 + 1] [i_3] [i_3 + 1] [i_3]) ? (arr_10 [i_3 + 1] [4] [i_3 + 1] [i_1]) : var_8))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] |= (((((+(((arr_13 [i_0]) ? var_5 : (arr_0 [i_2])))))) ? ((((-97 / 769232018) & (((var_6 ? 121 : (arr_11 [i_0] [i_1] [i_3] [i_4]))))))) : (((arr_0 [i_4]) >> ((((var_4 ? (arr_7 [i_0] [i_3 + 1] [i_4]) : (arr_6 [i_0] [16] [i_4]))) + 13575))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_20 [i_5] = 18335940244918999912;
                                var_14 += ((-(((var_11 ? 40037 : (arr_14 [5] [i_1] [5] [i_3] [i_1] [2] [i_1]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                            {
                                var_15 *= var_5;
                                var_16 = (((((-3449232913619773571 ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1]) : 9381152577029585677))) ? (arr_19 [i_0] [i_1] [i_2] [i_3] [i_6 + 1] [i_6]) : (arr_13 [i_0])));
                                arr_23 [i_0] [i_1] [12] [i_3 + 1] [i_6] = (((arr_22 [i_0] [i_6 + 1] [i_6 + 1] [i_3 + 1] [i_6] [i_0] [i_0]) ? -265044873 : (arr_19 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6])));
                                var_17 *= 3248034136;
                                arr_24 [i_0] [0] [i_0] [i_0] [i_0] [i_0] = (arr_15 [11] [i_0] [i_1] [i_6 + 1] [11]);
                            }
                            for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                            {
                                var_18 -= var_9;
                                var_19 -= (arr_2 [i_0]);
                                var_20 = -641931186;
                            }

                            for (int i_8 = 0; i_8 < 25;i_8 += 1)
                            {
                                var_21 |= ((~(((!(((42334 | (arr_10 [i_8] [i_3] [7] [7])))))))));
                                var_22 = (min(var_22, (arr_15 [i_0] [i_1] [i_1] [19] [i_8])));
                            }
                            for (int i_9 = 1; i_9 < 23;i_9 += 1)
                            {
                                arr_33 [i_0] [i_1] [i_3 + 1] = var_7;
                                var_23 = ((((62629 ? ((2147483644 ? (arr_26 [i_0]) : (arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0]) ^ 7168))))) ? (((((22095 << (973123622751065607 - 973123622751065593))) & 1))) : (((~(arr_0 [i_0])))));
                                arr_34 [12] = (min(((127 ? ((9223372036854775807 ? 3688 : 51901)) : 127)), (((!(arr_15 [i_0] [i_2] [i_0] [i_3] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
