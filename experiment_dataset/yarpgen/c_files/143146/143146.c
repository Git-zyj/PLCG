/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 ? (((~var_12) ? (var_13 | var_4) : var_16)) : ((var_10 ? var_13 : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [6] = (((arr_4 [i_0] [i_1]) ? (((~(arr_2 [6] [i_1] [i_0])))) : (((arr_3 [i_1] [i_1 - 1]) ? (arr_4 [7] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1])))));
                arr_6 [i_0] [4] [14] = (arr_0 [i_0]);
            }
        }
    }
    var_18 = (~var_0);
    #pragma endscop
}
