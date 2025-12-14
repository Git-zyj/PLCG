/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_10 = min((((!((max((arr_4 [5] [i_1]), var_8)))))), (max((((arr_6 [i_1] [i_1 + 1] [i_0]) - (arr_3 [i_0] [i_1]))), (arr_5 [i_1] [i_1 + 2] [i_1 + 2]))));
                arr_7 [i_1] [i_1 - 1] = (arr_2 [i_0]);
            }
        }
    }
    var_11 *= (max(((var_6 ? (var_0 / var_3) : var_9)), (((var_2 ? var_9 : var_0)))));
    #pragma endscop
}
