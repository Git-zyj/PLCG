/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 -= (min(var_12, (((!(var_3 & var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min((((0 << 1) ? (~1) : ((max(1, (arr_4 [i_0] [i_1 - 1] [i_1 + 1])))))), (((max((arr_6 [14]), var_7)) ? (var_6 - var_11) : (var_4 >= var_13)))));
                arr_7 [1] [1] = ((!(arr_2 [i_1 + 1] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
