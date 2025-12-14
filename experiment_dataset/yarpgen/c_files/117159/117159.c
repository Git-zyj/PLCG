/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_0] = (arr_6 [i_2] [8] [8] [i_2]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_12 ^= (((((arr_0 [i_2]) >> ((((~(arr_4 [i_0 - 1] [i_0]))) + 46)))) - ((min(((((arr_4 [i_1] [i_3]) * var_2))), var_3)))));
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (-(((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_8 [i_2 + 2] [i_1] [i_0 + 2]))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_13 = (max(var_13, ((((arr_12 [i_2 + 2] [i_4 - 1] [16] [i_4 - 1] [13] [14]) * var_2)))));
                            var_14 = (min(var_14, var_1));
                            var_15 = (min(var_15, (arr_3 [i_1] [i_3] [i_4 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_16 = (var_9 * ((((arr_16 [4] [i_2]) <= (arr_9 [i_2])))));
                        var_17 = (min(var_17, -var_3));
                        var_18 = (((arr_14 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) >> (((arr_0 [i_1]) - 201))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 ^= (min(((((arr_9 [i_0 + 1]) || -1532708953))), 1643339949));
                        arr_20 [i_2] [1] [1] = (arr_6 [i_2] [12] [i_1] [i_2]);
                        var_20 = (((min(var_9, (arr_4 [8] [13])))));
                    }
                    var_21 = ((((min(var_0, 4294967295))) || (arr_1 [i_2])));
                    arr_21 [i_2] [i_1] [i_1] = var_0;
                    var_22 = ((((((2651627341 || (arr_8 [1] [i_1] [1]))) ? ((max(255, (arr_1 [1])))) : (max((arr_19 [9] [i_1] [9] [i_1] [i_0]), var_8))))) ? (max(((-1 ? (arr_12 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]) : var_2)), (!-1567795433626480165))) : ((max((arr_16 [i_0 + 2] [i_2]), (!var_5)))));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {

                            for (int i_9 = 2; i_9 < 16;i_9 += 1)
                            {
                                arr_31 [i_9 + 1] [16] [i_0] [i_1] [i_0] = arr_1 [i_8];
                                arr_32 [i_9] [i_8] [i_0] [i_0] [i_0] = (~(max(((-(arr_27 [i_0] [i_1]))), 138)));
                                arr_33 [i_9] [i_8] [i_7] [i_7] [i_1] [i_0] = var_2;
                                var_23 = ((((min(((1666810499 ? (arr_12 [i_0] [i_0] [i_1] [16] [i_0] [i_9]) : 1643339949)), ((((arr_0 [11]) / var_5)))))) ? (min((((arr_17 [i_8] [6] [0] [6]) * (arr_19 [9] [i_1] [i_1] [i_1] [10]))), 1603523073)) : (min((arr_8 [i_0 - 1] [i_9 - 2] [i_7 - 1]), var_4))));
                            }
                            var_24 = (max((((((1666810499 ? 2651627347 : var_3))) ? (((var_6 >> (67 - 67)))) : ((1 ? (arr_0 [i_0]) : var_3)))), (arr_19 [i_0 + 2] [i_0 + 2] [i_7] [i_7 - 1] [i_7 - 1])));
                            arr_34 [i_8] [i_1] [i_1] = 1;
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-(min((~var_9), (1 + 56)))));
    #pragma endscop
}
