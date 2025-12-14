/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 ^= (max(((((70 * (arr_6 [i_1] [i_1] [i_1]))) - 11)), ((((-548520168 / var_0) ? ((var_0 ? 1 : var_16)) : (!20))))));
                    arr_7 [i_0] [i_1 - 3] [i_0] = ((20 ? (1 - var_8) : (((arr_5 [i_1 + 1] [i_1 + 2] [i_1]) / var_8))));
                    var_19 = ((~(((arr_5 [i_0] [i_0] [2]) ? (((arr_0 [i_0] [i_0]) ? var_13 : (arr_2 [i_0]))) : var_0))));
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = var_13;
    #pragma endscop
}
