/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max((arr_5 [i_1] [i_1] [i_1] [i_1]), 47));
                    arr_7 [i_2] [i_1] [i_2] [i_1] = (arr_6 [9] [i_2] [i_2] [i_0]);
                }
            }
        }
    }
    var_21 = (min((((((var_11 ? var_10 : var_5))) ? var_14 : (var_13 - var_12))), var_10));
    var_22 |= ((!(((var_13 ? (min(var_11, var_18)) : (!var_10))))));
    #pragma endscop
}
