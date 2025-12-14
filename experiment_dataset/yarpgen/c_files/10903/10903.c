/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((min((min(var_8, var_2)), ((min(-45, 11))))) - ((((min(1, var_10))) ? ((var_2 >> (244 - 225))) : -var_9))));
    var_21 = ((var_8 ? var_8 : var_9));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_22 = 38;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (arr_0 [i_0]);
                    var_24 *= (((arr_8 [i_2 - 3] [i_2] [i_2]) ? 8 : -2462434046931534890));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_25 ^= (~var_14);
                                var_26 = (1 < ((-(arr_4 [i_0] [i_0]))));
                                var_27 *= (((arr_11 [i_1] [i_2 + 1] [i_3 - 2] [i_3 + 4] [i_3 + 3]) ? (arr_11 [i_1] [i_2 + 1] [i_3 + 1] [i_3 + 2] [i_3 - 1]) : (arr_11 [i_1] [i_2 - 4] [i_3 - 2] [i_3 + 4] [i_3 + 4])));
                                var_28 += (arr_13 [i_4] [i_4] [i_4] [i_3 + 1] [i_4] [8] [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            {
                var_29 = (((((arr_5 [i_5]) - (((!(arr_18 [i_5] [i_6])))))) + (((871988933731482483 ? var_12 : (arr_20 [i_5] [i_5]))))));
                var_30 |= (arr_7 [6] [i_6] [6]);
                var_31 = (arr_16 [1] [i_5]);
            }
        }
    }
    #pragma endscop
}
