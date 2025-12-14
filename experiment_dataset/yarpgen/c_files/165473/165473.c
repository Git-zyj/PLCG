/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_0 ? var_6 : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((!((((arr_3 [i_2 + 3] [i_2 - 2]) ? (arr_8 [i_2 + 2] [i_0]) : (arr_8 [i_2 + 2] [i_0]))))));
                    var_15 = (max(var_15, ((min(var_9, (((((var_13 | (arr_5 [i_0] [i_0])))) ? (arr_6 [i_2 + 2] [i_2 - 2] [i_1]) : var_8)))))));
                }
            }
        }
    }
    var_16 = (max(var_4, (((var_10 / var_2) / var_7))));
    var_17 = (min(var_17, var_13));
    #pragma endscop
}
