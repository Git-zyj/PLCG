/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 ^= ((9223372036854775807 ? (((var_0 ? (~1) : (~var_8)))) : var_9));
                var_11 = ((var_8 > (((!(arr_1 [i_1] [i_1]))))));
                var_12 = ((((var_8 && ((max((arr_1 [2] [i_1]), var_0))))) ? (max((arr_1 [i_0] [i_1]), (max(9223372036854775807, 7909)))) : (~var_4)));
            }
        }
    }
    var_13 &= (var_7 ? ((var_4 ? -2521763007459937419 : 4655)) : (((((min(var_0, 1))) ? (max(243, 126645281)) : -9961))));
    var_14 = (((~((var_0 >> (var_6 - 1178853914))))));
    #pragma endscop
}
