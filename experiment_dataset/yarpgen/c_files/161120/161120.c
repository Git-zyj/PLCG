/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_2 [i_1] [i_0]);
                var_15 = ((!((((arr_3 [i_0 - 3]) ? (arr_0 [i_0]) : -13731)))));
                arr_7 [i_0] [19] [i_0] = 40606;
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
