/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((min((var_7 / var_6), ((min(var_8, 255))))));
    var_16 = -var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((var_7 ? (arr_6 [i_0 + 2]) : (arr_6 [i_0])));
                        arr_12 [i_2] [i_2] = ((240 ? (arr_5 [i_0 + 3]) : (arr_1 [i_0 + 1])));
                        var_17 = (min(var_17, (arr_4 [i_0] [i_1 - 1])));
                    }
                }
            }
        }
        var_18 = (min(var_18, 9291286944821917269));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_19 = (arr_13 [i_4 - 2] [i_4 - 2]);
        var_20 = 261632;
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_21 = (min(var_21, 150));
        arr_17 [i_5] |= (max((min((arr_16 [i_5 + 1]), (arr_16 [i_5]))), (((arr_16 [i_5 + 1]) - var_2))));
        var_22 = (arr_16 [i_5 + 1]);
    }
    var_23 = (max(var_23, var_8));
    #pragma endscop
}
