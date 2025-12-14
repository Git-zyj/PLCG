/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 -= ((!((min(1, (arr_0 [i_0 + 1]))))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_12 = (((arr_7 [i_0 + 1]) ? 14878545313246877378 : ((((~(arr_4 [i_0 + 1]))) << (((~1) + 49))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((((arr_5 [i_1 + 1] [i_3 + 1] [i_4]) | -383965754)));
                                var_14 ^= ((((((max(1, 1396310632)) + (arr_14 [i_2])))) ? (min((((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3]) ? (arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_1 + 2]) : (arr_13 [i_0] [12] [i_0] [12] [i_3]))), (arr_12 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2 + 3] [i_3] [i_3 - 2]))) : -1060298458));
                            }
                        }
                    }
                }
                var_15 ^= (min((((-1396310633 == ((-1396310654 / (arr_3 [i_0 + 1] [i_0 + 1] [i_1])))))), (~-88)));
                var_16 = ((((arr_8 [i_0] [i_0] [13]) * (((2323938431482997909 && (arr_4 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                var_17 -= (arr_19 [i_5]);

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] [12] [i_7] [i_8] &= (((~12) ? (~105) : ((((arr_12 [i_5] [15] [i_5] [i_5] [i_5 - 1] [i_5]) && (arr_20 [i_5] [i_6] [13]))))));
                        var_18 &= ((-(arr_6 [i_5])));
                        var_19 = ((arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1]) ? ((((!(arr_0 [i_7]))))) : ((17591270416673225918 ? 0 : -50)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_20 = (((arr_17 [6] [10]) >= (arr_21 [i_5 - 1] [i_5 - 1])));
                        var_21 |= ((!(arr_5 [i_6 + 2] [i_6 - 2] [i_6 - 2])));
                        arr_31 [i_9] [i_5] [i_7] [i_6] [i_5] [i_5] = (arr_5 [i_6 - 2] [i_6 + 1] [i_6 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_22 = 2323938431482997909;
                                arr_36 [i_5] = (((~36764) ? (((arr_15 [i_5 + 1]) ? 1060298458 : (arr_1 [i_5 - 1]))) : ((~(arr_8 [i_6 - 3] [i_6 + 2] [i_11 - 1])))));
                            }
                        }
                    }
                    var_23 = ((-((((((1060298458 && (arr_24 [i_5] [i_5] [i_7])))) >= (arr_12 [i_5] [i_5] [i_6 + 3] [i_6] [1] [i_7]))))));
                }
            }
        }
    }
    #pragma endscop
}
