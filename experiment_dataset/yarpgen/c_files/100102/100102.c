/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(93, var_0)), var_8));
    var_14 = var_3;
    var_15 = max(var_2, 32625);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (1 + -28931);
                var_16 = ((((min(0, (arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 1])))) != ((min((arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 1]), 32625)))));
            }
        }
    }
    #pragma endscop
}
