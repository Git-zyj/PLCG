/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(((-1 ? var_1 : 71)), (((-28246 ? var_8 : -28246))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((((((!(arr_2 [i_0] [0] [i_1 + 1]))) ? ((max((arr_0 [i_1 + 2]), 65472))) : 86))), (3485878384 % -20)));
                var_11 = (min((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))));
            }
        }
    }
    var_12 = (max(var_12, (((-((((var_6 ? var_7 : -126)))))))));
    #pragma endscop
}
