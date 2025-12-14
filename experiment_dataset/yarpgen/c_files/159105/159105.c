/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((((var_5 ? (arr_7 [1] [1] [1]) : var_0))) ? ((((((-2147483639 + 2147483647) >> (((-2147483639 - -2147483630) + 39))))) ? 1540985053 : 1540985054)) : (((1 ? (arr_1 [i_0 + 2] [i_0 + 1]) : var_3)))));
                    arr_9 [i_0] [i_0] [9] = (((max((arr_1 [i_0 + 3] [i_0 + 3]), (arr_7 [i_0] [i_0 + 2] [10]))) - ((((var_1 < ((-17900 ? -4138275142888746654 : var_7))))))));
                }
            }
        }
    }
    var_19 = var_17;
    var_20 = (((min(((var_13 ? 22132 : 2788068876)), ((1 ? var_11 : var_16)))) != (min((((-2147483633 ? var_12 : var_5))), var_11))));
    #pragma endscop
}
