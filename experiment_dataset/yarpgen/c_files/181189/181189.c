/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [i_0] |= ((~(16646144 | 29789)));
                    var_17 = ((((((0 | 124) > (((arr_1 [7]) | var_12))))) ^ var_11));
                    arr_7 [i_0] [i_2] [i_2] = ((-var_11 ? ((+(((arr_5 [i_0] [i_1 - 1] [i_2] [i_1]) | (arr_2 [i_0] [i_1] [i_2 + 1]))))) : (arr_5 [i_1] [i_1 - 1] [i_1] [i_0])));
                    var_18 = (((~var_2) ? (arr_1 [14]) : (var_15 - var_9)));
                }
            }
        }
    }
    var_19 = (max(var_19, (((((var_6 & ((11163047543958894681 ? var_7 : var_11)))) + var_6)))));
    #pragma endscop
}
