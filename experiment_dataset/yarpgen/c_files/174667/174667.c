/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((-(~var_3))), (!-var_6)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (~(((!(((~(arr_3 [0] [i_1 + 1] [i_2]))))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((~((-((max((arr_5 [i_0] [i_1 - 1] [i_2] [i_0]), (arr_3 [i_0] [i_0] [2]))))))));
                        var_21 = ((~(arr_2 [i_0] [i_3 + 1] [i_2 + 1])));
                        var_22 = ((((!(arr_2 [12] [i_1] [i_3])))));
                        var_23 = (min((((~(arr_8 [i_3] [i_0] [7] [i_0])))), (((~(arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 4] [i_0] [0]))))));
                        arr_10 [i_2] [1] = (arr_0 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] = ((~(((!(((~(arr_1 [i_1 - 1] [i_0 + 3])))))))));
                        var_24 = ((~((min((((!(arr_3 [i_0] [i_0] [i_4 - 1])))), (arr_9 [i_0] [i_0] [i_0] [3] [i_0] [0]))))));
                        var_25 = (arr_1 [2] [i_0]);
                        var_26 = (max(((max((arr_13 [i_0]), (arr_5 [i_0] [i_1 + 1] [i_2 + 1] [i_4])))), (min(((-(arr_4 [4] [i_1] [2] [4]))), 1))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_27 = (((-(arr_8 [6] [i_2 + 2] [i_5] [i_6]))));
                            var_28 = ((~(arr_9 [i_0 + 4] [i_1] [i_1] [i_1] [i_5] [16])));
                            arr_19 [i_6] [i_6 - 1] [20] [i_2] [i_6 - 1] = ((~((-(arr_18 [i_0 + 4] [i_6] [i_5 + 1])))));
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_2] [5] [i_0 - 2] [3] [3] = ((~(arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0] [i_0])));
                            var_29 = (arr_0 [i_0 - 2]);
                        }
                        arr_24 [i_0] [i_0 + 1] [0] [22] = ((-(arr_18 [i_0 + 3] [i_2] [i_2 - 2])));
                        var_30 = ((((!(arr_2 [i_0 - 2] [i_0 - 2] [i_2 + 1])))));
                        arr_25 [i_0 - 1] [16] [14] [i_0 + 2] [i_0] [i_0] = (arr_4 [i_5] [i_2 - 1] [i_1] [i_0]);
                        arr_26 [i_0 - 1] [i_1] [7] [i_5] = (arr_1 [22] [6]);
                    }
                    var_31 = (max((min((arr_21 [i_0] [i_1] [1] [1] [i_0]), (arr_16 [i_0] [i_1] [i_2] [4] [i_0]))), (arr_20 [i_2 + 1] [1] [i_2] [i_2] [i_2] [i_0])));
                    var_32 = ((+(min((arr_11 [i_0] [i_0] [9] [i_2 - 2] [i_2]), (arr_8 [i_0] [16] [i_1] [i_2])))));
                }
            }
        }
    }
    var_33 = ((~((~(~var_9)))));
    var_34 = (min(((~(~var_15))), ((~(~var_16)))));
    #pragma endscop
}
