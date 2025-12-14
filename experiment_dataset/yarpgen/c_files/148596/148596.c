/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min((((min((arr_0 [i_1]), 3125132276)) - var_1)), ((((((var_0 ? (arr_3 [i_0]) : (arr_3 [4])))) ? ((var_9 ? (arr_0 [i_0]) : var_1)) : (min((arr_5 [i_1]), (arr_2 [16]))))))));
                arr_7 [i_0] = (((((min((arr_6 [i_1]), (arr_2 [i_0]))))) ? ((((max(-16, var_10))) ? (max(var_12, var_11)) : var_0)) : ((min((arr_3 [9]), (min((arr_2 [i_0]), (arr_1 [i_1]))))))));
                arr_8 [i_0] [i_1] = ((((min(1984, (arr_1 [i_1])))) & var_5));
                arr_9 [15] [15] [10] = var_6;
            }
        }
    }
    var_14 = (min(63550, (max(((var_3 ? var_10 : var_12)), var_8))));
    var_15 = -var_10;
    #pragma endscop
}
