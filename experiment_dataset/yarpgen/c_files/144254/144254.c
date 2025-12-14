/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (!70);
        var_10 ^= -14497;
        var_11 = -10535;

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_12 = (!(arr_0 [i_1 - 1] [i_0]));
            var_13 = (((arr_6 [i_0] [i_0] [i_1 + 2]) + (!552559993165985610)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 *= (arr_0 [i_0 - 3] [i_1 + 2]);
                        var_15 -= ((-70 ? -2 : 1375639318));
                    }
                }
            }
            var_16 = (arr_12 [i_0]);
            arr_13 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_1 + 3] [i_0] [i_0]);
        }
        var_17 = (!55064);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_18 = -32527;
        var_19 = ((-(arr_7 [i_4] [i_4] [i_4] [i_4])));
        arr_16 [i_4] = var_9;
    }
    var_20 = ((var_4 ? var_5 : var_0));
    var_21 = ((70 ? (max(((var_8 ? 3304992245 : var_2)), (var_5 <= var_0))) : var_6));
    var_22 = -70;
    #pragma endscop
}
