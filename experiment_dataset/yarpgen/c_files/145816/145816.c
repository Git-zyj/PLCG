/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max((max(var_18, (~1056964608))), (!-3238002688))))));
    var_20 = ((var_3 ? ((((105 - var_9) * (min(3428150475, var_6))))) : ((var_7 + (3238002688 / var_0)))));
    var_21 = -448873331;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = 11524331804351633886;
                var_23 = (max(var_23, (((((max(-20311, 6787463492250311911))) ? ((var_8 >> (arr_0 [i_1 + 1] [i_1 + 1]))) : 7)))));
            }
        }
    }
    #pragma endscop
}
