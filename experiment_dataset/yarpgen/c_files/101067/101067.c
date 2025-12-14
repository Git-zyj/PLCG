/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((!((((arr_2 [i_0]) ? var_14 : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
        var_16 = (!5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            var_17 = 1937499487482493741;
                            arr_16 [i_1] [i_3] [i_2 + 1] [i_1] [i_0 - 1] [i_1] = (max(((var_6 & (arr_4 [i_0 - 2] [i_2 - 2]))), (max((~var_6), ((var_0 & (arr_11 [i_0 - 1] [16] [i_1])))))));
                        }
                        var_18 = (max(var_18, var_9));

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_1] = var_10;
                            var_19 = var_12;
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_20 -= (min(((-4668 | (((!(arr_8 [i_0] [i_0] [i_0] [i_0])))))), (arr_4 [i_0 - 1] [i_2])));
                            arr_23 [i_1] = ((~(min((var_9 / var_3), var_2))));
                            var_21 = (arr_0 [i_3]);
                            arr_24 [i_0] [i_1] [i_1] [i_0] [16] = (min((((-((max(var_4, (arr_10 [i_0] [i_1]))))))), var_10));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_0] [i_2] = var_5;

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_29 [i_1] [i_1] = (!16509244586227057859);
                        var_22 = (arr_18 [i_0 - 2] [i_0 + 1] [20] [19]);
                    }
                    var_23 = var_6;
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                {
                    arr_37 [i_10] [i_8] [i_9] [i_10] = (arr_36 [i_10] [i_10] [i_10]);
                    arr_38 [i_8] [i_10] [i_10] = (arr_10 [i_8 + 3] [i_10]);
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_24 = ((var_5 >= (((-(min(var_0, (arr_18 [12] [i_9] [i_11 + 2] [i_12]))))))));
                                arr_47 [i_12] [14] [i_10] [14] [i_8] |= (min(((max((arr_41 [12] [i_10 - 3] [12]), (arr_41 [8] [i_9] [4])))), ((24924 - ((~(arr_26 [i_8] [i_8] [i_9] [10] [10] [i_9])))))));
                                var_25 = (max(var_25, (arr_26 [i_8 + 2] [i_8] [i_8] [3] [15] [i_8])));
                                arr_48 [i_8] [i_9] [18] [i_8] [i_10] = var_8;
                                arr_49 [5] [i_10] [i_10] [i_10] = (((~(max((arr_36 [i_8 - 1] [i_10] [i_12]), var_8)))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = ((-(arr_0 [i_8 + 3])));
        var_27 = (((~(((arr_0 [20]) << (arr_27 [9] [i_8] [i_8] [i_8] [i_8] [9]))))));
        var_28 -= (((!(arr_46 [13] [i_8] [i_8 + 2] [13]))));
    }
    var_29 = -1432530010123317050;
    #pragma endscop
}
