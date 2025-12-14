/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_2, (max(271940359594693641, (var_2 / var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_9;
                arr_6 [i_0] [i_0] = ((-((min((arr_3 [i_0 - 1] [i_0 + 1]), (min(var_0, var_1)))))));
                var_13 = var_11;
            }
        }
    }
    #pragma endscop
}
