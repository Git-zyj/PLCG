/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 += (arr_2 [0] [i_0 + 1]);
        var_15 = var_11;
        var_16 = (((arr_2 [i_0] [i_0 - 1]) ? (arr_2 [i_0] [i_0 + 1]) : 17709734379134375225));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 -= (((-127 - 1) ? (arr_0 [i_1 - 1]) : var_5));
        var_18 = (arr_4 [i_1 - 1] [i_1 + 1]);
        arr_5 [i_1] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : var_1));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_19 = (min(var_19, (((min((((20529 ? (-127 - 1) : 110))), ((var_9 ? (arr_4 [i_2] [i_2]) : (arr_10 [10] [i_3])))))))));
                var_20 ^= (arr_11 [i_2]);
            }
        }
    }
    #pragma endscop
}
