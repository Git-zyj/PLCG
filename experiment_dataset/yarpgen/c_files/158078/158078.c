/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((max(var_18, (max(-7, var_3))))), ((~(max(var_4, var_11))))));
    var_20 = (min(((((max(var_15, var_18))) ? var_10 : var_16)), 0));
    var_21 |= (max(0, (((min(10, 7)) >> (((min(var_10, var_15)) + 950659146))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [14] [12] [14] |= ((1 ? 1 : var_6));
                arr_7 [2] [13] [i_0] = (((1 ? -8526709294063305077 : -5)));
            }
        }
    }
    var_22 = (var_13 ? (max(12871911276023731247, -1)) : var_16);
    #pragma endscop
}
