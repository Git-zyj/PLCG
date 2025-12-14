/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = var_14;
                var_18 += ((~((max(var_15, var_13)))));
            }
        }
    }
    var_19 += ((var_6 ? var_17 : var_15));

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_20 = (min(var_20, (min(192, 11682))));
        arr_10 [i_2] [15] |= ((555661200450849523 ? 13 : 80));
        arr_11 [i_2] = var_4;
    }
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        var_21 = (min(var_21, var_11));
        var_22 = (((arr_12 [i_3 + 1] [i_3 - 2]) ? (((((((arr_13 [1]) ? 1 : var_6))) ? var_5 : (max(1, var_4))))) : (arr_12 [i_3] [i_3])));
    }
    var_23 |= (((((var_8 ? 32765 : ((max(var_12, var_5)))))) ? var_2 : (var_1 | var_16)));
    #pragma endscop
}
