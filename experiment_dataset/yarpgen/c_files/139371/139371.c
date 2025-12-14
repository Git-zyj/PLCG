/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((max(((max(48, -48))), var_10)), 1655680777);
    var_18 = ((var_16 << (var_9 + 795594964)));
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 -= (((((var_2 ? ((max((arr_2 [i_0] [i_1]), 190))) : ((((arr_2 [i_0] [i_0]) || var_7)))))) ? (max((var_2 / 3747808283574152428), (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : (arr_0 [i_0] [i_1]))))) : var_8));
                arr_4 [i_0] [i_1] [i_1] = (max(((var_16 ? (arr_0 [3] [i_0]) : var_8)), (0 < 48)));
            }
        }
    }
    #pragma endscop
}
