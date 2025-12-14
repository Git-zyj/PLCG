/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((64 ? (arr_3 [i_1]) : (((arr_3 [i_0]) ? (arr_3 [i_0]) : var_14)))))));
                var_19 = arr_0 [i_0] [i_0];
                var_20 = ((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_2 [7]) : 1))) ? (((arr_3 [i_1]) + (arr_4 [i_1] [4] [i_0]))) : (((arr_2 [1]) - (arr_4 [i_1] [i_1] [1])))));
            }
        }
    }
    var_21 = (max(var_21, var_16));
    var_22 = var_4;
    var_23 = (max(var_23, var_14));
    #pragma endscop
}
