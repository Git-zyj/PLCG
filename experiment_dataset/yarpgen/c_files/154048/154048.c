/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((524287 >> (var_11 + 1286581635))) % var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = 1045926712;
                            arr_11 [i_0] [i_0] [i_3] [i_0] [i_1 - 1] = (((arr_7 [i_0] [i_2 - 2] [0]) != (arr_3 [i_0] [i_0 + 1] [i_1 + 2])));
                            arr_12 [i_0] [i_0] [i_0] [i_3] = (min((arr_0 [i_3] [i_0]), ((var_2 | (var_9 & var_1)))));
                        }
                    }
                }
                var_16 += ((903570285 % (((var_0 || (arr_10 [i_1] [i_0] [i_0] [i_0] [i_1]))))));
                var_17 = (((((var_1 + 2147483647) >> (((arr_7 [i_1] [i_0] [i_0]) + 80)))) < 71));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_4] [i_0] [5] = var_8;

                            for (int i_6 = 3; i_6 < 21;i_6 += 1)
                            {
                                var_18 = (arr_7 [i_0 + 1] [i_5] [i_6]);
                                var_19 = (arr_6 [i_6 + 1] [12]);
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] = -903570286;
                                var_20 = (max((arr_6 [i_0 + 1] [i_1 + 3]), ((~(arr_22 [0])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_0] [i_4] [i_5] [i_4] = ((125 == (var_8 / var_4)));
                                var_21 = (-87 >= -1);
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                            {
                                var_22 = (min(var_22, 63));
                                var_23 *= ((0 - ((((arr_21 [i_0] [i_1] [14] [i_0] [i_0 + 2]) != -21)))));
                                arr_29 [i_0] [i_4] [i_8] = (arr_14 [i_0] [i_1] [i_1] [i_8]);
                                var_24 = var_11;
                            }
                            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                            {
                                arr_32 [i_0] [i_1] [i_0] [i_5] [i_4] = (i_4 % 2 == zero) ? ((((arr_15 [i_4] [i_4]) << (((((arr_10 [i_4] [i_0 - 1] [i_4] [i_0 - 1] [i_5 - 1]) + 949908958)) - 2))))) : ((((arr_15 [i_4] [i_4]) << (((((((((arr_10 [i_4] [i_0 - 1] [i_4] [i_0 - 1] [i_5 - 1]) + 949908958)) - 2)) + 789000748)) - 24)))));
                                var_25 = ((268435452 > -74) - (arr_30 [i_4]));
                                arr_33 [i_0] [i_0] [i_4] [4] [i_0] = (min((arr_1 [i_5 - 2]), (((arr_1 [i_4]) - (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_34 [i_1] [i_0] |= (var_7 / var_2);
            }
        }
    }
    var_26 = ((~-60) & (~var_3));
    #pragma endscop
}
