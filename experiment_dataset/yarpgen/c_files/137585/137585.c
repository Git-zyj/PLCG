/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (!var_7);
    var_20 ^= (max(var_10, (~-23190)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 |= ((~(((((var_6 - (arr_2 [2] [i_2]))) > (arr_7 [i_2] [i_0]))))));
                    arr_9 [2] [i_1] [i_2] = (max((((~((min(0, -1)))))), ((-((var_6 ? (arr_2 [i_0] [i_1]) : var_14))))));
                }
            }
        }
    }
    var_22 = (((((var_8 ? ((max(162, -1))) : (-7 + var_11)))) ? (var_3 + 16963490465661958462) : (((var_1 ? var_16 : var_13)))));
    #pragma endscop
}
