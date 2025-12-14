/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_19 = ((((max(255, (arr_1 [i_0])))) ? (max(((-(arr_0 [i_0] [i_0]))), (((arr_0 [i_0 - 2] [9]) / (arr_0 [i_0] [i_0]))))) : (arr_1 [5])));
        arr_4 [i_0] = ((var_5 ? (arr_2 [i_0] [i_0]) : ((((((arr_2 [i_0] [7]) ? -1 : (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (max((max((((arr_6 [i_1 + 2]) ? (arr_5 [11] [i_1]) : 254)), ((44 ? var_2 : (arr_6 [12]))))), var_2));
        arr_8 [i_1] [i_1] = (~21791);
        var_20 = (min(var_20, (((((max((arr_1 [i_1 + 1]), var_2))) ? (arr_5 [i_1 + 2] [10]) : (((!(arr_0 [i_1] [i_1])))))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_21 = (arr_10 [i_2]);
        var_22 = (arr_10 [i_2]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_7] = max(((2424113649510667926 ? (((!(arr_22 [i_7])))) : (((arr_14 [i_4 - 1]) ? (arr_15 [i_5]) : var_12)))), ((max(100, var_10))));
                                arr_25 [i_3] [1] &= arr_9 [i_7 - 2] [i_5];
                            }
                        }
                    }
                    var_23 = (arr_17 [i_3] [i_3] [i_3]);
                    var_24 = (max(var_3, ((~((max((arr_23 [i_5] [14] [i_5] [i_3] [i_3] [i_3]), var_11)))))));
                    var_25 = (arr_23 [i_4 + 1] [i_3] [i_5] [i_3] [i_5] [i_3]);
                }
            }
        }
        arr_26 [i_3] = (arr_9 [i_3] [i_3]);
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                var_26 = (!var_3);
                var_27 = (arr_31 [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
