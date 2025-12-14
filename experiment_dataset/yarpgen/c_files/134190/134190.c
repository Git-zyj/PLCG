/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((((arr_5 [i_2] [i_2] [i_1]) & (arr_6 [i_3]))) % (((max(13900, 45120)))))))));
                                var_15 |= (((((arr_2 [i_0] [i_0]) || (arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))) ? (max((arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]), (arr_2 [i_0] [i_0 - 2]))) : (arr_12 [i_0] [i_0 + 2] [i_0 - 2] [17])));
                                var_16 = (min(var_16, var_2));
                                var_17 ^= ((30939 ? ((max((arr_10 [i_4] [i_4] [i_2] [i_4] [i_0]), (arr_10 [i_2] [i_3] [i_2] [i_3] [i_4])))) : ((-(arr_10 [i_4] [i_3] [i_1] [i_3] [12])))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_0] [i_2] [i_4] = (((((~((1915368330766577247 ? 32767 : (arr_13 [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2])))))) ? (((((max((arr_10 [i_0] [i_2] [i_2] [i_3] [i_4]), var_7))) ? (arr_11 [i_2] [i_0 + 1] [i_0] [i_2]) : ((var_12 ? var_9 : (arr_2 [i_1] [i_4])))))) : ((((max((arr_15 [i_4] [i_1] [i_4] [i_3] [i_4] [i_0 - 2] [i_2]), (arr_1 [15])))) ? (arr_7 [i_0 - 2] [8] [i_2]) : 1125895611875328))));
                            }
                        }
                    }
                }
                arr_17 [i_0] = max(-3, -4141);

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = (arr_21 [i_0] [i_0] [i_0 + 1] [i_0]);
                                arr_28 [i_7] [i_6] [i_7] [i_1] [i_0 + 1] = (((arr_21 [i_0] [i_0 + 2] [i_5] [i_0 + 2]) ^ 45110));
                                var_19 = (min(var_19, (((var_0 ? (arr_3 [i_6] [i_1]) : (min(((var_0 ? var_5 : 0)), var_9)))))));
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        var_20 = var_12;
                        arr_31 [i_0 + 2] [i_0] [i_0] [i_0 + 2] = var_12;
                        arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((min(var_11, (arr_5 [i_8] [i_8] [i_8 - 4]))) * (!-18250)));
                    }
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 23;i_9 += 1)
                {
                    var_21 += (arr_10 [i_0] [i_0] [i_0] [i_0] [12]);
                    var_22 = ((var_11 ? var_0 : (arr_3 [i_0 + 2] [i_0 - 2])));
                    var_23 = (-(arr_29 [i_0] [i_1] [i_0]));
                    arr_35 [i_9] [i_1] [i_1] = (((arr_33 [i_9]) ? 63714 : (arr_5 [14] [i_9] [i_0 + 1])));
                }
            }
        }
    }
    var_24 ^= (((-20416 ? (min(var_4, var_11)) : var_8)));
    var_25 = ((((-((var_7 ? 13900 : 0)))) >= var_1));
    #pragma endscop
}
