/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_9, var_0))) ? var_10 : (min(var_10, (max(var_5, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((~((~(arr_6 [i_1])))));
                arr_7 [i_0] [i_1] = (max(var_7, (min(((var_1 ? 7 : (arr_4 [i_0] [i_0]))), ((((arr_3 [i_0]) % var_2)))))));
                arr_8 [i_0] [i_0] = max(((((((var_6 ? (arr_5 [i_0] [i_0] [i_1]) : var_0))) ? ((102 ? var_2 : 53973)) : ((max(-103, (arr_5 [i_0] [i_0] [i_0]))))))), (max((((arr_6 [i_0]) - var_3)), var_7)));
            }
        }
    }
    var_13 = var_1;
    var_14 = (max(var_5, var_1));
    var_15 = (max(var_1, var_8));
    #pragma endscop
}
