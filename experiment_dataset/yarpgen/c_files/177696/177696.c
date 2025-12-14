/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 *= (((var_11 / var_3) * var_4));
                arr_6 [i_0] = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = ((((var_9 & (4167267221130445218 - 14279476852579106406))) | (((var_4 - (var_14 & var_8))))));
                                var_20 = ((var_5 * var_6) << (var_5 - 6928862033445220431));
                            }
                        }
                    }
                }
                arr_19 [i_3] [i_2] = ((((((var_1 & var_5) ? ((var_11 ? var_16 : var_5)) : var_12))) ? ((((var_9 << (((var_16 + 60) - 26)))) << (((var_15 | 2) - 3)))) : (var_9 | var_14)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 *= (var_9 / var_10);
                            var_22 += ((((((30847 % 63210) | var_12))) != var_6));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
