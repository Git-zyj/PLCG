/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(-11, (((((var_1 ? 32 : -2079864646)) <= 10672451088873824073))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = ((-20 ? var_5 : (arr_0 [17])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((var_2 ? ((var_10 ? var_17 : var_10)) : var_15));
                                var_23 ^= (((((arr_2 [i_2] [i_2] [5]) ? 1 : var_9)) ^ -2484006522));
                            }
                        }
                    }
                    var_24 = ((var_6 ? -12 : (arr_3 [i_0] [i_0])));
                }
            }
        }
    }
    var_25 = ((var_0 ? (~var_4) : var_0));
    #pragma endscop
}
