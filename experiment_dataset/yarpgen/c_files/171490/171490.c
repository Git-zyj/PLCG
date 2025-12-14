/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_0 - 1])))) ? (arr_0 [i_0 - 1] [i_1]) : var_5);
                var_21 = var_9;
                var_22 = ((var_6 >> ((((arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]) <= var_5)))));
                var_23 ^= ((var_11 ? (!var_3) : (((((-2179281698661738114 ? (arr_5 [0] [0] [6]) : (arr_4 [i_0 + 2]))) < var_13)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = var_3;
        var_24 = var_12;
        var_25 = var_7;
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_14 [i_3 - 1] [i_3 - 1] &= (arr_13 [i_3 + 1]);
        var_26 = 255;
    }
    #pragma endscop
}
