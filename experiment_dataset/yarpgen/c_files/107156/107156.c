/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((~((var_7 ? var_7 : ((var_4 ? 70368744177663 : var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0 + 3] [i_0] [i_0] = 1883052482;
                arr_7 [i_0] = (~116935649);
            }
        }
    }
    #pragma endscop
}
