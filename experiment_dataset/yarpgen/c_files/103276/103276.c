/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((var_1 ? (arr_5 [i_0] [i_0]) : var_6));
                var_18 = (min((max(var_16, (var_16 ^ var_3))), var_12));
                var_19 = min(((((min(var_9, var_8)) < var_7))), (((arr_2 [i_1 - 3] [i_1 + 1]) ? 4766 : (arr_2 [i_1 - 2] [i_1 - 2]))));
                var_20 = (((((arr_2 [i_1] [i_1 - 3]) ? ((var_1 ? -3172445034386009132 : -3172445034386009132)) : (((min(var_15, var_15))))))) ? ((((min(var_14, var_5))))) : (~3172445034386009140));
            }
        }
    }
    var_21 = (max(var_21, var_0));
    var_22 = var_14;
    #pragma endscop
}
