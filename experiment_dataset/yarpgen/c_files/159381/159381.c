/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 12;
    var_11 = (min(var_11, var_9));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((arr_5 [i_0] [i_1 + 3]) | (!1266968085)));
                var_13 = ((((((0 ? 29906 : 14)))) ? ((((!(arr_2 [i_1 + 2]))))) : (((arr_1 [i_0 + 3] [i_0 - 1]) ? (arr_4 [i_0] [i_0] [i_1 - 1]) : var_2))));
                var_14 = (min(((114 ? var_9 : (~23))), (((~(arr_1 [i_0] [i_1]))))));
                var_15 = var_2;
            }
        }
    }
    #pragma endscop
}
