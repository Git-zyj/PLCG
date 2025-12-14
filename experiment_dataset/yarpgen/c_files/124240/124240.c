/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(1610612736, (((-(arr_1 [i_0]))))));
                var_14 = 3;
                var_15 = (arr_1 [i_1]);
            }
        }
    }
    var_16 = var_5;
    var_17 = var_0;
    var_18 = ((var_2 ? (((var_10 ? var_13 : var_8))) : var_1));
    #pragma endscop
}
