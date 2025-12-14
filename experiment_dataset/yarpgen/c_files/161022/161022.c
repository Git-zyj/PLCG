/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min((max(var_16, var_9)), (min(383110277, var_14)))), (min((min(var_14, 383110277)), (min(var_10, 64091))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (min(((min((min(1339209660, 0)), ((max((arr_0 [1] [i_0]), 22782)))))), (max((min(var_5, 1397899601)), (min(var_5, 1))))));
                var_19 = (max(var_19, ((max(((min((max(216, 231)), 31))), (max(((max(217, var_3))), (min((arr_2 [i_1 - 1] [i_0]), var_8)))))))));
            }
        }
    }
    #pragma endscop
}
