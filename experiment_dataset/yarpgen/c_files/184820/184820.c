/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 14782));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((var_15 ? 1 : 38));
                    var_19 = (min(((((0 ? (arr_2 [i_0] [i_1 + 1]) : 1)))), 0));
                }
            }
        }
    }
    #pragma endscop
}
