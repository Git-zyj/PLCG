/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2 + 2] = (((-9223372036854775807 - 1) / ((-((-2052055308 ? 9223372036854775807 : 5534))))));
                    var_15 += ((228 > 9223372036854775807) + (((arr_7 [i_0] [i_0]) ? (arr_5 [i_2 + 1] [3] [i_0]) : (arr_5 [i_2 + 1] [i_1 + 2] [i_0]))));
                }
            }
        }
    }
    var_16 = (max(var_10, var_4));
    #pragma endscop
}
