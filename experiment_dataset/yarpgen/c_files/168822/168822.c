/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0 - 1] = arr_5 [i_0] [i_1] [i_0];
                arr_7 [2] = (min((arr_3 [i_0] [2] [i_1]), 2490039739535381089));
                arr_8 [i_0 - 1] [0] &= ((((arr_1 [i_0]) ? ((min((arr_3 [i_0] [i_0] [i_1]), (arr_5 [i_0 - 1] [i_0 - 1] [i_1])))) : ((225 ? -1983512480 : var_11)))) / (((((((arr_5 [1] [i_0] [i_1]) ? var_9 : (arr_5 [3] [i_1] [i_1])))) ? (arr_5 [3] [i_1] [1]) : var_12))));
                arr_9 [10] [i_1] [i_0 + 1] = ((1 ? (min(-8, (arr_3 [i_0] [i_0 + 1] [i_0]))) : (max((((arr_1 [i_1]) << (arr_0 [i_0 - 1] [i_1]))), (arr_4 [i_0])))));
                arr_10 [i_0 + 1] [i_1] [i_1] = (min((arr_5 [i_1] [i_1] [i_0 - 1]), 1));
            }
        }
    }
    var_14 = var_10;
    var_15 = ((!(((max(0, var_3)) > var_13))));
    var_16 = var_3;
    #pragma endscop
}
