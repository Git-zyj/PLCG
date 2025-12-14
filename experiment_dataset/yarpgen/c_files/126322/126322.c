/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (-17 | var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2 + 2] [i_2] = (max(((~(var_3 ^ var_5))), (((!((((arr_6 [2] [i_1] [i_2]) ? var_7 : (arr_0 [i_0] [i_0])))))))));
                    arr_8 [3] [i_2] [i_0] = -31;
                    var_11 = (((((var_9 ? (((min(var_9, var_9)))) : var_3))) ? (((arr_6 [i_2] [i_2] [i_2 + 4]) ? var_9 : (arr_2 [i_2 + 2] [i_2] [i_2 + 4]))) : (((max(1730241220, (arr_0 [i_1] [i_0])))))));
                    arr_9 [i_0] [i_2] [i_0] [i_0] = var_1;
                    arr_10 [i_2] [i_2] [i_2] [i_2] = (((arr_2 [i_2 + 2] [i_2 + 4] [i_2 - 1]) - (arr_0 [i_2] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
