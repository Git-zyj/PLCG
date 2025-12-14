/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 < (((((48546 ? 121 : 11264))) ? (var_9 == 133) : ((118 ? 129 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((-((1 ? (arr_1 [i_0]) : var_3))));
                    var_16 &= ((((((58648 + 34208) ? var_6 : ((116 * (arr_4 [i_0] [i_0])))))) ? ((((1 ? 133 : 155)) & ((-(arr_0 [i_0]))))) : -45));
                    arr_6 [i_1] [i_1] [i_2] [i_2 - 2] |= ((arr_0 [i_0]) < ((183 ? ((max(243, 118))) : (1 == 140))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((0 ? (arr_7 [1] [i_1 - 1] [i_3] [i_3 + 2]) : 36));
                            arr_15 [i_3] [i_3] = ((166 ? 73 : 1));
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = ((-(arr_12 [i_4] [i_3 + 3] [i_3] [i_2] [i_1])));
                            var_17 = (((((arr_13 [i_4]) ? (arr_4 [i_2] [9]) : 145)) / var_5));
                        }
                        var_18 = (max(var_18, 25102));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = (((arr_11 [i_5] [i_3 + 3] [i_2] [i_1] [1]) ? 29769 : (~215)));
                            var_20 = (max(var_20, (((-(((arr_18 [i_1] [i_1 + 1] [i_2 - 2] [i_2] [i_2] [i_3 - 1]) ? var_7 : 1519)))))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_21 = ((-(-203 <= 40433)));
                            var_22 *= var_12;
                            arr_22 [i_3] [i_1] [1] [i_3] [i_3] [i_6] = (min((((arr_3 [i_1 - 1] [i_2 - 2]) ^ (arr_3 [i_1 + 1] [i_2 - 1]))), ((-(arr_3 [i_1 + 1] [i_2 - 2])))));
                        }
                        arr_23 [i_3] [i_3] [i_2] [i_1] [i_3] = (--156);
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_0] = (arr_9 [i_2]);
                        arr_27 [i_2] [i_2] [i_0] [i_0] = (((arr_20 [1] [i_2] [i_1] [i_7 + 2] [i_7]) | (max(127, ((min(23, var_1)))))));
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_2] = (max(221, 57072));
                        arr_32 [10] [i_0] [i_0] = (max((((((max(var_5, 152))) < (arr_10 [i_8] [11] [i_1] [i_8] [i_8] [i_1])))), (min(110, 54379))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 = ((-(arr_13 [i_0])));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_9] [i_0] [i_0] = (((~52926) ? 1 : (arr_9 [i_9])));
                            arr_38 [1] [i_1] [i_2] [i_2] [i_10] &= 28047;
                            var_24 = 145;
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_25 = 234;
                            arr_41 [i_0] [i_9] [i_2] [8] [i_0] = (((109 ? (arr_4 [16] [16]) : 0)));
                        }
                        arr_42 [i_0] [i_9] [i_0] [i_9] = (((arr_21 [i_2 + 2] [i_1 + 1] [i_1] [i_0] [i_0]) == (arr_19 [i_0] [i_1] [i_9])));
                        arr_43 [i_9] [i_9] [i_9] = (arr_8 [i_1 - 1] [i_2 - 2] [i_9]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
