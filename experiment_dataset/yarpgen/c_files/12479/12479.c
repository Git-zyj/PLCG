/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((var_5 ? ((var_16 ? -21224 : ((var_15 ? var_6 : var_16)))) : -21224));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((~((1601 ? 1541474294 : -1601))))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_20 += (max((((((var_8 ? var_7 : (arr_1 [i_0] [17]))) < ((min((arr_0 [i_0] [i_0]), var_10)))))), var_3));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_21 ^= var_12;
                    var_22 = ((((max((((-(arr_8 [1] [i_2])))), var_3))) && var_13));
                }
            }
        }
        var_23 = var_11;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_24 = var_9;
                    arr_17 [i_5] [1] = (min((arr_1 [i_1 - 1] [i_1 + 1]), (min(-1601, (arr_1 [i_1 + 2] [i_1 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
