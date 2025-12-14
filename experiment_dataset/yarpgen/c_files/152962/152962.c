/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [14] [i_1] = ((var_0 ? var_5 : (arr_0 [i_1] [i_1])));
                var_13 -= (max((arr_4 [i_0] [i_0] [i_0]), 10));
            }
        }
    }
    var_14 = ((0 ? var_7 : var_9));
    #pragma endscop
}
