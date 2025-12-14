/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((var_5 + 2147483647) << (((((((181 ? var_6 : var_9)) > var_10))) - 1)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = max((min((~-15), (max(-7435358564959419220, var_13)))), ((var_6 ? (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1]) : -5872147778528051954)));
                    var_21 = (arr_2 [i_0 - 3]);
                    var_22 = (!-1900011576306810615);
                    var_23 = ((~(185 ^ var_4)));
                }
            }
        }
    }
    var_24 = var_15;
    var_25 = ((min(((max(185, var_10))), var_5)));
    #pragma endscop
}
