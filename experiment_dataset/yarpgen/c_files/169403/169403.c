/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (62691 | var_9);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 33427;
        var_15 = (!0);
        arr_4 [i_0] = (min(36996941, 3961768214));
        arr_5 [i_0] [i_0] = (!-78);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [6] |= ((max((arr_7 [i_1 + 2]), 15)));
                    var_16 |= (min((((!(((var_3 ? 103 : var_12)))))), (arr_10 [i_1 - 1] [i_1])));
                }
            }
        }
        arr_14 [i_1] [i_1] = ((9669 | (min(((0 ? 333199081 : var_6)), 63))));
        arr_15 [i_1] = 1428648978;
    }
    var_17 |= ((((min((45 % 20), 42))) ? 1350 : ((var_11 | ((92 ? 1339 : -21))))));
    var_18 = ((-(((!(var_13 | -22985))))));
    #pragma endscop
}
