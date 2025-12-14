/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2 + 2] [i_0] = (arr_3 [i_0] [i_1] [2]);
                    arr_10 [i_2] [i_1 - 1] [i_0] = var_1;
                    var_12 = (((((((min((arr_4 [i_0] [i_0] [14]), 103))) && var_6))) % 29604));
                    arr_11 [i_2] [i_2] [i_1] [i_0] = (((var_5 ? (arr_2 [i_0] [i_1] [i_2]) : (arr_2 [i_0] [7] [i_2]))));
                    var_13 = ((((arr_0 [i_2]) ? 32767 : (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                }
            }
        }
    }
    var_14 = ((var_1 != (var_3 | 1209693611)));
    #pragma endscop
}
