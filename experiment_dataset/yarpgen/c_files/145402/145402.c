/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-1 ? (((-1 != 56) % ((var_6 ? var_8 : 1660328522)))) : var_0));
    var_14 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] |= var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4 - 3] [i_2] [i_3] = (arr_0 [i_2]);
                                var_15 *= (~0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = 15979460878555844049;
    #pragma endscop
}
