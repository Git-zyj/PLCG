/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!-117);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((!((!(arr_2 [i_0 + 1])))));
                arr_6 [i_0] [i_1] = (var_9 >> (var_1 - 4949986907332185455));
                var_13 = 8388608;
            }
        }
    }
    #pragma endscop
}
