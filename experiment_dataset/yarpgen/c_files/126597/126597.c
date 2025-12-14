/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [9] [8] [i_2] [13] [i_0] = ((-(max(14590942289786841943, 32757))));
                                var_11 *= (min(((2360530160 ? -39 : 1262460600669628748)), (!-1437214693)));
                                var_12 = 17;
                            }
                        }
                    }
                }
                var_13 = (max((((0 ? -61 : 15))), -1437214693));
                var_14 -= 1;
                var_15 |= (((max(17556043106109541255, 211122814)) + (-64 && 41)));
            }
        }
    }
    #pragma endscop
}
