/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((var_5 ? (var_5 + var_9) : (var_4 - var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_12 = 7693;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [5] [i_2 - 1] [i_3] [i_0] = (((arr_7 [i_0] [1] [i_2 + 3] [i_3] [1] [i_3 - 1]) ? (arr_6 [i_3 + 1] [i_1] [i_3 + 1] [i_2 - 1]) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_2 + 3] [i_3 + 1])));
                        var_13 *= ((var_8 ? (arr_9 [i_2 - 1] [i_3 - 1] [i_2 - 1] [1]) : (arr_5 [i_0] [i_1] [i_3 + 1] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_14 = (max(var_14, (((-7680 ? ((var_3 ? (arr_7 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_8 [i_2 + 3] [i_2] [i_1] [i_4]))))));
                        var_15 = var_0;
                        var_16 = var_1;
                        var_17 = (((((-(arr_13 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])))) ? ((min((arr_13 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 + 1])))) : ((min((arr_13 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 1]), var_2)))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_18 |= (arr_10 [i_2 + 1] [i_2 + 1]);
                            var_19 = (min(var_19, (((((arr_9 [13] [i_1] [13] [13]) ? var_7 : (arr_12 [i_0] [7] [i_2 + 2] [i_6 - 1])))))));
                        }
                        var_20 |= (arr_8 [12] [i_1] [i_0] [i_5]);
                        var_21 = (min(var_21, (((((max(var_1, var_1))) | (((arr_15 [1] [12] [1] [i_2]) ? ((var_3 ? 81 : (arr_16 [i_0] [i_0] [i_0] [i_5]))) : 1)))))));
                    }
                }
                var_22 += ((!((max(var_3, (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                var_23 = var_0;
                arr_19 [1] [i_1] = ((-(((arr_0 [i_1]) ? (arr_13 [i_0] [i_0] [i_0] [7]) : (arr_13 [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
