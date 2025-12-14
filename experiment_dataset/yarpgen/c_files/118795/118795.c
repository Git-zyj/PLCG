/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (((max((arr_2 [15]), var_5)) ^ (((((8943985508529471106 && (arr_2 [i_0]))) ? ((var_10 << (((arr_3 [i_0] [i_1]) - 62187735)))) : ((var_5 ? var_5 : 2047)))))));
                var_14 = ((2047 ? -2047 : (max(237, 2047))));
                var_15 = (arr_0 [1]);
            }
        }
    }
    var_16 -= (-57468 | var_0);
    #pragma endscop
}
