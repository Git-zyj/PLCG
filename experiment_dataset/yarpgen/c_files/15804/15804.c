/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(var_3, -13));
    var_12 = (min(var_12, (((var_5 ? (((~1233089061) ? var_3 : (((24517 ? -318252944 : 1260806879))))) : (var_3 < var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = -616846804;
                var_14 = (max((((318252943 || 2147483647) ? (!-1233089061) : (arr_3 [i_1]))), 0));
            }
        }
    }
    #pragma endscop
}
