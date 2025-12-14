/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~65050);
    var_12 *= ((4216928528 || (1 & 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, var_7));
                    var_14 = (((35717 >= 7823035426847380613) & (var_10 >= var_1)));
                    var_15 -= ((((var_7 ? 1005289561 : var_5)) + (((~(29812 <= 494))))));
                }
            }
        }
    }
    var_16 = (~88);
    var_17 = (max(var_7, ((((1 <= var_1) >> (var_4 - 1221576886))))));
    #pragma endscop
}
