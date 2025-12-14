/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((var_11 ^ -32501) ? var_4 : (var_3 & var_9)))) ? 29097 : ((var_8 ? (((var_3 ? (arr_4 [i_0]) : 6722))) : 50646))));
                var_12 = (((((max(var_0, 14907)))) + 12105580968748561078));
            }
        }
    }
    var_13 = ((((((var_0 ? var_9 : var_1)))) ? 12105580968748561078 : (((var_1 / var_9) ^ var_2))));
    #pragma endscop
}
