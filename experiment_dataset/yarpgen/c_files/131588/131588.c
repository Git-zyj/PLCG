/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 2038651253;
                arr_8 [i_0 + 1] [i_1] [i_1] = min((arr_0 [i_0]), (((arr_6 [i_0 + 1]) | (arr_6 [i_0 - 1]))));
            }
        }
    }
    var_16 &= (min((max(((min(var_6, var_11))), var_13)), var_1));
    var_17 = ((-(max(((var_15 ? var_4 : 15255332382560858068)), var_1))));
    #pragma endscop
}
