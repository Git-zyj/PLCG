/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_7, -6502822839527117667));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (~var_13)));
                var_21 = (min(((~(arr_3 [i_0] [i_1] [i_1 + 4]))), ((var_13 ? (arr_3 [1] [i_1 + 1] [i_1 + 2]) : var_3))));
                var_22 = (arr_0 [i_1 + 1] [i_1 + 1]);
                var_23 = (((arr_1 [i_0]) ? (max((((var_13 / (arr_1 [i_1])))), (((arr_1 [2]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))))) : ((((((arr_2 [i_0] [i_1 - 1]) ? (arr_1 [i_0]) : (arr_4 [i_1]))))))));
                var_24 = (arr_0 [i_0] [i_1 + 4]);
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}
