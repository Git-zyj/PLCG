/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 -= (((!var_16) >= (~14886242073602661886)));
                    arr_10 [i_0] [i_1 + 2] [i_2] [6] = (min(var_3, var_10));
                }
            }
        }
    }
    #pragma endscop
}
