/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((((7313309779796706729 ? 1785843049 : (arr_3 [i_0] [i_1] [i_1]))))) - ((111 ? ((33926 ? var_9 : var_11)) : (var_4 + 5072063240123118617))))))));
                arr_5 [i_0] [i_1] [i_0] = ((904633656 & ((((arr_4 [i_0] [18]) ? ((var_1 ? var_5 : (arr_1 [i_1] [1]))) : var_10)))));
                var_15 = ((((((((arr_4 [i_0] [i_0]) & 5496681263984865167))) ? (((-4287803357969927168 ? 1785843069 : 33920))) : ((55213 ? -1761780612 : var_7)))) & 3500882931));
            }
        }
    }
    var_16 = (((~40921) ? var_0 : var_9));
    var_17 = var_4;
    #pragma endscop
}
