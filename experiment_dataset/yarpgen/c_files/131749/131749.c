/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -2147483647;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [0] |= (((var_7 ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))));
                arr_7 [i_0] [i_1] = (var_6 ? (arr_5 [i_0] [i_1]) : (((((var_15 ? var_13 : (arr_2 [i_1] [i_0])))) ? (min(var_14, var_6)) : (((arr_0 [i_0]) / var_1)))));
            }
        }
    }
    var_18 = var_14;
    var_19 = (min(var_19, ((((var_4 / var_10) ? var_0 : (var_9 && var_0))))));
    #pragma endscop
}
