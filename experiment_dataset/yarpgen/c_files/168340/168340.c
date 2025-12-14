/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0 - 1] = (((-9223372036854775792 / -9223372036854775787) ? ((((((arr_2 [i_0]) ^ var_4))) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_1]))) : (arr_3 [i_0] [i_1 - 1])));
                arr_5 [i_0 - 3] [i_0] [i_1] = ((arr_3 [i_0] [i_1 - 1]) ? (max(var_12, (arr_0 [i_0] [i_1]))) : (((((var_16 - (arr_1 [i_1]))) ^ var_7))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 &= var_5;
                            var_18 = (min(var_18, (((((!(arr_7 [i_0 + 1]))) ? var_8 : ((-((~(arr_7 [1]))))))))));
                            var_19 = min((((((max((arr_9 [i_0 - 2] [i_1] [i_2] [i_2] [2] [i_3]), (arr_0 [i_1 + 1] [i_3])))) && (arr_0 [i_0] [i_0 - 1])))), ((var_16 ? (((arr_2 [4]) ? var_3 : var_15)) : (((((arr_0 [i_1 - 4] [4]) && (arr_3 [i_0] [i_1 + 4]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 = (((9223372036854775801 ? 9223372036854775771 : 9223372036854775771)));

                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_6] [i_0] [7] [i_0] = (arr_2 [i_0]);
                                var_21 = (-336 ^ (arr_3 [i_0 - 3] [i_1 + 2]));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_22 ^= ((arr_8 [i_0] [i_0] [i_7] [i_5]) ? var_5 : ((~(min((arr_7 [i_0 + 1]), var_5)))));
                                var_23 = (arr_2 [i_5]);
                                var_24 = (((((((-(arr_6 [i_0] [9] [i_0 - 1]))) * ((min((arr_8 [i_1 + 1] [i_4] [1] [i_7]), (arr_3 [6] [i_4]))))))) ? ((((var_9 ? var_3 : (arr_13 [i_1 + 4] [i_1 + 4] [i_1 + 4]))))) : (max((arr_6 [i_0 - 3] [i_1 - 1] [3]), (var_11 >> var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((var_0 / (min(var_9, var_4)))));
    var_26 = ((var_4 ? var_12 : var_12));
    #pragma endscop
}
