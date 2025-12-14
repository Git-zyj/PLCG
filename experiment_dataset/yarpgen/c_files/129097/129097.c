/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [11] = -5098;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [6] [i_1] = (max(914681756, var_5));
                    arr_10 [i_0] [i_1 - 2] [i_2] = (arr_8 [i_2] [i_1] [i_0] [i_0]);
                }
            }
        }
        arr_11 [i_0] [i_0] = (((~var_7) <= (min(4044445517, (((~(arr_4 [i_0] [i_0]))))))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_5 + 1] [i_6] = arr_15 [i_5 - 2] [i_6];
                        arr_23 [i_3] [i_3] [i_3] [i_5] [i_5] = ((+(max(1, (min((arr_20 [i_3] [i_5] [i_5] [i_6]), (arr_7 [i_3] [i_3] [i_5])))))));
                        arr_24 [i_6] [i_6] [i_6] [i_5] = min(((((max((arr_13 [2]), var_8))) ? (arr_16 [i_3] [i_5] [i_3 - 3]) : (!var_1))), (((((min(var_2, (arr_21 [i_5] [i_4] [7])))) > ((22 ? -1352688327 : (arr_16 [i_3] [i_5] [i_3])))))));
                    }
                }
            }
        }
        arr_25 [14] = ((var_9 ? (((arr_17 [i_3 - 3] [i_3 - 3] [i_3]) ? var_2 : var_12)) : (((arr_1 [15]) + (arr_19 [i_3] [i_3] [i_3 - 1] [1] [i_3 - 3] [i_3])))));
        arr_26 [3] [3] = (arr_5 [i_3]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_29 [3] [3] = (((arr_27 [i_7]) >> (238 - 210)));
        arr_30 [i_7] = (arr_0 [i_7] [i_7]);
    }
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            {
                arr_38 [i_9 - 1] [i_9] [2] = (arr_21 [4] [i_9] [i_9]);
                arr_39 [i_8] [i_8] [i_9] = var_8;
            }
        }
    }
    var_17 = min((var_2 >= var_14), -1352688327);
    #pragma endscop
}
