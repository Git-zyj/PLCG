/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 ^= var_17;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [7] = ((!((((((var_3 <= (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0 - 2])))) - (min(var_8, var_8)))))));
                                arr_15 [i_0] [i_1] [i_0] [6] [i_4] [i_4] = ((+(((arr_1 [i_1 + 1]) * (arr_1 [i_4])))));
                                var_19 |= -var_6;
                                arr_16 [i_3] [13] = (~var_3);
                            }
                        }
                    }
                }
                var_20 = ((var_2 ? ((max(-568165658, var_14))) : var_16));
            }
        }
    }
    var_21 = (((var_17 ? 2427866952280480213 : -851786744)));
    #pragma endscop
}
