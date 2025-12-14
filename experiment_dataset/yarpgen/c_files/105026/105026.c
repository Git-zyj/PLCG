/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (min((min(var_8, var_1)), (arr_10 [i_4] [i_3] [i_4] [3] [i_0])));
                                var_12 = (max((((arr_0 [i_0]) | var_6)), (!var_6)));
                                arr_12 [i_0] [i_3] |= ((var_4 & ((~(arr_11 [i_4] [i_2] [i_2] [16] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_13 = (((1903842270 & var_9) ? ((+(min((arr_7 [i_2] [i_0]), var_4)))) : (((((arr_4 [i_1] [i_1] [i_1] [i_0]) / (arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]))) / var_9))));

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_14 = (max(var_14, ((max(((((arr_5 [i_0] [i_1] [i_2] [16]) && var_1))), (min((arr_8 [i_0] [i_5]), (arr_8 [i_0] [i_1]))))))));
                            var_15 = (max(var_15, ((min(var_5, ((var_7 - (arr_7 [i_6] [i_2]))))))));
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [8] [i_5] [i_5 + 2] [2] = (min(((min((arr_17 [1] [i_7 + 1] [i_5 - 1] [i_0]), (arr_17 [i_0] [i_7 + 1] [i_5 + 1] [i_5])))), ((~(-2147483647 - 1)))));
                            var_16 = (((((var_8 + 2147483647) << (((((arr_5 [i_0] [i_0] [i_5 - 1] [i_7 + 1]) + 7291654695598816103)) - 20)))) <= (arr_11 [i_0] [i_1] [i_5 + 2] [i_7 + 1] [i_7 + 1] [i_7])));
                            arr_23 [i_0] [i_0] [i_0] [11] [i_0] = -1903842271;
                        }
                        var_17 = (((var_3 * 1162668990) >= ((min(9884, (((arr_10 [8] [i_1] [i_2] [i_2] [i_5]) + var_9)))))));
                    }
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        var_18 = var_6;
                        arr_29 [i_0] [i_1] [i_8] [i_9] = (((arr_13 [i_9 - 2] [i_9 - 1] [i_9 - 2] [i_8]) <= ((-(arr_13 [i_9] [i_9 - 2] [i_9 - 2] [i_8])))));
                        arr_30 [i_8] [i_8] [i_8] [i_9] = ((((arr_14 [i_9] [i_1] [1] [i_9 - 2]) ? var_2 : var_1)) / (((min((arr_14 [i_0] [i_0] [1] [i_9 - 1]), (arr_14 [i_0] [i_1] [i_0] [i_9 + 1]))))));
                    }
                    arr_31 [i_8] = (min((min((((var_7 ? 2306 : (arr_13 [1] [11] [4] [4])))), ((var_2 ? (arr_5 [2] [i_1] [17] [i_1]) : var_9)))), ((((min(var_8, var_1)) & (arr_19 [1] [i_0] [i_1] [i_1] [i_0] [i_0]))))));
                }
                var_19 = (min(var_19, ((min((max(-var_7, (arr_2 [i_1] [3] [i_0]))), ((((arr_20 [5] [i_0] [i_0] [5] [i_1] [i_1]) == (arr_15 [i_0] [i_1] [i_1] [i_0])))))))));
                var_20 = (min((min((arr_1 [i_0] [i_0]), (1903842270 - var_8))), (((max(-1903842271, (arr_26 [i_0] [12] [12])))))));
            }
        }
    }
    var_21 = (min(var_21, var_0));
    var_22 = (max(var_22, (var_1 & 1162668995)));
    #pragma endscop
}
