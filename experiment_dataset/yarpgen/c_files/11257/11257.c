/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((min((max(-1350143923, var_3)), (max(-1350143923, var_2))))) ? var_7 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((max(((var_2 ? 7667 : (arr_0 [i_2]))), (arr_7 [i_1] [i_2 - 3])))) ? (((min((arr_6 [i_2] [i_2] [i_2] [i_2]), (var_9 && var_6))))) : (min((((var_8 ? 570846703 : var_4))), (arr_1 [i_2] [i_2 - 2]))))))));
                    var_14 += var_3;
                }
            }
        }
    }
    #pragma endscop
}
