/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max((((-9223372036854775807 - 1) / var_4)), (~-21))), (min((((0 | (-2147483647 - 1)))), var_3))));
    var_12 = (max(var_12, (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [9] [i_0 + 1] = max((((((var_0 ? (arr_3 [i_0] [i_0]) : var_8))) ? 1 : (max(var_6, var_7)))), (3915255779 || 1806506670));
                    var_13 = (((min(var_0, var_8))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [9] [i_0] [i_2] [i_3] = (((((!56) >> (432345564227567616 - 432345564227567606))) > (~76)));
                        arr_12 [i_0] [i_1 + 3] [9] [i_2] [i_3] [i_3] = (((min(((var_1 ? var_9 : (arr_1 [i_0] [i_0]))), ((max((arr_10 [i_0] [i_1 + 4] [i_1 + 4] [i_2] [3]), 1)))))) >= (((((arr_6 [i_0] [i_2] [i_1] [i_0]) ? var_5 : 18223862886447765401)) & (max(18446739675663040512, var_6)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
