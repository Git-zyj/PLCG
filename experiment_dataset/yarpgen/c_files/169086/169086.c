/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (+(((arr_0 [i_0]) ? (arr_1 [i_1 + 2] [i_0]) : (min((arr_0 [i_1 - 2]), var_4)))));
                arr_5 [i_0] [i_0] [i_1] = ((arr_4 [i_1] [i_0] [i_0]) / (max((((arr_1 [i_0] [i_1]) / var_6)), (arr_2 [i_0] [i_1]))));
            }
        }
    }
    var_12 = (max(var_12, var_2));
    #pragma endscop
}
