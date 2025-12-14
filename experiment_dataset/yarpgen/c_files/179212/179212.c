/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 2] = (min(-7971474065615338048, 0));
        var_16 = (arr_1 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_2] = ((((((arr_3 [i_1 + 2]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 - 1])))) ? var_2 : (~0)));
                    var_17 = (arr_5 [8]);
                    var_18 = 263507448;
                }
            }
        }
        arr_10 [i_1 + 1] = (((arr_7 [i_1] [i_1] [i_1] [i_1 + 3]) + var_2));
    }
    var_19 = var_10;
    var_20 = 263507448;
    var_21 ^= ((var_1 ? (max(var_11, var_3)) : ((min(((min(0, -98))), (~var_4))))));
    #pragma endscop
}
