/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((max(5851599697668139801, 38435))) ? 511 : 6018006756203338882))), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 -= (-127 - 1);
                                arr_13 [i_0] [i_3] [i_2] [10] [i_0] = (((-(min((arr_5 [i_1] [3]), var_13)))));
                            }
                        }
                    }
                }
                var_17 -= (((2967 + 2147483647) << (((var_7 ^ 528) - 14834302582793234893))));
            }
        }
    }
    var_18 = (min(var_18, (((~(((~var_6) ? 34359738367 : var_8)))))));
    var_19 = ((((((14263479086914167327 ? var_13 : 0)) * (var_7 / var_12)))));
    #pragma endscop
}
