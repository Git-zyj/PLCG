/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_17;
    var_20 -= var_6;
    var_21 = ((((var_5 > (5688 > var_12))) ? ((min(16978, ((min(var_12, 16978)))))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 = arr_11 [i_0] [1] [14] [9] [12] [i_4 + 2];
                                var_23 = ((-(((arr_11 [i_0] [11] [5] [i_3 - 3] [12] [20]) ? -227137696 : ((~(arr_2 [i_0 + 2] [13] [i_0])))))));
                                var_24 = ((~(arr_9 [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_0] [i_4 - 1])));
                                var_25 += var_7;
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_26 = var_16;
                    var_27 = (min(var_27, (((+(((arr_3 [i_0 + 2] [0] [17]) ? ((-(arr_13 [i_1] [16] [i_5 - 1]))) : (arr_5 [4] [9]))))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_17 [16] [i_0 - 1] [i_6] [6] &= ((((arr_2 [6] [i_1 - 1] [i_6]) > (arr_3 [5] [i_1 + 1] [14]))));

                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_28 = 74;
                        var_29 = (((arr_19 [13] [i_1 + 1] [14] [7]) ? (((!(arr_18 [i_0] [0])))) : (var_16 >= 4575657221408423936)));
                    }
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        var_30 = (min(var_30, var_16));
                        arr_23 [18] [i_8 - 3] [i_0] [i_0] [10] [4] = (i_0 % 2 == zero) ? ((((arr_16 [i_0]) >> (((~var_16) + 27))))) : ((((((arr_16 [i_0]) + 2147483647)) >> (((~var_16) + 27)))));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_31 = (min(var_31, (((5933242259956556998 ? (arr_26 [i_0 + 2] [12] [i_6 + 1] [i_1]) : (((-15164 ? var_6 : (arr_10 [17] [15] [i_6 + 1] [2])))))))));
                        arr_27 [17] [i_1 - 2] [i_0] [1] = -16978;
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_32 |= (((((arr_1 [i_0 + 1]) ? var_4 : (arr_3 [15] [20] [9]))) > ((var_17 ? var_17 : var_14))));
                        var_33 = ((~(arr_0 [1] [i_1 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
