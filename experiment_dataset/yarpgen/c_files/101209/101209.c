/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = ((arr_0 [i_0 + 1]) || var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] [5] [5] = (((arr_2 [i_0 - 1] [i_0 + 1]) ? ((-(arr_6 [i_0] [i_0]))) : (arr_4 [i_0] [i_0] [i_0 + 1])));
                        arr_11 [i_2] [i_2] [i_2] [2] [i_2] [17] = (arr_8 [0] [i_0] [i_0 - 1] [i_2 - 1] [i_2]);
                        arr_12 [i_2] = (arr_4 [i_1] [i_2 - 1] [i_2 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = var_3;

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_20 *= (((arr_16 [14]) ? (arr_6 [i_4] [i_4]) : ((419188515 ? 1 : var_4))));
                            arr_18 [i_0] [6] [i_2] = 3039330820;
                            arr_19 [11] [11] [11] [i_2] [i_5] = (arr_5 [i_5 + 1] [i_2 - 1] [i_0 + 1]);
                            arr_20 [i_2] = (arr_1 [i_0 + 1] [i_0 + 1]);
                            arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_2] [0] = 1;
                        }
                        arr_22 [i_2] [i_1] [i_1] = ((-((~(arr_16 [i_2])))));
                        arr_23 [i_2] = (arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]);
                        arr_24 [i_0] [i_0] [2] |= (!(arr_16 [1]));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = ((11125490763177823792 >= (arr_7 [i_0] [i_1] [18] [1])));

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_22 = (arr_25 [i_2]);
                            var_23 = ((arr_4 [i_1] [i_2 - 1] [i_2 - 1]) * (arr_4 [1] [i_2 - 1] [1]));
                            arr_30 [i_0] [i_2] [14] [14] [i_0] = 0;
                        }
                        var_24 = (min(var_24, (!-0)));
                    }
                    arr_31 [i_2] = (~1);
                    arr_32 [i_0] [18] [1] [18] |= (arr_4 [i_0] [i_0] [i_2]);
                }
            }
        }
        var_25 = (((arr_26 [i_0 + 1] [i_0 + 1] [16] [4] [i_0] [4]) >> (((arr_26 [i_0 - 1] [i_0 - 1] [i_0] [10] [i_0] [i_0]) - 657171862))));
        arr_33 [i_0] = (((arr_0 [i_0 - 1]) ? (arr_29 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [13]) : (arr_0 [i_0 - 1])));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_37 [i_8] [i_8] = (min((~1), (arr_34 [i_8])));
        arr_38 [i_8] [i_8] = (max(1, (arr_34 [i_8])));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_26 = (max(var_26, (~1)));
        var_27 = (arr_34 [i_9]);
    }
    var_28 = (max(var_0, var_16));
    var_29 |= 1;
    #pragma endscop
}
