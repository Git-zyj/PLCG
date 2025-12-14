/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(((-(min(var_14, var_2)))), ((min((var_11 * -1), ((var_11 ? var_7 : var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_4] [i_3] [i_2] [i_2] [5] [i_1] = arr_4 [i_1] [i_1] [i_4];
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = (min((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_1] [i_1] [i_2] [i_3]) : (arr_6 [i_0] [i_1] [i_2] [i_3]))), (((((min((arr_10 [i_0] [6] [6] [0]), (arr_5 [i_2] [i_3] [i_3])))) || (((~(arr_11 [12] [i_1] [i_2] [i_1] [i_2] [i_4])))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_5] [i_1] = (((((min((arr_1 [16] [i_1]), (min((arr_17 [i_0] [i_1] [i_2] [i_5]), 9223372036854775807)))) + 9223372036854775807)) << (((((((arr_9 [i_0] [7] [i_1] [i_2] [i_5]) / 32512)) + 37383)) - 63))));
                        var_17 = 1;
                        var_18 = (((((min(11038107163087953579, 255)) - (arr_11 [i_0] [i_0] [i_1] [i_2] [9] [i_1]))) + ((min(32640, (arr_17 [i_5] [3] [i_1] [i_0]))))));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [4] &= ((((((4294967295 & 12753117203604858377) ? (max(2147479552, -12301)) : 1))) ? (min(((1 ? (arr_9 [i_0] [11] [10] [i_0] [i_0]) : 0)), (arr_5 [i_2] [20] [i_0]))) : (((0 > (arr_17 [i_0] [i_1] [i_0] [i_6]))))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_19 = (((-12301 || 4398046494720) << (min((max(4398046494707, 25)), (20 || 2181321056)))));
                            var_20 &= (min((((arr_23 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 3]) | (arr_23 [i_6 + 3] [i_6 - 1] [i_6 - 2] [i_7]))), ((((arr_23 [i_6 - 2] [i_6 + 2] [i_6 + 3] [i_7]) && (arr_23 [i_6 - 2] [i_6 - 1] [i_6 - 3] [i_6 - 3]))))));
                        }
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((((!(((1 % (arr_5 [i_0] [i_0] [i_0])))))) ? ((((arr_9 [i_6] [i_2] [3] [3] [i_0]) || (((arr_21 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0]) > (arr_5 [6] [1] [i_2])))))) : ((~(0 ^ -12301)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
