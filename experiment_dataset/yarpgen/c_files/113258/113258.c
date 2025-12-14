/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((!((min((max(4294967295, 4294967284)), 4294967286)))));
                                var_21 = (max(var_21, ((!(var_0 / var_6)))));
                                var_22 = ((~(~var_15)));
                            }
                        }
                    }
                    var_23 *= var_7;
                    var_24 = (-12 != (~0));
                    var_25 = (min((min(var_2, 0)), (((~(!1495738738))))));
                }
            }
        }
    }
    var_26 = (min((0 >= var_19), ((1 * (3734515706007599824 & var_11)))));
    #pragma endscop
}
