/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_20 = ((-(max(3478773712, (((arr_0 [i_1]) ? (arr_3 [i_1] [i_1 + 4] [i_1]) : 796170143051971381))))));
                arr_4 [i_1] [i_1 + 2] = ((((max((arr_1 [i_0]), ((var_6 ? (arr_3 [i_0] [i_0] [i_1]) : var_0))))) ? (~var_0) : (arr_1 [i_1])));
                arr_5 [i_1] [i_1] = (((((((((arr_0 [i_1]) ? var_15 : var_15))) ? var_15 : (min((arr_1 [i_0]), (arr_2 [i_0 + 1])))))) ? ((((min(32232, 32232))) ? (~1) : (((arr_0 [i_0]) ? (arr_3 [i_0] [i_0 + 1] [i_1]) : var_5)))) : ((var_12 ? (arr_3 [i_0 + 1] [i_1 - 1] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1])))));
                var_21 = (max(((((((-(arr_2 [i_1])))) && ((((arr_3 [i_1] [i_0] [i_1]) ? (arr_0 [i_1 + 1]) : (arr_2 [i_0]))))))), ((-((-32230 ? 32232 : (arr_0 [i_0 + 1])))))));
                var_22 = ((((((var_12 ? (arr_0 [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_1]))))) ? (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))) : (((((var_15 ? -63 : 59970))) ? (arr_2 [i_0 + 1]) : ((var_4 ? var_18 : (arr_2 [i_0])))))));
            }
        }
    }
    var_23 = var_10;
    var_24 = (min(var_14, var_16));
    #pragma endscop
}
