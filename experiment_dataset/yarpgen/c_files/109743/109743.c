/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(-var_10, ((var_9 ? (~var_1) : (var_0 & var_11))));
    var_16 = ((var_6 ? ((((var_8 && var_8) >> (((max(var_12, var_14)) - 3575387162))))) : (max((((var_11 ? var_4 : var_3))), (min(-5965085281256611651, -174462023))))));
    var_17 = (max(var_17, var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (min((arr_2 [i_0 - 2]), (((var_1 | (arr_2 [i_0 + 3]))))));
                    var_19 = max(((((min(var_11, (arr_6 [i_0] [i_1] [i_1])))) ? (min(var_7, 111)) : ((((arr_5 [i_0] [i_0] [i_1]) ? -5965085281256611651 : (arr_2 [i_0])))))), (var_5 || 46599));
                }
            }
        }
    }
    var_20 &= var_3;
    #pragma endscop
}
