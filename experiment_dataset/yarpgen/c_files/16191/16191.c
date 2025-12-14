/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(((min((var_2 * var_0), var_2))), (var_8 && var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 *= ((-(max(var_11, (((arr_1 [i_0]) ? 3429714127452461547 : (arr_1 [5])))))));
                    var_17 = ((~(((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 2]) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2] [i_2 + 2] [11])))));
                    var_18 *= var_3;
                }
            }
        }
    }
    #pragma endscop
}
