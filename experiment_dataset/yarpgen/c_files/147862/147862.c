/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 57;
    var_14 = (((((((198 ? -32211 : var_1)) != var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (min(((61 | (((-1498049020547963735 + 9223372036854775807) << (((var_3 + 86) - 62)))))), (((24776 & ((24776 >> (48319 - 48311))))))));
                var_16 = ((max((max(32211, (arr_1 [i_0]))), (arr_1 [i_0 + 2]))));
            }
        }
    }
    var_17 -= (max(((((var_2 > 26) ^ (~var_5)))), (min(var_5, 3433280487573006968))));
    #pragma endscop
}
