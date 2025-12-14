/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (((((((arr_7 [12] [12] [i_2 - 2] [12] [i_2 - 2]) == (arr_2 [i_0] [i_1]))))) / (arr_3 [i_1])));
                                var_14 += (min(((((max(-1036916367, (arr_10 [i_3] [i_4] [i_4] [i_2] [i_0]))) << ((((1 ? 9223372036854775807 : var_11)) - 9223372036854775777))))), (min((min(var_4, (arr_4 [0] [6] [i_4]))), (arr_11 [i_0] [11] [1] [i_0] [11] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                var_15 = (min(var_15, (((((((min(var_4, (arr_3 [i_0]))) > (((arr_6 [i_0] [i_1] [0] [i_0]) ? var_4 : (arr_7 [i_0] [i_0] [i_0] [6] [4])))))) % (arr_3 [i_0]))))));
                arr_14 [i_1] = ((var_8 ? ((168 ? (((arr_5 [i_1]) / -22309)) : ((min(1, (arr_4 [i_0] [i_0] [i_0])))))) : var_5));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_16 = (((var_1 - (arr_11 [i_1] [i_1] [i_1] [i_6] [9] [i_1] [i_1]))));
                        var_17 = ((var_10 && (arr_18 [i_0] [i_1] [0] [i_1])));
                        var_18 = (arr_18 [i_0] [7] [i_5] [0]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 = var_9;
                                arr_23 [i_0] [1] [i_1] [i_0] [8] = (arr_16 [i_1] [i_1]);
                                var_20 = (((((var_6 / (arr_19 [i_0] [4] [i_0] [i_0])))) && ((var_5 > (arr_7 [i_0] [i_1] [i_5] [i_0] [i_8])))));
                                arr_24 [i_0] [10] [i_5 - 1] [i_7] [i_7] |= (((((arr_7 [i_0] [i_1] [11] [i_7] [i_8]) ? (arr_1 [i_5]) : (arr_15 [i_5] [i_5] [8] [i_7]))) == (((arr_15 [i_0] [i_1] [i_5 - 1] [i_8 - 2]) ? (arr_20 [10] [i_1] [i_5] [1] [i_8]) : (arr_12 [6] [i_7] [i_7] [i_7] [2] [i_1] [i_0])))));
                                var_21 |= ((var_11 ? (arr_3 [i_7]) : (arr_6 [i_8 - 2] [i_7] [i_1] [i_1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_22 = (var_6 & (((var_10 ? (arr_3 [i_1]) : (arr_27 [i_1])))));
                    var_23 = (max(var_23, var_8));
                }
                var_24 = ((((((min(var_11, var_11))))) != (((max((arr_0 [i_0]), (arr_16 [8] [i_1]))) ^ ((((arr_25 [i_0] [i_1] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
