/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_9, ((5444545012351828337 ? var_2 : var_5)))) == -1304559214));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((51884 ? 51884 : (-9223372036854775807 - 1))));
                arr_5 [i_0] = min((min((~51884), ((~(arr_2 [i_0]))))), (~13651));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] |= var_11;
        arr_11 [i_2] [i_2] |= 145;
        arr_12 [i_2] [i_2] = (51884 | 51884);
        arr_13 [i_2] [i_2] = ((((arr_8 [i_2]) - 0)) / (min(var_1, (min((arr_0 [10] [i_2]), 4380369598023408180)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_17 [2] = (~var_6);
        arr_18 [i_3] [4] = (arr_9 [i_3] [i_3]);
    }
    #pragma endscop
}
