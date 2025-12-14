/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_2 [i_0 + 2]), 1))) ? (min(((-(arr_0 [i_0]))), (~var_9))) : var_16));
                arr_5 [i_0] = (max(2402031711, 1237771430));
                arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2] = (((((var_8 + 3) ? (((var_2 + (arr_1 [10] [i_1])))) : (arr_0 [i_0 + 2]))) > (((var_12 & var_5) / ((var_8 ? (arr_0 [i_1]) : (arr_2 [i_0 + 2])))))));
                arr_7 [6] [i_0] = (arr_4 [i_0 - 1] [i_1] [i_1]);
                arr_8 [i_1] [i_0] = var_16;
            }
        }
    }
    var_22 = var_8;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((((((arr_9 [i_2]) * -var_15))) ? ((var_4 ? -1436623649 : (var_0 + var_13))) : 24783));
        arr_12 [i_2] = -126;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_23 = var_4;
            arr_15 [i_2] [i_2] [i_2] = var_8;
        }
    }
    #pragma endscop
}
