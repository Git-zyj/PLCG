/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((3188590172 ? 992413285 : var_16)) == var_9)));
    var_20 = ((1106377114 ? 121 : 3302554010));
    var_21 = ((~((((min(992413281, 23)) == (~-6325))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    var_23 |= (max((min(((123 ? 3302554002 : 2754638112042627549)), 3302554008)), -8));
                    var_24 = ((((max(2456736827, var_7))) ? (min((max(var_1, var_11)), var_3)) : (-1 + -1797519623)));
                }
            }
        }
    }
    #pragma endscop
}
