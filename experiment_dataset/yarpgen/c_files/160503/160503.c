/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = 251;
                var_14 ^= ((((((226840136 ? 15217393192748518582 : 5089)))) ? (!1) : (((var_6 > ((var_6 ? var_0 : 16120)))))));
                var_15 = ((~((((arr_4 [i_1 + 2] [13]) != (!var_3))))));
                arr_5 [17] [i_1] [i_0] = (-((63 ? (arr_1 [i_0 + 2]) : var_4)));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_0] = ((((arr_7 [i_2 + 2] [i_2 + 1] [3]) || (arr_7 [12] [i_2 - 1] [12]))) ? (((arr_7 [i_2] [i_2 + 1] [8]) ? (arr_7 [14] [i_2 - 1] [14]) : (arr_7 [6] [i_2 + 2] [i_1 + 1]))) : (max((arr_7 [i_2] [i_2 + 1] [i_0]), (arr_7 [1] [i_2 + 1] [14]))));
                    arr_9 [i_0] [i_1] [i_2] = var_12;
                }
            }
        }
    }
    var_16 = (((((-(max(var_4, var_6))))) && var_7));
    var_17 += var_9;
    #pragma endscop
}
