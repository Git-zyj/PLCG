/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((1728015177 ? var_1 : (var_8 < 10386530248141105855)));
    var_17 = ((16384 != ((2090044084846432907 ? (-9223372036854775807 - 1) : 3547721811))));
    var_18 = (((var_14 - var_10) ? (var_14 + var_5) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] = ((((((7590870325853168437 ? 4987442494399623820 : -1023644525589412527)))) >> (((((arr_3 [i_0]) ? (arr_1 [i_1] [i_0]) : var_13)) + 1580482262379169059))));
                var_19 = (arr_1 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
