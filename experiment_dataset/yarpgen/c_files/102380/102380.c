/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((var_7 / (((-1 / var_5) + (551908446 * 551908446)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [0] [i_1] = ((var_4 ? ((min(37778, (arr_5 [i_0 + 2])))) : (~118)));
                arr_7 [i_1] [i_0 - 1] = ((min(((((arr_4 [i_0]) && var_11))), (arr_2 [i_0 + 1] [i_0]))));
            }
        }
    }
    #pragma endscop
}
