/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) < 1854859896));
        var_12 = ((+(min(((48147 ? (arr_1 [i_0]) : var_9)), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (max((min(((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_10))), (max(98, (arr_0 [i_0] [13]))))), ((((((~(arr_1 [i_0])))) ? 1 : (min(var_7, var_9)))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((~((((arr_1 [i_0]) > var_2)))));
                        var_13 = (max(var_10, ((var_3 ? (arr_11 [i_0] [i_1] [i_0] [9]) : (arr_11 [i_0] [i_1] [i_2] [i_3])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_6] = (((arr_8 [i_4 - 2] [i_0]) != (arr_8 [i_4 - 2] [i_0])));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_24 [1] [i_0] [i_0] [i_0] = (~-588911373);
                            var_14 = (-2147483647 - 1);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_15 *= (arr_4 [i_0]);
                            arr_27 [1] [i_0] [13] [1] [i_6] [i_0] [i_6] = ((arr_9 [i_8] [13] [3]) - (10596049442300843364 / 1890078156986046109));
                            var_16 = (min((arr_14 [i_0] [i_0]), ((max(var_10, (arr_25 [i_4] [i_4] [i_4 - 2] [4] [i_4] [0]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_5] [i_0] [i_9] = var_5;
                            arr_31 [i_0] [i_0] [4] [i_0] [i_0] [i_0] = var_2;
                            var_17 += (arr_22 [i_9]);
                        }
                        var_18 &= (((((~(((arr_11 [i_0] [i_4 - 1] [i_4 - 1] [10]) ? (arr_12 [i_0] [i_4] [i_5] [i_0]) : (arr_16 [i_0])))))) ? (((arr_11 [i_6] [i_6 - 3] [5] [i_6 - 1]) ? (arr_5 [i_4 - 1]) : (arr_22 [i_0]))) : (((((min(var_2, (arr_4 [i_0])))) ? ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_6]) >= 63))) : (var_10 > var_5))))));
                        arr_32 [i_0] [i_4] [10] = ((1172561061 ? 0 : 44221));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_36 [i_10] = arr_35 [i_10];
        var_19 = (min(var_19, (((var_2 < (((arr_33 [i_10] [i_10]) - 1172561061)))))));
    }
    var_20 += var_5;
    var_21 = (min(var_7, var_6));
    #pragma endscop
}
