/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(((9676 ? var_8 : var_14), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((+(((~65535) - (min(var_5, 2147483647))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_2] [i_0] [i_0] = min((-2147483647 - 1), 1);
                            var_17 = (((max((~17), 65535)) < (1 && var_1)));
                        }
                    }
                }
                var_18 = (+-21);
                var_19 -= (max((-2147483643 - 0), (((var_9 + var_11) + 16))));
            }
        }
    }
    #pragma endscop
}
