/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_8, var_6));
    var_21 = (((((var_19 ? ((var_12 ? var_18 : var_14)) : ((var_18 ? -24472 : -24472))))) ? var_13 : ((var_6 % ((24486 << (8663 - 8655)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = (min(((var_5 ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_1]))), (arr_3 [i_0] [i_1])));
                var_23 = ((((min((arr_1 [i_0] [i_1]), var_9))) + var_1));
                var_24 |= (min(((var_14 ? (arr_0 [i_0] [i_1]) : 24490)), (((arr_2 [i_0] [i_1]) & (arr_3 [i_0] [i_1])))));
                var_25 = (~var_16);
                var_26 = (min(var_26, (((24486 ? (((-24472 + 2147483647) << ((((min(var_5, (arr_5 [2])))) - 66)))) : -4)))));
            }
        }
    }
    #pragma endscop
}
