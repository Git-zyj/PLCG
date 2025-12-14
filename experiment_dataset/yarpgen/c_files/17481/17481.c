/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(!-var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (min(1880288178, (arr_2 [i_0])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((arr_7 [i_0] [i_1] [i_2 - 1]) - (((arr_3 [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_2 [i_0]))));
                    arr_10 [i_0] [i_1] [8] = arr_6 [i_0];
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_16 = (max((arr_2 [i_0]), (max(((-1764135469 ? 565646233 : (arr_11 [i_0]))), (((arr_12 [5] [i_1] [i_1] [i_0]) - 86671453))))));
                    arr_15 [i_0] [i_0] [i_0] = ((((min(400857354, 3073313875))) ? 1880288166 : (max(1, -1764135474))));
                    var_17 = (max(var_17, ((max(((-(min(-984541014, (arr_12 [i_0] [i_1] [8] [i_1]))))), ((~(var_12 > var_2))))))));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_18 = ((!((((~(arr_4 [i_1]))) == ((min(-8977, -984541014)))))));
                    arr_18 [i_0] [i_1] [i_1] &= (arr_16 [i_0] [i_1] [9] [i_4]);
                    arr_19 [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_1] = (max((max((arr_22 [i_0] [i_5 + 2] [i_5] [i_5 + 2] [i_0] [i_5] [i_5 + 2]), (arr_11 [i_5 - 2]))), ((((arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_0]) > (arr_12 [i_5 + 1] [i_5] [i_5 + 1] [i_0]))))));
                                arr_26 [i_0] = (((arr_12 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_0]) <= (arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_19 = (arr_2 [i_0]);
                            var_20 = ((1570153277 * (min(332946458, 41))));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 11;i_9 += 1)
                            {
                                arr_33 [9] [9] [9] [i_0] [i_7] [2] [i_9] = (-((350548059 ? 86 : var_8)));
                                arr_34 [i_0] [i_0] [i_8] [i_0] = (86 ? (arr_23 [i_7] [i_1] [i_0] [i_8] [i_8]) : var_1);
                                arr_35 [i_0] [i_1] [i_1] [i_0] [i_9] [3] [i_0] = (234 + ((0 ? 152 : (arr_30 [i_0] [i_0] [1] [1]))));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, var_2));
            }
        }
    }
    var_22 = var_5;
    var_23 = var_9;
    #pragma endscop
}
