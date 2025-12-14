/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 ? (((((var_3 ? var_3 : 254))) ? var_7 : var_17)) : (min(var_3, var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [7] [5] [i_0] = (min((arr_4 [i_1] [i_1] [11]), (arr_1 [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_1] [i_0] [15] [i_0] = var_5;
                    var_19 = (((((arr_2 [i_0]) || var_4)) ? 12 : (((((arr_2 [i_0]) > (arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = 293266874;
                                var_21 = ((!((min(3269349224421696657, 2304393348484791843)))));
                                var_22 ^= (arr_3 [10]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_23 = (((((!(arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0])))) != (arr_3 [8])));
                    var_24 = (max((max(22, (arr_4 [i_0 + 1] [i_5 - 1] [i_5 + 1]))), (((arr_10 [i_0 - 2] [i_0 - 2] [11] [i_0 - 2]) ? (arr_11 [i_0] [i_1] [i_0]) : -662565421))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_25 += ((-96 ? ((93 ? 13 : var_16)) : (12288 && 34)));
                    arr_19 [6] [15] [i_0] = ((-(arr_17 [i_0 - 1] [0] [8] [i_0 - 1])));
                    arr_20 [i_0] [i_1] [i_6] = ((-(((arr_12 [i_0 + 2] [i_0] [i_0 + 2] [i_6] [i_6] [i_6 + 1]) ? (arr_7 [1] [i_6] [3] [i_0]) : (arr_9 [i_0] [1] [i_6 + 1])))));
                }
                arr_21 [i_0] [i_0] = var_8;
            }
        }
    }
    var_26 = ((6 && ((max((!12701125248411299891), var_15)))));
    var_27 = var_11;
    #pragma endscop
}
