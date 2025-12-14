/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_8, (((!var_3) ? -var_5 : (max(var_0, var_9))))));
    var_12 = (max(((-102 ? (max(var_10, var_3)) : var_5)), ((((max(var_6, var_10)) < var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min((((!((min(-3283470716693188216, 3)))))), 249));
                var_14 = var_4;
                arr_7 [i_0] [i_1] = (((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_3 [i_0 + 1]))) != (arr_3 [i_0 + 1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = (((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2])));
        var_16 = (((arr_8 [i_2] [i_2]) < var_4));
        var_17 = var_4;
    }
    #pragma endscop
}
