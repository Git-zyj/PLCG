/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((var_8 < (arr_4 [i_0] [i_1 - 1] [i_1 - 1])))) >> (((max(58093, ((35 ? 1 : -1)))) - 58076))));
                var_11 = ((var_5 && (((arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1]) < (arr_4 [i_1 + 2] [i_1] [i_1 + 2])))));
            }
        }
    }
    #pragma endscop
}
