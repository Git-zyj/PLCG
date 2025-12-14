/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = var_9;
    var_22 = var_7;
    var_23 = (((((193 ? 55156 : 32529))) ? ((max((!-1), var_4))) : (min((max(var_7, -4)), (var_3 * 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_24 = (min(var_24, ((max((((!(((var_11 ? (arr_4 [i_0] [1] [i_0]) : (arr_2 [i_0] [i_1] [i_2]))))))), (max(((((arr_0 [i_0]) && 0))), (arr_7 [15] [1] [9] [i_2]))))))));
                    var_25 = (max(((max(((max(var_19, var_4))), -var_18))), 6703064908815101261));
                    var_26 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
