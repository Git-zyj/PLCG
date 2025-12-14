/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-736707094 ? (min((127 <= var_2), 1)) : ((-(15285990589040811023 || 10247))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_4 [i_0 + 1] [6] [i_1])));
                var_16 = (max(var_16, (arr_4 [i_0 - 1] [1] [i_1])));
                var_17 = (min(var_17, (arr_4 [i_0 - 1] [6] [i_0 + 1])));
                var_18 = (min(var_18, ((max((~-29802), (max(4194303, (max((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]), 127)))))))));
            }
        }
    }
    #pragma endscop
}
