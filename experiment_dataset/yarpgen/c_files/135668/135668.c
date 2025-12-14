/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (135 | 51153);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((max((arr_1 [i_0 + 2] [i_1 + 3]), 51153)) & (((112 ? 116 : 101)))));
                var_12 -= ((((arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 2]) | (arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
