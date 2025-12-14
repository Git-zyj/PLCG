/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = ((((max((-17 | var_8), (arr_2 [i_0])))) <= (min(((((arr_3 [i_1] [i_2]) << (7926734255780606043 - 7926734255780606029)))), (((-127 - 1) ? var_4 : (arr_2 [i_2])))))));
                    var_14 = (min(var_14, (((((((max(var_1, -335619276)) / (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? (((!(arr_6 [1] [16] [i_2] [24])))) : (((arr_6 [i_0] [i_2] [i_1 - 1] [i_0]) ? -17 : -17)))))));
                }
            }
        }
    }
    var_15 = ((244 && (((~(65535 <= 1))))));
    var_16 = (min(var_3, (1 != 16)));
    var_17 = var_5;
    var_18 = (max((min(-76, var_9), 16)));
    #pragma endscop
}
