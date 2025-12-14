/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((~2147483647) ? (min((((var_3 ? var_17 : 197))), (arr_0 [i_0]))) : 0));
                                var_22 -= (((3223380363 & -805381765) / (var_5 ^ -805381774)));
                                arr_13 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [i_4] [i_4] = (max((805381764 / -805381765), (var_16 >= var_15)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [24] |= (((arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [8] [i_1] [i_1 - 1]) || 18));
                var_23 -= (arr_1 [i_0]);
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
