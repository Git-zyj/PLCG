/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_0] = (((2084616484 | 4818) ? (((((~(arr_1 [i_2 + 1])))) ? (((arr_2 [i_0] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_3]) : var_3)) : ((~(arr_7 [i_2 + 1] [8] [8] [i_2 - 1] [i_2]))))) : (((arr_9 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2]) & (arr_9 [i_2] [8] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2])))));
                        arr_12 [i_2] [i_2] = ((((max((arr_5 [i_0] [7] [i_2 - 1]), (arr_5 [i_0] [i_2 + 2] [i_3])))) && ((((arr_5 [i_0] [i_1] [5]) ? (arr_5 [i_0] [i_1] [i_2 + 2]) : (arr_5 [i_2] [i_1] [i_1]))))));
                        var_19 = (arr_9 [i_0] [9] [i_1] [5] [i_2] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_20 = (arr_2 [i_2] [i_0]);
                        var_21 = (max(((((~-2084616505) >= (arr_13 [i_2 + 2])))), ((~(arr_1 [2])))));

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_22 += ((((((arr_1 [8]) >> (((((-2147483647 - 1) - -2147483646)) + 9)))) / (arr_3 [i_0] [7] [7]))));
                            var_23 ^= ((((arr_10 [i_0] [i_1] [i_2] [i_4]) << (((arr_14 [i_0] [9] [i_4] [1]) - 1529959538)))));
                            var_24 = (arr_15 [i_0] [i_1] [i_1] [i_0] [i_1]);
                        }
                        arr_18 [i_2] [i_2 + 1] [i_2] [9] [i_2] = (((((~(arr_5 [i_2 + 2] [i_4] [i_4])))) ? (((arr_5 [i_2 + 2] [4] [i_2 + 2]) ? (arr_5 [i_2 + 1] [7] [i_2]) : (arr_5 [i_2 + 2] [1] [i_4]))) : -var_8));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 += ((var_8 ? var_6 : (((var_0 ? var_16 : (arr_16 [i_0] [i_2] [i_1] [i_0]))))));
                        arr_21 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = (arr_13 [10]);
                        var_26 += ((4818 ? 0 : 255));
                        arr_22 [i_2] = (!var_11);
                        arr_23 [i_2] = var_15;
                    }
                    arr_24 [i_2] = (arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 1]);
                    arr_25 [i_2] [i_0] [i_2] = ((var_7 == (((arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2]) & (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_32 [i_8] = ((-1617009105 * (((!(arr_30 [i_7] [i_8] [i_9]))))));
                    arr_33 [i_9] [1] [i_7] = (arr_28 [i_9] [i_8] [i_9]);
                }
            }
        }
    }
    #pragma endscop
}
