/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((min(((min(1, 1))), (var_9 | 6191815332394740629)))) ? ((min((arr_3 [i_0 - 3] [i_1 - 2]), (arr_3 [i_1 - 4] [i_0 - 2])))) : var_7)))));
                var_18 = (~6191815332394740647);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_5] [i_2] [i_5] [i_2] &= (((arr_13 [i_2] [i_2] [i_2]) << -0));
                            var_19 = var_10;
                            var_20 |= (!-26809);
                            arr_19 [i_2] [i_4] [i_4] [i_4] = (min(-6191815332394740648, -6191815332394740641));
                            var_21 = (max(var_21, (((!((min((arr_17 [i_3] [i_5 + 2] [i_2] [i_5]), var_12))))))));
                        }
                    }
                }
                var_22 ^= (((6191815332394740647 ? (min(var_0, 6191815332394740647)) : 1)));
            }
        }
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_23 &= var_2;
        var_24 &= 6191815332394740647;
        var_25 = (min((((16 ? (arr_20 [i_6] [i_6]) : var_0))), -6191815332394740650));
    }
    #pragma endscop
}
