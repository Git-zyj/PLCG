/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((!((!(arr_4 [i_1 + 2] [i_0 + 1] [i_2 - 1] [i_2])))));
                    var_12 &= ((-var_5 * (((((27830 ? var_6 : 8380416)) ^ (arr_5 [i_1 - 2] [i_2 + 2] [i_2 - 2]))))));
                    arr_6 [i_0] = (((arr_0 [i_0 + 2] [i_1]) || var_9));
                    arr_7 [i_0 - 2] [i_1 + 2] [20] [i_0] = (arr_5 [i_1 + 1] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            {
                var_13 += var_5;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_14 = ((+(((arr_10 [i_5] [3]) ? 1632006946318915157 : (arr_4 [18] [i_4] [i_4 + 1] [i_4 - 3])))));

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_15 = var_0;
                        var_16 = (arr_4 [9] [i_5] [i_6 - 1] [i_6]);
                        var_17 = (((arr_13 [i_4 + 2]) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 - 4])));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_18 -= (((arr_19 [8] [i_4]) ? (arr_17 [i_5] [i_4] [i_4]) : (arr_21 [i_3] [i_4 - 1] [2] [i_4 - 1] [i_4])));
                            arr_23 [i_3] [1] [i_4 - 3] [7] [9] [i_7] [i_8] = (arr_0 [i_4 - 1] [13]);
                            arr_24 [i_3] [6] [2] [i_5] [2] [i_8] = (((arr_17 [i_5] [i_4 - 3] [i_4 - 4]) || (arr_12 [5] [i_7] [1])));
                            var_19 = (!var_3);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_20 = (((arr_18 [i_3] [i_4 - 1] [7] [i_9]) >> (((arr_0 [i_4] [i_4 - 2]) + 8951059996703198195))));
                            arr_28 [i_4 - 3] [10] [7] [i_9] &= (((arr_25 [i_7] [5] [i_4 + 1] [i_3]) <= (arr_1 [i_4 + 1] [i_3])));
                            var_21 = var_3;
                        }
                        var_22 |= var_7;
                        var_23 = (max(var_23, (arr_26 [i_7] [i_7] [i_4 - 3] [1] [i_7] [8])));
                        var_24 = (~(arr_10 [i_4 - 1] [i_4 + 2]));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        arr_32 [11] = ((var_8 ? (arr_1 [i_4 + 2] [15]) : (arr_1 [i_4 - 1] [i_4 - 1])));
                        arr_33 [i_3] [i_4] [i_4 + 2] [i_4 + 2] [0] [i_10] = ((~(arr_0 [i_3] [i_5])));
                        var_25 = ((255 | (arr_15 [i_4 - 1] [i_4] [9] [i_4])));
                    }
                    arr_34 [i_3] [3] [6] [i_5] = (arr_26 [i_4] [2] [i_4 - 3] [i_4] [i_4 + 1] [i_4]);
                    arr_35 [i_5] [9] [i_3] = ((!(arr_25 [i_3] [i_4 + 1] [i_5] [i_4])));
                }
            }
        }
    }
    var_26 += (var_9 * var_4);
    var_27 = var_2;
    #pragma endscop
}
