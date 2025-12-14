/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = 1;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (min(((1 ? ((1 ? -12797 : var_12)) : 32736)), 1));
                }
            }
        }
    }
    var_15 = (((((56767 / ((var_2 ? var_2 : 1))))) ? ((((min(1, var_7))) & ((var_0 ? var_0 : var_1)))) : var_14));
    var_16 = (!var_8);
    var_17 &= ((var_1 ? ((min((min(30, var_6)), var_9))) : (!var_2)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 = (max(var_18, (((((min((arr_16 [i_4 - 1] [i_4 + 2]), var_9))) ? (min(var_9, var_13)) : ((((arr_16 [i_4 - 1] [i_4 + 3]) + var_7))))))));
                    arr_18 [i_3] [i_4] = ((-(((((arr_8 [i_3] [i_3] [i_4 - 2]) + 2147483647)) >> (((arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2]) + 81))))));
                    arr_19 [i_4] [1] [i_4] = 7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [1] [i_7] [1] [1] [i_5] [1] = ((~(~var_13)));
                                var_19 = (arr_8 [i_3] [9] [15]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
