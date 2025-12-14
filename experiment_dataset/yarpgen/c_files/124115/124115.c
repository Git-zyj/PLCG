/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_1] [i_1]);
                    arr_8 [i_0] [i_1] [i_1] = (arr_5 [i_1] [i_1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((-(arr_1 [1])));
        arr_12 [i_3] = ((-((~(arr_0 [i_3])))));
        var_18 ^= var_15;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 = (max(var_19, (!8488547426192741260)));
        arr_15 [i_4] [i_4] = ((-(arr_0 [i_4])));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((((((arr_5 [18] [i_5]) ? (arr_5 [4] [i_5]) : (arr_5 [14] [i_5])))) ? var_12 : (arr_4 [i_5])));
        var_20 = ((arr_3 [14]) ? ((var_11 ? (arr_14 [i_5]) : (arr_14 [i_5]))) : var_11);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_25 [i_6] [i_6] = (((~var_9) ? var_8 : (arr_19 [i_5] [i_6])));

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_21 = (max(var_21, (!var_8)));
                arr_28 [i_5] = ((!(arr_27 [i_5] [i_5] [i_6] [i_7])));
            }
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                arr_32 [i_8] [i_6] [i_5] [6] = var_9;
                var_22 = (!var_5);
                arr_33 [i_8 + 1] = -8488547426192741258;
            }
        }
        var_23 &= (~-8488547426192741268);
    }
    #pragma endscop
}
