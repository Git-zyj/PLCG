/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? (((var_2 & var_1) ^ (min(240630086, var_5)))) : (((((var_3 ? var_9 : var_8))) ? (var_5 - 240630086) : (var_3 && var_5)))));
    var_12 = ((~(min(var_4, (var_2 == 240630090)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max(29, (max(((((arr_2 [i_0 + 2]) || 4054337209))), (max(0, (arr_0 [i_1 - 1] [i_0]))))))))));
                arr_5 [i_0] [i_1 + 1] [i_0] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
