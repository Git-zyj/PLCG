/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_14 || var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) && (arr_2 [i_0] [i_1])));

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_16 *= max((!var_13), ((!(arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [18] [i_1] [i_1] [1] [i_1] [i_0] [i_1] &= 2230756159;
                                var_17 = ((+(((((arr_3 [i_0] [i_1] [i_3]) ? (arr_15 [i_3] [8]) : (-32767 - 1)))))));
                            }
                        }
                    }
                    arr_19 [1] [i_1] [i_2] = (max((arr_15 [i_0] [i_2 - 2]), (-32767 - 1)));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_22 [i_0] = var_4;
                    var_18 = arr_1 [i_0];

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [2] [i_1] = (((((arr_2 [i_5 + 1] [i_5 + 1]) ? (arr_2 [i_5 + 1] [i_5 + 1]) : var_2)) | (((arr_2 [i_5 + 1] [i_5 + 1]) ? (arr_20 [i_1] [i_5 + 1]) : (arr_20 [i_0] [i_5 + 1])))));
                        arr_26 [i_0] [i_1] [i_5] [15] [i_0] [15] = (arr_12 [i_5 + 1] [i_1] [i_5] [i_1] [i_6] [i_0]);
                        var_19 = (((arr_11 [i_5 + 1] [i_5] [i_5]) ? (((arr_11 [i_5 + 1] [i_5] [i_5]) ? (arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [24]) : var_5)) : (((arr_24 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5]) / (arr_11 [i_5 + 1] [1] [1])))));
                    }
                    var_20 = var_5;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = (((max((168 | 6074969161163353234), (arr_3 [i_7] [i_7] [i_7])))) ? (((~(1 & 26084)))) : (arr_16 [i_7] [18] [i_7] [1] [i_7]));
        var_21 = (min(var_13, (arr_24 [i_7] [i_7] [i_7] [23] [i_7] [12])));
        var_22 = (min(var_22, (arr_27 [i_7])));
    }
    var_23 = ((((((var_3 / 7169119075187772707) ? ((max(var_14, var_5))) : var_3))) ? var_14 : var_10));
    var_24 = var_1;
    #pragma endscop
}
