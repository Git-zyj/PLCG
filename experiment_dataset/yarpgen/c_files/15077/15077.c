/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = var_4;
                var_13 |= (min(((((max(1, 14))) * 1)), var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_14 = (min(var_14, var_8));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = -119;
                    var_16 = (min(((var_9 == (arr_11 [i_2 - 1] [i_3] [i_4]))), ((((17610 ? (arr_6 [i_2 - 2]) : 36028797018963968)) == (arr_9 [i_4] [i_3] [i_3] [i_2 + 2])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_17 += (((arr_15 [i_7] [i_7 - 1] [i_6] [i_7 + 1] [i_6]) < (arr_15 [i_7] [i_7 + 1] [i_5] [i_7 + 1] [i_5])));
                                var_18 = (arr_8 [i_5] [i_3] [i_2]);
                                arr_19 [i_7] [i_6] [i_5] [i_3] [i_7] = 5;
                            }
                        }
                    }
                    arr_20 [i_2 - 2] [i_2] [i_2] [i_2 - 1] = (arr_15 [i_2] [i_2] [i_5] [i_3] [i_3]);
                    arr_21 [i_2 + 2] [i_2] [i_2] [i_2 - 2] = (((((arr_17 [i_3] [i_3]) ? 146 : (arr_8 [i_2 + 1] [i_3] [i_5])))) ? (((arr_12 [i_2] [i_2] [i_2]) ? (arr_8 [i_2] [i_3] [i_5]) : (arr_7 [i_2] [i_2]))) : (arr_17 [i_5] [i_3]));
                    var_19 = (((arr_18 [i_2]) / (arr_7 [i_2] [i_2 - 1])));
                }

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_20 = (min(((min(-34, 134217696))), -14));
                    var_21 = (min(var_21, ((min((((arr_10 [i_2 - 1] [i_2 - 1] [i_2] [i_2]) & (~10612))), ((-(arr_17 [i_2 + 1] [i_3]))))))));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_22 = (((arr_17 [i_2] [i_2]) && 7245626608524484463));
                        var_23 = (min((max((arr_12 [i_2] [i_2 + 2] [i_2 + 3]), var_7)), (arr_14 [i_2] [i_8] [i_9])));
                        arr_26 [i_2] [i_2] [i_8] = (((((((((arr_15 [i_9] [i_8] [i_3] [i_3] [i_2]) - 1))) >= (min(-134217695, var_5))))) >> (max((arr_12 [i_2 - 2] [i_2 + 2] [i_2 + 2]), (0 >= 1847658043)))));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_24 = (-134217695 | 134217696);
                        var_25 ^= ((((max(1, 14))) && (arr_18 [i_2 - 2])));
                    }
                }
            }
        }
    }
    var_26 = (min(130, -50));
    #pragma endscop
}
