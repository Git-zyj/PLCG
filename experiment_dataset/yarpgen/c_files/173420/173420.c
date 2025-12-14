/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((max((min(((-(arr_0 [i_1]))), (!136))), (arr_0 [i_1]))))));
                var_14 = (min(var_14, ((~(((arr_5 [i_1] [i_0] [i_1]) ? (~4193280) : ((1 ? 6492737177800610799 : 1))))))));
            }
        }
    }
    var_15 = (((((var_9 > var_2) ? ((var_0 ? 21393 : 44782)) : var_2)) <= var_5));
    var_16 = (min(var_16, (((4907378863065324594 ? ((((!(var_7 - 0))))) : (min((((1 ? var_2 : var_5))), (13539365210644227022 & -1))))))));
    #pragma endscop
}
