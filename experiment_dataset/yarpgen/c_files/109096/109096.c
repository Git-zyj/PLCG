/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 *= (~var_7);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_8 [i_0] = (arr_6 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0]);
                        var_20 *= var_12;
                    }
                }
            }
        }
        arr_9 [i_0] = ((((((((-(arr_0 [i_0]))) > var_15)))) <= (max((arr_6 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))));
        var_21 = (min((arr_7 [i_0]), ((-(arr_4 [i_0] [i_0 - 1] [i_0] [i_0 + 1])))));
        var_22 -= ((7 ? ((~(var_7 - 1))) : 1837585294));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_23 -= ((((~(min((arr_0 [i_4]), (arr_4 [i_4] [i_4] [i_4] [i_4]))))) > ((((((arr_11 [i_4]) ? -1837585295 : -1837585294))) ? 220 : 1837585283))));
        arr_13 [i_4] = ((var_0 ? (((arr_10 [i_4]) ? var_12 : var_5)) : ((var_5 ^ (arr_7 [i_4])))));
    }
    var_24 = var_16;
    #pragma endscop
}
