/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1056964608;
    var_13 = -1125109175;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((2097120 ? (((arr_0 [i_1 + 4] [i_1]) ? (arr_0 [i_1 + 4] [i_1]) : (arr_0 [i_1 + 3] [i_1]))) : ((110 ? 66584576 : (-32767 - 1)))));
                arr_5 [i_0] [i_0] |= (!126);
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
