/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [4] = (var_8 / var_7);
                    arr_9 [9] [i_1] [i_0] = var_5;
                    arr_10 [i_1] [3] = 1;
                    arr_11 [i_0] [i_0] = 1;
                    arr_12 [i_1 + 2] = var_1;
                }
            }
        }
    }
    var_14 = var_6;

    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_16 [i_3] = var_7;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            arr_19 [i_4] = var_5;
            arr_20 [1] [i_3 + 3] [15] = (arr_14 [i_3]);
        }
    }
    var_15 |= ((((-((min(var_5, 1))))) | var_12));
    var_16 = 13111040116762775908;
    #pragma endscop
}
