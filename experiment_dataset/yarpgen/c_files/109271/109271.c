/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_7;
    var_16 = var_7;
    var_17 = (min(-var_5, 18446744073709551604));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((((arr_4 [i_0] [i_1] [i_1]) ? (arr_5 [i_0]) : (arr_3 [i_0]))));
                var_19 = (max(var_19, ((((!(var_5 > 17098317446955344419)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (arr_1 [i_0] [3]);

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_20 -= (min((arr_11 [i_0] [9] [i_2 + 2] [i_4]), (arr_2 [i_0])));
                                arr_16 [i_0] [i_1] = (max(((-(arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 2]))), (min((arr_8 [i_2 + 1] [i_2 + 4] [i_2 + 4]), (arr_8 [i_2 + 3] [i_2 + 4] [i_2 + 3])))));
                                var_21 -= (arr_5 [i_1]);
                                var_22 &= (((var_1 / -928908687) > (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 3])));
                                var_23 ^= ((max(-5391289651289553358, (arr_10 [i_4]))));
                            }
                            for (int i_5 = 2; i_5 < 14;i_5 += 1)
                            {
                                var_24 ^= ((((min(-5391289651289553329, 4294967295))) ? ((-(arr_8 [i_2 + 2] [i_2 + 4] [i_5 - 2]))) : (arr_9 [5] [13] [0] [i_5 + 3])));
                                var_25 = (arr_0 [i_3] [1]);
                                var_26 = ((((min((arr_19 [i_5 + 2] [i_5 - 1] [i_3] [i_2 + 1] [i_2 - 1] [2]), 195006357050832449))) ? (((arr_6 [2] [i_2 + 3]) % (min(var_12, 5391289651289553362)))) : 527693886));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
