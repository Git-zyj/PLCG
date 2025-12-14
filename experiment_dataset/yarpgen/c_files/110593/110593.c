/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((min((((53030 ? (arr_0 [i_1 + 2]) : 32767))), (max((arr_2 [1]), (arr_2 [8]))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 + 3] = (((arr_6 [i_4] [i_2 - 2] [i_1 - 1]) % ((((max(var_7, var_3))) - (arr_12 [i_0] [i_1 + 1] [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = arr_15 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_2 - 2];
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_18 |= 1;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_19 ^= (((arr_19 [i_6 + 2]) ? var_10 : (arr_19 [i_6 - 2])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((arr_27 [12] [i_6 - 2] [i_9 + 2]) >= var_10)))));
                                var_21 = ((var_7 + (arr_23 [i_6 + 2])));
                                arr_32 [i_5] [i_6 - 1] [i_7] [i_8] [14] |= 67;
                                var_22 = ((var_14 < (42048 || var_14)));
                                var_23 = (((!(arr_29 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                            }
                        }
                    }
                    var_24 ^= ((((arr_23 [i_5]) ? (arr_27 [8] [i_6 + 2] [i_6 + 2]) : 32764)));
                }
            }
        }
    }
    #pragma endscop
}
