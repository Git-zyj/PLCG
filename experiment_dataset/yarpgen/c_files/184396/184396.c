/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = ((min(((var_1 ? var_3 : var_8)), (!var_3))));
                    var_14 = (arr_0 [i_0 - 3]);
                }
            }
        }
        var_15 -= var_3;
        arr_8 [i_0 + 2] = ((max((arr_3 [i_0 - 1] [19] [6]), 9223372036854775802)));
        arr_9 [17] = max((arr_6 [14] [14] [1] [1]), ((((arr_0 [i_0 + 1]) < var_8))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = (min(var_16, (((!(arr_0 [i_3]))))));
        var_17 = (arr_7 [i_3] [i_3] [i_3] [i_3]);
        var_18 = ((var_10 >> (((arr_5 [i_3]) - 15542))));
        var_19 = ((var_2 ? 5153 : ((var_4 | (arr_5 [i_3])))));
    }
    var_20 |= (!var_2);
    var_21 |= ((-(max((max(var_11, var_6)), var_1))));
    #pragma endscop
}
