/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((!((min((arr_1 [i_0]), ((min((arr_5 [i_0 - 2] [i_0] [i_0] [i_0]), 199))))))));
                    arr_8 [i_0] = (48 ? 1203984735 : 13675974463938385241);
                }
            }
        }
    }
    #pragma endscop
}
