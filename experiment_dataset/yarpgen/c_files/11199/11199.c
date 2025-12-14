/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_0] [i_1]);
                var_12 = (((arr_1 [i_0 - 1] [i_0 - 1]) >> ((((~(max(1145906129, 78328806070769916)))) + 78328806070769935))));
            }
        }
    }
    #pragma endscop
}
