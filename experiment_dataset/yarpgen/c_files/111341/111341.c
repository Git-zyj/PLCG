/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (-2147483647 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((1957801936 ? (arr_0 [i_1]) : (arr_3 [i_1]))));
                arr_6 [6] [i_1] [i_1] &= arr_2 [16] [i_1];
                arr_7 [14] [i_0] = (((arr_3 [i_0]) << (((arr_3 [i_1]) - 3824166424))));
                arr_8 [i_0] [i_1] [i_0] = ((2240160729 || ((((arr_4 [i_0] [i_0] [i_0]) ? 2240160738 : 2054806561)))));
            }
        }
    }
    #pragma endscop
}
