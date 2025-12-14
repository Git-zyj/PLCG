/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((-((var_1 ? 3289 : 0))))) ? ((-((0 ? 2716888250658736534 : var_5)))) : var_3));
    var_18 = (~var_9);
    var_19 = ((var_2 ? ((min(var_9, 96))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (max(231, ((((min((arr_6 [i_0] [i_0] [7]), var_4))) ? (min(13, 13)) : 16376))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((arr_6 [i_1] [i_1] [i_1]) | ((((min(44, 3))) ^ (~var_14)))))));
                                arr_12 [9] [6] [i_0] [i_2] [i_3] [i_4] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_10 ? (((max(var_3, var_12)))) : ((var_16 ? 1 : ((var_6 ? 2716888250658736534 : 15729855823050815082))))));
    #pragma endscop
}
