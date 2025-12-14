/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!((min(-21, 15)))))) ^ ((var_11 ? var_10 : 38))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max((min(-1087050807, 1087050807)), var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = 1087050807;
                                var_19 = (arr_11 [i_0] [i_0]);
                                var_20 = ((((~(arr_9 [i_0] [8] [i_2] [i_0 + 2] [i_4] [1]))) | (169 ^ -21)));
                                var_21 *= (arr_12 [i_0] [i_1] [i_2] [15]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = ((var_10 ? (max(-169, (~129))) : (arr_9 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0])));
                                var_23 &= (((min(var_15, (arr_9 [i_0 + 2] [i_0] [i_0 + 1] [8] [8] [i_0]))) <= ((+(((arr_13 [i_0] [i_1] [i_2] [i_6]) ? -1087050819 : (arr_7 [i_5])))))));
                                var_24 = (min((min(1, (arr_2 [i_0]))), (((!(arr_16 [i_0 + 1] [i_0] [i_0 + 1] [19] [i_0 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
