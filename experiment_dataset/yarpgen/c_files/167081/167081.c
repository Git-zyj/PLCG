/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (126 || 1)));
    var_17 = 792240860;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = ((((var_2 ? ((1152921504606846720 ? (arr_2 [i_0] [i_1]) : 0)) : var_15)) == var_15));
                var_19 |= -3756522236910944562;
                var_20 += ((+(((arr_3 [i_1]) + 1))));
                var_21 -= 8245055343426656684;
            }
        }
    }
    #pragma endscop
}
