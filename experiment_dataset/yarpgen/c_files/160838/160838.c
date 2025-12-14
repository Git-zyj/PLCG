/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((~var_8), (var_9 << var_7)));
    var_14 = -103;
    var_15 = (var_1 ^ 1);
    var_16 ^= ((((max(((max(1, var_7))), (~1)))) ? (((max(var_10, var_6)))) : (~2625)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = (!734531684);
                        var_18 = ((((arr_9 [i_0] [i_1] [i_2] [i_0]) * -32757)));
                        arr_12 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2] = (((-99 & -1656708788) ? ((var_1 ? (arr_2 [i_0]) : 0)) : ((var_0 ? var_9 : -32753))));
                        arr_13 [i_0] [i_2] [i_3] = var_2;
                    }
                }
            }
        }
        arr_14 [i_0 + 1] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) & (arr_5 [i_0] [i_0 - 1] [i_0 - 1])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] = (!87);
        var_19 = 0;
    }
    #pragma endscop
}
