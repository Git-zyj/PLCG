/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 + 2] [i_1] = ((-(max(((~(arr_0 [2]))), var_10))));
                var_15 = min((((!(((var_11 ? var_2 : var_1)))))), (max(var_9, (arr_4 [i_1]))));
                var_16 = (((((arr_0 [i_1]) ? (arr_5 [23] [i_0 - 1]) : var_0)) % ((min(3567428565, var_13)))));
                arr_7 [24] [i_1] [3] = (!(((arr_2 [i_1]) == ((max(var_1, 32747))))));
            }
        }
    }
    #pragma endscop
}
