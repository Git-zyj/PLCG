/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3883014632764154323;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (0 <= 4611123068473966592);

                /* vectorizable */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] = (((4611123068473966592 ? -4611123068473966585 : 4611123068473966585)) - var_3);
                    var_13 |= var_11;
                }
            }
        }
    }
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_18 [i_3] = -6379455327968574234;
                    arr_19 [i_3] = (((-33554432 > 9223372036854775807) < ((var_5 ? var_9 : var_0))));
                    var_15 = ((var_8 ? var_10 : 4611123068473966586));
                    arr_20 [12] [i_3] [7] [i_3] = ((((var_6 ? var_9 : var_10)) != (var_7 / var_4)));
                }
            }
        }
    }
    #pragma endscop
}
