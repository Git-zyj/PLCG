/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] [i_1] = (max((min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3]))), ((((arr_1 [i_0]) ? var_6 : var_6)))));
                var_11 = (max(var_3, (max((min((arr_1 [21]), 2138212627)), 2156754681))));
                var_12 = (min((arr_2 [i_1] [i_1] [i_0]), ((~(arr_3 [i_1 + 1] [i_1])))));
            }
        }
    }
    var_13 = var_2;
    var_14 = var_1;
    var_15 = var_1;
    #pragma endscop
}
