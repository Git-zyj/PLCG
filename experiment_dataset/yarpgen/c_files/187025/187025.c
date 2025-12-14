/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_2 && var_0) * var_7))) ? (var_4 ^ var_5) : 104));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = -3926182746;
                var_12 = (max(var_12, (((((((arr_1 [i_0] [i_1]) ^ (2814 >= 2827671103)))) ? (arr_3 [i_0]) : (!var_5))))));
                arr_4 [i_0] [6] [i_0] = (((-359808413 - 239) ? ((-(arr_0 [i_1 + 1] [i_1]))) : (~78)));
            }
        }
    }
    #pragma endscop
}
