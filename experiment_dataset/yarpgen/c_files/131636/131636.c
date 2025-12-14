/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!120);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (max(((-66 ? -1 : -1960)), 1))));
                var_21 = (min(var_21, ((((arr_1 [i_0] [i_1]) >> (((((arr_2 [i_1] [i_0] [i_0]) ? var_0 : 45965)) - 221905950)))))));
            }
        }
    }
    var_22 = var_4;
    var_23 = (((((((0 ? var_18 : var_11))) && (0 <= 1))) ? ((-var_7 ? -1 : (var_17 / var_7))) : 588511739));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_24 = ((((var_7 ? 0 : 1)) <= (var_5 < var_1)));
                    var_25 = (min(var_25, (~18639)));
                    var_26 -= (arr_4 [i_2] [i_3] [i_4]);
                    var_27 |= (((((1 ? 1530 : -32174))) ? ((89656324 ? var_13 : 1024)) : ((var_0 ? 197 : -1959))));
                    var_28 = (max(var_28, (((arr_9 [i_2] [i_3] [i_4]) || (!696952981)))));
                }
            }
        }
        arr_13 [i_2] [i_2] &= (~1);
    }
    #pragma endscop
}
