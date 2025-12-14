/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_3 [16] [16] [i_1 + 1]) >= -2147483641)))));
                arr_4 [0] [i_0] [1] = (arr_0 [i_1 - 2] [i_1]);
            }
        }
    }
    #pragma endscop
}
