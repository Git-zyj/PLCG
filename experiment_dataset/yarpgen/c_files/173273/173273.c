/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(var_9, 1125899906777088)), ((max(var_7, (min(var_18, var_16)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_21 = (217 & 1);
                            arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4] [i_4] = (arr_3 [1] [i_1] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_22 = (((~(arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3]))));
                            arr_20 [i_5] [1] [i_2] [i_1] [i_0] = arr_12 [i_0] [i_1] [7] [i_5];
                            var_23 = (arr_18 [3] [i_5] [i_2] [i_3] [9] [i_3]);
                        }
                        var_24 = (max((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3]) & (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-((min((arr_19 [i_2] [i_2] [i_1] [8] [i_0] [i_3] [8]), (arr_15 [i_0] [4] [i_0] [i_1] [i_0] [i_1]))))))));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_25 = (min(var_25, (arr_1 [i_6 - 1])));
                        arr_23 [i_0] [i_1] [i_2] = arr_22 [i_0] [i_1] [i_2] [i_6];
                        arr_24 [i_0] = (((((arr_6 [i_6 - 2] [4] [i_2 + 4]) + (arr_6 [i_6 + 2] [i_2 + 1] [i_2 + 1]))) & var_6));
                        var_26 = (((((!(arr_11 [i_0] [6] [i_1] [i_0] [i_0])))) & (arr_2 [9])));
                        var_27 = ((max((max((arr_18 [i_0] [5] [i_1] [i_2] [1] [5]), var_7)), ((((arr_5 [i_2] [i_2]) & (arr_14 [0] [i_1] [i_0] [0] [i_1])))))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_28 = (arr_13 [2] [i_1] [i_1] [i_1]);
                        arr_28 [i_0] [4] [i_0] [i_7] [2] = ((max(((((arr_4 [i_0] [1]) + (arr_2 [i_0])))), (max((arr_12 [i_7] [i_7] [i_7] [i_7]), (arr_11 [i_7] [i_0] [i_1] [i_0] [i_0]))))));
                        arr_29 [i_0] [i_1] [i_2] [i_2] [i_7] = (arr_4 [i_0] [i_7]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_29 &= (arr_8 [i_2] [i_1] [i_0]);
                        var_30 = (arr_6 [i_8] [i_1] [i_2]);

                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            arr_34 [i_9] = var_18;
                            var_31 = ((~(arr_4 [5] [3])));
                            arr_35 [i_9] [i_1] = (arr_30 [i_9]);
                        }
                        var_32 = (max(var_32, (arr_31 [1])));
                    }
                    arr_36 [i_0] [i_1] [i_2] = (arr_22 [i_0] [i_1] [i_2] [i_0]);
                    var_33 = max(((var_18 ? (max((arr_4 [0] [i_1]), (arr_1 [i_1]))) : ((((((arr_5 [5] [i_1]) + 2147483647)) << (((arr_25 [i_2 + 2] [1]) - 1))))))), (arr_17 [3] [i_2] [1] [i_1] [i_0]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    {
                        var_34 = (arr_6 [i_0] [i_0] [i_12 + 1]);
                        var_35 |= (((((max(-69, -69)))) & 3849400941));
                        arr_46 [i_0] [i_10] [i_10] [i_12] = (arr_22 [i_0] [i_10] [i_11] [i_12 - 1]);
                        arr_47 [i_0] [i_10] [i_11] [i_12] [3] = (((!1) & -1));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = (max((((~var_2) & (arr_44 [i_0] [i_10] [i_11] [i_12]))), ((max(((min((arr_38 [i_0] [1] [i_11]), (arr_38 [i_10] [i_11] [i_12])))), 0)))));
                    }
                }
            }
        }
        arr_49 [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        arr_52 [i_13] = (arr_50 [3] [i_13]);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    arr_57 [i_14] = (min(9117065582630798357, 1));
                    var_36 = (arr_54 [i_15]);
                }
            }
        }
    }
    var_37 = ((var_12 ? (~var_2) : 0));
    var_38 = (-97 & var_11);
    var_39 = (!-var_16);
    #pragma endscop
}
