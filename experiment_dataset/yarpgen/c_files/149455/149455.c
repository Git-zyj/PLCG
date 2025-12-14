/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((((((max(var_13, var_0))) || var_5)))) < (min((min(var_10, var_7)), ((min(var_1, var_14))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_10;
                    var_19 = ((var_16 ? (arr_6 [i_2 - 3] [i_1] [i_2]) : (arr_3 [i_2 + 2] [i_1] [i_2 + 1])));
                    var_20 = var_4;
                    var_21 -= (((arr_3 [i_2 - 4] [i_2] [10]) ? (((var_17 ? (arr_3 [i_2] [i_2] [i_2]) : 413904310))) : (((arr_1 [i_2]) ? var_14 : var_3))));
                }
            }
        }
        arr_9 [i_0] = (((arr_0 [i_0]) * (((arr_3 [i_0] [10] [10]) ? var_1 : var_2))));
    }
    var_22 = var_15;
    var_23 = ((var_14 < (max(((var_2 ? var_8 : 7199)), var_12))));
    #pragma endscop
}
