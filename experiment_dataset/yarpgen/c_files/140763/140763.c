/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (~var_8);
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) == (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_12 = (((((19 ? (arr_2 [i_0] [i_1 + 1]) : (arr_0 [i_1])))) ? (((~(arr_4 [i_1])))) : (arr_5 [i_1 + 1] [i_1 + 1] [i_0])));
            var_13 = ((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 + 1]));
            var_14 -= (((((112 ? var_3 : (arr_0 [i_0])))) ? (arr_4 [i_1]) : ((((arr_2 [1] [i_1 + 1]) & 97)))));
            var_15 = (((((var_2 ? (arr_1 [i_1] [6]) : (arr_0 [i_0])))) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))));
            var_16 = (((((arr_1 [i_0] [i_0]) <= var_7)) ? (arr_5 [i_1 + 1] [i_1] [i_1 + 1]) : (((4 & (arr_1 [i_1 + 1] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_14 [14] [i_4] [i_3] [i_0] [i_4] [i_0] = (((!var_5) ? (((arr_1 [i_0] [i_0]) ? var_7 : (arr_1 [i_3] [i_3]))) : var_4));
                        arr_15 [i_4 + 1] [i_4] [i_0] = 8719;
                    }
                }
            }
            arr_16 [i_2] [i_0] = ((arr_11 [i_2] [i_0] [i_0]) & (((arr_7 [i_0] [2]) ? (arr_11 [i_2] [i_0] [i_0]) : (arr_4 [i_0]))));
            var_17 = ((((arr_9 [i_2] [i_0] [i_0] [i_0]) <= (arr_13 [i_0] [i_2] [i_2] [i_0]))));
        }
        arr_17 [i_0] = (((((var_2 ? (arr_2 [i_0] [5]) : (arr_2 [i_0] [i_0])))) - (arr_11 [9] [9] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_18 = (~39379217);
                        var_19 = (min(var_19, (((arr_27 [i_7 + 1] [i_7 + 1] [1]) ? (arr_19 [i_6]) : (arr_25 [7] [i_7 - 1] [i_7] [i_8])))));
                    }
                }
            }
        }
        var_20 = ((var_5 > (arr_20 [i_5])));
        arr_29 [i_5] |= (((((arr_19 [i_5]) ? 9 : (arr_20 [i_5])))) ? (arr_28 [9] [1] [i_5] [i_5] [i_5] [i_5]) : (arr_25 [5] [10] [5] [i_5]));
        var_21 = (((arr_26 [i_5] [6] [6] [i_5]) - (8079764211515374596 / var_7)));
        arr_30 [i_5] = (((!var_5) ? (~var_9) : (arr_22 [6] [i_5])));
    }
    #pragma endscop
}
