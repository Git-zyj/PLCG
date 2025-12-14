/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (arr_3 [i_0] [i_1]);
                    arr_10 [i_1] [i_2] = (arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min((((var_0 | (((min((arr_2 [1]), (arr_6 [10] [i_2] [7] [10])))))))), (arr_1 [i_2] [i_3]))))));
                                var_18 = var_7;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (arr_4 [10] [i_1] [i_0]);
                        var_20 = (arr_11 [i_0] [4] [i_2] [i_5 + 3]);
                        var_21 = (arr_0 [i_1]);
                        var_22 = ((-((~(arr_8 [i_2] [i_5])))));
                        arr_17 [i_2] = (((arr_8 [i_2] [i_0 + 2]) - (arr_2 [i_2 + 3])));
                    }
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_28 [i_6] [i_6] [i_6] [10] [i_6] [i_6] = arr_5 [i_7];
                        var_23 = (min(var_23, ((((((arr_21 [4] [i_9]) & (arr_9 [8] [2] [i_7 + 1]))) == ((((!(arr_7 [i_7] [i_7 + 4] [11] [i_7]))))))))));
                    }
                    var_24 = ((var_2 && ((max((arr_9 [12] [i_6 - 2] [i_7]), (arr_2 [i_6]))))));
                    var_25 = (max((((((((arr_22 [i_7] [i_7]) != (arr_13 [i_8 - 1] [i_8] [7] [i_6] [9] [11])))) < (arr_3 [i_6] [i_6])))), var_15));
                }
            }
        }
        arr_29 [i_6] = (arr_18 [i_6 + 1] [i_6]);
    }

    /* vectorizable */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_26 = (arr_30 [i_10 - 1]);
        arr_32 [4] = (((arr_31 [i_10]) < (arr_31 [i_10 + 1])));
    }
    #pragma endscop
}
