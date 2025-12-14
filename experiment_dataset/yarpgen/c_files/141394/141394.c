/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((!var_4), (var_19 / var_19)))) ? var_0 : ((((var_14 > var_16) == var_12)))));
    var_21 = (max(var_21, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((-429334624 * 4294967295) > (((~(arr_11 [i_1] [i_1] [i_2 - 1]))))));
                        var_22 ^= (min((min(((((arr_7 [i_1] [i_1] [6] [i_3 + 1]) > (arr_8 [i_0] [i_1 + 1])))), (arr_7 [i_2 - 2] [i_2] [i_3 - 1] [i_3]))), (((~(arr_3 [i_1 - 2]))))));
                        var_23 = ((var_12 ? var_2 : ((var_16 ? (((108 ? var_10 : (arr_1 [i_0])))) : (((arr_0 [i_1] [i_0]) ? var_7 : var_3))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_24 |= (arr_5 [i_1 - 1]);
                            var_25 ^= var_1;
                        }
                        arr_19 [i_0] [i_0] [17] [11] = (arr_5 [i_0]);
                        arr_20 [i_0] [i_1] [22] = ((arr_11 [i_1 - 3] [i_2 + 2] [i_2]) - (arr_8 [i_1 - 1] [i_2 + 2]));
                    }
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_26 ^= (arr_15 [i_0] [i_1] [i_0] [i_6 - 1] [i_6 + 1] [i_1]);
                        var_27 = (max(var_27, ((((((arr_0 [3] [i_1 - 3]) > ((var_19 ? (arr_7 [i_0] [18] [i_2] [i_6]) : (arr_16 [i_6] [i_1] [i_2] [i_1]))))) ? ((~(arr_11 [i_2 + 4] [i_1] [i_2 - 2]))) : (arr_6 [i_0]))))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_25 [18] [i_6] [i_7] [i_1] [i_0] = max(var_18, (((!(~var_14)))));
                            var_28 |= arr_15 [19] [17] [i_2] [i_6] [17] [i_7];
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_29 [21] [i_1] [i_2] [i_6] [24] [i_8] = 247;
                            var_29 = 1540624804;
                            var_30 = ((!((((-429334627 + 2147483647) << ((((((-4 - (arr_24 [i_2] [i_6]))) + 23)) - 18)))))));
                        }
                        arr_30 [i_0] [i_0] = ((4294967279 ? (((arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 - 1]) << (((((arr_26 [9] [9] [i_1] [i_1] [i_2 - 1] [i_2] [i_6]) ? var_3 : (arr_21 [i_0] [i_1 + 1] [i_2 + 2] [i_6 - 2] [1] [i_6]))) + 2728793656276256398)))) : var_12));
                    }
                    var_31 = var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((arr_5 [i_2 + 3]) / (arr_9 [i_2] [i_0])))))) & (arr_32 [i_1] [i_2 + 2] [i_9] [i_10])));
                                arr_38 [i_0] [i_0] [9] [16] [i_10 - 1] [i_9] [i_1 - 1] |= (max((max(var_16, (arr_32 [i_0] [i_0] [i_0] [i_0]))), (((arr_13 [i_2 + 3] [i_2] [24] [i_2] [i_2 + 2] [i_2 - 2]) ? (arr_13 [i_2 + 4] [i_2] [8] [i_2] [i_2 + 3] [8]) : (arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 4] [i_2])))));
                                arr_39 [14] [1] [1] [i_9] [i_10] = (arr_2 [i_1 - 2]);
                                var_32 = (max(var_32, (((-(((((((arr_4 [i_0] [i_0]) ? (arr_28 [i_0]) : var_10))) || var_0))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
