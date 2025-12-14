/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] &= (min((arr_2 [i_0]), -4578));
                var_13 = var_3;
                arr_7 [i_0] [i_1] [i_1] = (((!109) << (((((arr_1 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : 1022)) + 10706))));
            }
        }
    }
    var_14 = (((var_2 ? (((max(var_4, var_11)))) : ((var_2 ? var_10 : var_1)))));
    #pragma endscop
}
