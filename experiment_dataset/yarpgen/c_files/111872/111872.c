/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((arr_5 [i_2] [i_1] [i_1] [i_0]) == (arr_5 [i_0] [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]));
                                var_21 = (arr_0 [i_0] [i_4]);
                                var_22 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_0];
                                arr_14 [i_2] = ((~(((arr_9 [i_1] [13]) ? -1016972696553657670 : (arr_6 [i_2] [i_1] [i_4])))));
                                var_23 = (min(var_23, 1016972696553657671));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [i_2] [i_6 + 2] = 19296;
                                var_24 = (((arr_11 [1] [i_1] [1] [i_1] [i_6 - 1]) ? (arr_15 [i_1] [i_1] [i_5] [i_5] [i_1]) : 138));
                            }
                        }
                    }
                    var_25 -= ((65523 ? ((381780856 ? 19230 : (arr_3 [i_2]))) : ((1016972696553657673 ? (arr_11 [i_2] [i_2] [i_2] [i_1] [i_0]) : (arr_20 [i_0] [i_1] [i_1] [i_1])))));
                    var_26 = (arr_12 [6] [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]);
                }
            }
        }
        var_27 -= -1;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((arr_1 [i_7]) ? (arr_16 [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7] [i_7]));
        var_28 = ((-(arr_6 [5] [i_7] [i_7])));
        var_29 &= (((((~(arr_19 [i_7] [i_7] [i_7] [i_7])))) ? ((-(arr_2 [i_7]))) : ((((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) && (arr_8 [i_7] [8] [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_8] [i_7] [i_7] = ((arr_16 [i_9] [i_8]) ? -27284 : 8088370906229399364);
                    var_30 = (min(var_30, 19296));
                    arr_30 [i_7] [i_8] [i_8] [i_9] = (((((-(arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((arr_9 [i_7] [i_9]) ? (arr_6 [i_9] [i_8] [i_7]) : 1697699176623037609)) : (arr_3 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
