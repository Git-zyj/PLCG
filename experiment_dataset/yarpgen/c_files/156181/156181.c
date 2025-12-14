/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = ((var_2 == (((((var_8 ? var_1 : var_9))) ? -208738092 : (max(7, -633140321))))));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = var_7;
                var_15 = ((((var_2 ? (((arr_1 [i_0] [i_0]) ? -1083846299 : var_7)) : ((127 ? 1287936509 : -1287936509))))) ? ((((max((arr_1 [i_0] [i_1]), 2147483647))) ? (min((arr_1 [i_0] [i_0]), var_0)) : ((67108863 ? 2147483647 : (arr_2 [21]))))) : ((var_0 / ((-1287936530 ? var_8 : (arr_2 [i_0]))))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
