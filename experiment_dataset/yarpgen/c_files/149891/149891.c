/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((var_0 ? ((((max(var_8, var_13))) ? (((-(arr_1 [i_0] [i_0])))) : (arr_10 [i_0 - 1]))) : var_8));
                                arr_13 [i_2] [i_2] = (arr_12 [i_4] [i_3] [i_2] [13]);
                                var_17 &= ((((((((-(arr_8 [i_3] [i_0] [i_0] [i_0])))) ? ((var_3 ? (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [4] [i_3] [i_4]) : var_7)) : (arr_11 [i_2] [0])))) ? var_6 : 31));
                                arr_14 [i_2] [i_2] = 4432026587257195331;
                            }
                        }
                    }
                    arr_15 [0] [i_2] = (max(-121, -31545));
                    var_18 += 14014717486452356299;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    arr_23 [i_0] [6] [i_6] [8] = (((-(max(var_13, var_10)))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = ((~(((~75) ? var_1 : ((var_9 & (arr_9 [13] [i_0] [i_6] [i_5] [i_0] [i_0])))))));
                                arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7] [i_0 + 1] = ((((min((arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1]), (arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1])))) ? (((arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1]) ? (arr_12 [i_7 - 2] [i_6 - 1] [i_5 + 1] [i_0 + 1]) : var_12)) : -6365090078470290225));
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((~(arr_28 [i_0] [i_0] [2] [6] [i_0 - 1] [12] [4])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_21 = ((!((!(arr_36 [i_10 - 1])))));
                        arr_42 [i_12] = ((((max(((((arr_10 [i_10]) ? var_4 : (arr_6 [i_10] [i_11] [i_12])))), (min((arr_17 [i_9]), var_2))))) ? ((74 ? var_14 : (arr_10 [i_10 + 3]))) : (((((var_8 ? var_11 : var_4))) ? (arr_19 [i_10]) : (arr_25 [i_11])))));
                    }
                }
            }
        }
        var_22 = 155;
    }
    #pragma endscop
}
