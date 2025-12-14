/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(min(0, (!50263)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [12] [i_2] &= (min((arr_2 [10] [i_1 - 3]), var_7));
                    arr_8 [i_1] [i_1] [i_2] [1] = ((((-8 ? ((0 ? 3121061550 : var_2)) : ((var_2 ? var_7 : var_8)))) | (-64 + -551557225)));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((((max((6 != 102), 63))) ? (arr_2 [i_1] [i_2]) : (min((min((arr_1 [i_1]), var_1)), (arr_0 [i_0])))));
                    var_19 = var_12;
                }
            }
        }
    }
    var_20 = (max(var_7, ((((max(var_3, var_8)) > var_0)))));
    #pragma endscop
}
