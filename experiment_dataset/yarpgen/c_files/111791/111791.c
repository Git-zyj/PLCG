/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((~var_0), (arr_3 [i_0] [i_1] [11])));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    var_11 = (max((((~var_3) ? ((var_7 ? 0 : var_5)) : var_8)), (arr_6 [i_2 + 1] [i_1] [i_1] [8])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_4] [8] [i_3] [i_3] [7] = ((((((-2860690149169318197 * (arr_3 [i_4] [i_4] [i_4]))) > ((2860690149169318197 + (arr_19 [i_3] [i_4] [i_4] [i_4] [i_5] [i_6] [i_5]))))) ? (((((var_0 | (arr_5 [i_4] [i_4] [i_5 - 1] [i_6])))) ? (max(2147483647, var_4)) : ((10358058410185655979 ? (arr_12 [i_4]) : 17428)))) : (((!((max(var_5, 17910))))))));
                                var_12 ^= 871;
                            }
                        }
                    }
                    var_13 = (min(var_13, (arr_11 [6] [i_4])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_14 += (var_3 || 7490303693300128781);
                                var_15 &= ((min((arr_24 [i_4] [i_4 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1]), 0)));
                                var_16 = ((((min(-var_8, (arr_16 [i_4] [i_5 - 1] [i_8] [i_8] [10] [i_9 + 1])))) ? -60 : (arr_14 [i_3] [i_3])));
                                var_17 = ((-((64665 ? (arr_6 [i_9] [i_8] [i_5] [0]) : (arr_13 [i_3] [3] [i_8])))));
                            }
                        }
                    }
                    var_18 += (arr_10 [i_3] [0]);
                    arr_28 [i_3] [i_4] [5] = (min(64665, ((var_8 ? (arr_20 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : (arr_20 [6] [i_5 + 1] [i_5 - 1] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
