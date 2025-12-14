/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? 676861280664583992 : 19518));
        var_11 = (min(var_11, 1057937525150855835));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = 1;
                    var_13 = (arr_2 [i_0]);
                }
            }
        }
        var_14 = (arr_2 [i_0]);
        arr_13 [i_0] = (((arr_2 [i_0]) - (arr_12 [i_0] [12] [i_0] [i_0])));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_17 [i_3] = (((var_6 - ((min(30, (arr_5 [4] [i_3] [20])))))));
        arr_18 [i_3] [i_3] = var_7;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_15 = -1250619159;
                                var_16 = (var_7 ? (((~var_7) / 4896)) : ((min(((((arr_16 [10]) || (arr_22 [i_3] [i_4] [i_5] [i_7])))), var_2))));
                                var_17 = 2048;
                                var_18 = (2147483647 | (((((var_1 ? (arr_3 [11] [11]) : -886660375))) ? var_5 : var_3)));
                                var_19 = min(11846942947297092989, ((((!(arr_0 [i_4]))) ? (((1 ? 0 : 1))) : (((arr_10 [i_6] [i_5]) * 0)))));
                            }
                        }
                    }
                    arr_27 [i_3] [i_5] [i_5] [i_3] = (arr_25 [i_3] [i_3 + 1] [i_5] [9] [i_3 + 1]);
                    var_20 |= (((((~(arr_9 [i_3] [i_3])))) ? (6599801126412458626 / -5225814546971888793) : (arr_1 [i_3 + 1] [i_3 + 1])));
                }
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
