/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((9604491259287836398 ? 8842252814421715200 : var_7)))), ((-var_8 ? (8842252814421715217 / var_8) : -2905527678))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = max(var_3, -4294967295);
                arr_5 [i_0] = (((((1 ? (arr_2 [i_0]) : var_11))) ? ((((arr_1 [i_0] [i_1]) ? 2305124453 : -86))) : (((arr_2 [i_0]) ? 68719472640 : (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_16 = 43;
    var_17 = ((!(((var_4 ? (max(var_14, -2095803449)) : var_4)))));
    var_18 = var_11;
    #pragma endscop
}
