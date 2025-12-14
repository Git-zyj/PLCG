/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 - 2]);
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_17 |= (((arr_12 [i_2 - 2] [i_2] [i_2 + 2] [i_2] [i_2]) < (((!(arr_11 [i_4] [22] [i_2 - 1]))))));
                        arr_14 [i_3] = ((!(arr_6 [i_2 + 3])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_18 -= ((var_10 ? (((+(((arr_8 [i_1] [i_1]) ? 92 : 89))))) : (arr_6 [i_1])));
                        var_19 = (((arr_19 [i_7] [i_6] [i_6 + 2] [i_6] [i_5] [22]) - (((~(arr_9 [i_6]))))));
                        var_20 = ((((63 ? 8191 : 14829411365896541229)) >= var_16));
                    }
                }
            }
        }
        var_21 &= 14829411365896541229;
        arr_21 [i_1] = var_6;
        var_22 = (arr_13 [i_1] [10] [i_1] [2]);
    }
    for (int i_8 = 4; i_8 < 24;i_8 += 1)
    {
        arr_26 [i_8] |= ((!(arr_22 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    var_23 = (arr_24 [i_10]);
                    var_24 *= (((((var_9 <= (arr_22 [i_8 - 3])))) ^ (((arr_22 [i_8 - 2]) + (arr_22 [i_8 - 3])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_25 = ((var_15 != (arr_23 [i_8 - 4])));
                                arr_36 [i_8] [i_9] [i_8] [i_10] [i_9] [i_11] [19] = arr_35 [i_10];
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_39 [i_10] [i_9] [i_9] = arr_33 [i_10] [i_9];
                        arr_40 [i_10 + 1] [i_10] [i_10] [i_13] = (arr_37 [i_8] [i_10] [i_10 + 1] [i_13]);
                    }
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        arr_45 [i_10] [i_9] [i_10] [i_14] = (min((arr_32 [i_10] [i_14]), var_7));

                        for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                        {
                            var_26 = (arr_41 [16] [i_9 + 1] [i_10] [1]);
                            var_27 = (!(arr_42 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8]));
                            var_28 -= var_14;
                            arr_50 [i_15] [i_14] [i_10] [9] [i_8] = -var_16;
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                        {
                            arr_53 [i_8] [i_8] [i_10] [i_16] [1] [i_8] [i_10] = ((!(((~(arr_27 [i_9] [i_10] [i_14]))))));
                            var_29 = (min(var_29, (arr_32 [i_8] [16])));
                            arr_54 [i_10] [i_10 + 1] [i_10] [i_10] = (arr_48 [i_8] [i_9] [i_10 + 1] [i_9] [i_10]);
                        }
                    }
                }
            }
        }
        var_30 = (arr_35 [i_8]);
    }
    var_31 = var_10;
    var_32 = (min(((min(var_11, var_8)), (min(var_9, var_14)))));
    #pragma endscop
}
