/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 -= (((((var_7 ? (((var_13 ? var_12 : (arr_7 [i_0] [15] [i_0])))) : var_9))) ? (min(var_2, (arr_0 [i_2]))) : (arr_2 [16] [i_1] [7])));
                    var_20 = (max((((~(arr_5 [i_0] [i_1] [i_2])))), ((var_18 ? (max(12, 16081669507310554767)) : -1814151275))));
                    arr_8 [1] [5] [i_2] [10] = (arr_1 [i_0] [i_1]);
                    var_21 = var_0;
                }
            }
        }
    }
    var_22 = (min((((!(((var_4 ? var_2 : var_6)))))), ((1 ? ((1 ? 18127392203066011981 : 215)) : (((max(1, 1))))))));
    var_23 = var_15;
    #pragma endscop
}
