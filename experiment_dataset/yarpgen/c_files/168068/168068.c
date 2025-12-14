/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = 2773061051;
        var_12 = (arr_0 [i_0] [i_0 + 1]);
        arr_2 [i_0] = ((~(max(((-(arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_13 = (!(arr_0 [i_0 - 1] [i_0 + 1]));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            {
                var_14 = (~(max((arr_0 [1] [1]), (arr_6 [i_1]))));

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_15 = (max(var_15, (arr_7 [4] [i_2] [i_2 - 2])));
                    var_16 = (arr_7 [i_2 - 1] [1] [i_2 + 2]);
                    var_17 = ((-(arr_3 [i_2 + 1] [1])));
                    var_18 = (arr_4 [i_3]);
                    var_19 = min((max(1050464623, (arr_8 [i_1]))), (((!((max((arr_9 [i_3] [12] [i_1]), (arr_1 [i_2]))))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_2] [i_2] [16] = max(((-(arr_3 [i_1] [i_2]))), (!-1));
                    var_20 = (arr_11 [i_1] [i_2] [i_4] [3]);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (arr_12 [i_1] [i_2] [i_1] [i_6]);
                        var_22 = (max((arr_12 [15] [i_2] [15] [0]), (max((arr_8 [i_2 - 1]), (arr_8 [i_2 + 2])))));
                        var_23 = (min(var_23, ((min((arr_10 [1] [i_2] [i_2] [i_2]), ((max((arr_16 [i_2 - 1] [i_2] [i_6]), (arr_8 [11])))))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_24 = min((arr_18 [i_5] [i_5] [i_5] [i_7] [5]), (max(1, (arr_15 [i_5] [17] [17]))));
                        var_25 = (arr_14 [3] [i_2] [i_5]);
                        var_26 = (max(((~((~(arr_4 [i_5]))))), (max((max((arr_4 [17]), (arr_19 [i_1] [i_2 + 2] [i_7]))), (min((arr_17 [13] [i_2] [i_5] [13]), (arr_0 [i_1] [i_1])))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_27 = ((!(-2147483647 - 1)));
                        var_28 = ((~((min((arr_23 [i_5] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]), (arr_23 [18] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    }
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_29 = (max(((~(arr_14 [i_2] [i_2 - 2] [i_9 + 3]))), ((max((arr_21 [i_1] [i_2] [i_1] [i_2 - 1] [i_9 + 4] [i_5]), (arr_21 [i_9 + 1] [14] [2] [i_2 - 1] [i_9 + 1] [i_5]))))));
                        var_30 -= ((~(((!((max((arr_3 [i_2 + 2] [i_9]), (arr_10 [i_5] [i_2] [i_5] [i_9])))))))));
                        arr_28 [i_1] [5] [i_5] [i_1] = (max((arr_14 [i_9 - 2] [i_2] [i_2 - 2]), (((~(arr_25 [i_9 - 2] [i_5] [i_5] [7]))))));
                    }

                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_34 [i_11] [i_11] [i_5] [i_5] [i_2] [i_1] = (min((max(((min((arr_29 [i_1] [i_10 + 1] [i_1]), (arr_7 [i_1] [i_1] [i_11])))), ((-(arr_24 [i_2 - 1] [i_2 - 1] [i_5]))))), (((!(arr_12 [i_1] [i_2] [i_10 - 1] [1]))))));
                            var_31 = min(((min((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2]), (arr_7 [i_2 + 2] [i_2 - 1] [i_2 - 2])))), (arr_4 [i_11]));
                            var_32 = ((!((!(arr_31 [i_10 - 2] [i_5] [i_10 - 3] [i_5] [i_2 + 2])))));
                            var_33 = (max(((max((arr_7 [i_2 + 1] [i_10] [i_10 + 1]), (arr_7 [i_2 - 1] [i_5] [i_10 + 1])))), (min(1, (-2147483647 - 1)))));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            arr_39 [i_5] [i_5] [i_10 + 1] [8] = (-(arr_12 [i_1] [6] [i_5] [i_12]));
                            var_34 = (arr_12 [i_2 + 2] [i_2] [i_2 + 2] [8]);
                            var_35 -= ((-(((!(arr_26 [i_1] [5]))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_36 = (min(var_36, ((!(arr_20 [i_10 - 2] [i_2] [i_2 - 1] [i_2] [i_2])))));
                            var_37 = (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_1]);
                        }
                        var_38 = ((-((max((((!(arr_26 [i_2 - 2] [i_10])))), (max((arr_26 [8] [i_2]), (arr_5 [7] [i_10]))))))));
                        var_39 = (arr_35 [i_1] [i_2 - 2] [i_1] [i_10 - 3] [i_10 - 1]);
                        var_40 = (arr_38 [i_1] [i_5] [i_5] [i_5] [i_5] [i_10]);
                    }
                    var_41 = (arr_24 [i_1] [17] [i_5]);
                    var_42 = (arr_30 [i_1] [17] [i_5]);
                }
            }
        }
    }
    var_43 = var_0;
    #pragma endscop
}
