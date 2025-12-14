/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_10 += (arr_5 [i_1 - 1]);
                var_11 *= ((!((((((1 ? var_7 : 1))) ? ((1 / (arr_5 [i_0]))) : (((var_0 > (arr_1 [i_0])))))))));
                arr_6 [i_1] [1] = 1;
            }
        }
    }
    var_12 = max((min(((var_2 ? var_3 : var_1)), (1 - var_1))), (min(((min(var_6, var_7))), (max(var_9, var_1)))));
    #pragma endscop
}
