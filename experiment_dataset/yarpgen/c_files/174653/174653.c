/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 3277893277;
    var_20 |= (((((((var_8 & var_17) ? (~var_16) : (var_5 && var_4))) + 2147483647)) >> (var_18 - 233)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_3] [i_0] [i_2 - 1] [i_4] [i_0] [i_1] = -1;
                                arr_12 [i_4] [i_2] [i_2] [i_0] = (((((arr_0 [i_3]) + 2147483647)) >> ((~(~var_1)))));
                                var_21 *= (arr_5 [i_0] [i_1] [i_2 + 2] [i_3]);
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_0] = ((9094560359920070315 ? (((var_6 >> 1) ? (arr_2 [i_0] [i_5 - 1]) : var_16)) : (((var_16 % (arr_16 [i_5 + 1] [i_5] [i_5]))))));
                    var_22 = ((158 ? (-127 - 1) : 2));
                }
                arr_18 [i_0] [i_1] = ((~(-4 / var_4)));
            }
        }
    }
    #pragma endscop
}
