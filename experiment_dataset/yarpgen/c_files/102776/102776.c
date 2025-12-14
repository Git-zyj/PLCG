/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 | (!1)));
    var_13 = var_2;
    var_14 = max(((((min(255, var_2))) ? ((1 ? 1 : var_8)) : (49 + 14684126732714122915))), 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (max(-42, (max((arr_3 [i_1] [i_2 - 2]), var_7))));
                    var_16 = (min(((max(1, -38))), ((((max(11707507086643197707, 69))) ? ((52448 ? (-32767 - 1) : -25)) : -48))));
                    var_17 = (min(var_17, ((((((1106494438 ? (arr_5 [1]) : -737125112)) ^ (44456 ^ 10144)))))));
                }
            }
        }
    }
    #pragma endscop
}
