/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = var_13;
                    var_20 = (((((~(arr_4 [i_1])))) ? (arr_5 [i_0] [i_1] [7]) : (arr_2 [i_0])));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_21 *= 1;
                        var_22 &= (var_1 / var_15);
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [4] [i_4] [i_0] [i_2] = ((arr_12 [i_0] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1]) ? var_11 : (arr_12 [3] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]));
                        arr_15 [i_4] [i_4] [i_4] [i_0] = ((arr_5 [i_2] [i_2] [i_4 - 1]) - (arr_12 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4]));
                        arr_16 [i_0] [i_0] [i_1] [1] [i_4] = (((arr_7 [i_1] [i_4] [i_4 - 1] [i_4]) > (arr_7 [i_0] [i_4 + 1] [i_2] [i_1])));
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_23 |= (min(1595059182, (arr_0 [i_5])));
                            var_24 = (((((((-(arr_7 [i_6] [i_5] [4] [11]))) - (arr_11 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1])))) ? (arr_3 [i_6] [i_5 - 1]) : ((+(((arr_0 [i_0]) ? var_15 : var_16))))));
                            var_25 = (((((arr_6 [i_5 + 1] [i_5 + 2] [i_6] [i_6]) & 1)) == 20));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_26 = (arr_25 [i_7] [i_9]);
                    var_27 = (max(var_27, (((!(arr_28 [i_7] [i_8]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                {
                    arr_41 [i_10] = (((min((arr_35 [i_10] [i_12 + 1] [i_10]), (arr_35 [i_12 - 1] [i_12 + 1] [0])))) + (arr_35 [i_11] [i_12 + 1] [i_12]));
                    arr_42 [i_10] [i_11] [3] = (arr_37 [17] [4] [8]);
                    var_28 = max((arr_34 [i_12 - 1] [i_12 + 1]), (((arr_36 [i_12] [i_11] [i_12]) / (arr_28 [i_12] [i_11]))));
                }
            }
        }
    }
    var_29 = var_17;
    #pragma endscop
}
