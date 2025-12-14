/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = ((-var_1 ? ((max((arr_4 [i_1 - 1]), (arr_4 [i_1 - 3])))) : var_7));
                var_12 = ((~(arr_0 [i_0] [i_1])));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
