/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_4 [5] [6] [i_0]), (arr_4 [1] [i_1] [i_1])))) ? (((arr_4 [i_1] [i_0] [i_0]) ? (arr_4 [12] [i_1] [12]) : (arr_4 [i_0] [i_0] [i_1]))) : -1644385840));
                var_17 = ((max(var_13, (arr_4 [i_0] [i_0] [i_0]))));
                arr_5 [11] = (((((((max((arr_1 [i_0] [1]), 51353))) << (((~var_7) - 1542544269115048774))))) ? (min((arr_0 [i_0] [i_1]), var_5)) : (arr_0 [i_0] [15])));
            }
        }
    }
    var_18 = min(1630667318, ((max(0, var_15))));
    var_19 = ((max((~var_9), var_12)));
    #pragma endscop
}
