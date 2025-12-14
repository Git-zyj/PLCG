/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 &= (--27306);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [21] [i_2] [i_2] = ((43412 > (!12404)));
                                var_16 = (min(var_16, (~27305)));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = (7638232034105580857 / -27290);
                                var_17 = ((!(69 | 22605)));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (min(var_18, ((((186 ? -2139794721 : 3795364517))))));
    }
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_19 += ((!(((min(2147483647, 0))))));
        var_20 ^= -2817902479;
    }
    var_21 = (+-27309);
    #pragma endscop
}
