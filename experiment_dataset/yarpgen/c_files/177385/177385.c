/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-((((var_6 ? var_1 : var_8)))));
    var_19 = (var_9 / var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [7] = ((-(arr_5 [i_1 - 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [9] [i_2] [i_2] [1] [i_4] [i_2] = (((((var_2 ? 4626323167463681774 : -16))) || var_0));
                                arr_17 [2] [2] [2] [i_3] [2] [i_3] [i_3] = ((((arr_4 [i_1 + 1]) ? var_13 : (arr_11 [i_0]))));
                            }
                        }
                    }
                    var_20 = (((arr_1 [4] [i_1 - 1]) ? var_3 : (-12 ^ var_10)));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = (((arr_14 [i_2] [i_1 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_0]) ? (arr_6 [i_2] [i_1] [i_1 - 1] [i_1]) : ((var_12 ? (arr_1 [i_0] [i_1]) : var_17))));
                    arr_19 [i_2] [i_2] [i_0] [i_0] |= var_9;
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_21 |= ((max((arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]), var_11)) ? (((arr_9 [i_0] [i_1] [i_1] [i_5]) / (arr_20 [i_0] [i_0] [i_1 - 1]))) : ((max((-42 / -16), var_8))));
                    var_22 = (min(var_22, ((min((((-var_4 || (arr_20 [i_0] [i_0] [i_0])))), (max((arr_6 [i_1 - 1] [i_1] [i_1] [i_1]), var_2)))))));
                    arr_22 [i_5] [i_1] [1] [i_5] = (((arr_7 [i_1 + 1]) ? (!var_4) : (arr_3 [i_1 + 1])));
                    var_23 = (max((arr_5 [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 + 1])));
                }
                var_24 = ((((-(arr_14 [i_0] [i_1 + 1] [0] [i_1 + 1] [i_1 - 1] [i_1 - 1])))) ? 36 : (((arr_14 [8] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_16 : var_9)));

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_25 |= ((48 ? (min(((var_5 ? var_13 : (arr_13 [i_0] [i_0] [i_0] [i_0] [10] [i_0] [i_0]))), (36 * var_14))) : ((((var_9 / (arr_0 [i_0]))) / ((var_11 ? (arr_12 [i_0] [i_1 - 1] [i_0]) : -126))))));
                    var_26 = var_11;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_27 = (arr_21 [i_0] [i_0]);
                    arr_27 [i_1] = ((-(((arr_26 [i_0] [i_1] [i_7] [i_1]) ? var_16 : 15))));
                    var_28 = ((-35 >= (var_6 & var_8)));
                }
            }
        }
    }
    #pragma endscop
}
