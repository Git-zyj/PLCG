/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 *= ((((max((((!(arr_0 [i_0] [i_0])))), ((var_13 ? 90 : (arr_2 [i_0] [i_1])))))) ? (((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [8]) : var_5)) : (((max(-2471262158188748979, var_0))))));
                var_16 = var_8;
            }
        }
    }
    #pragma endscop
}
