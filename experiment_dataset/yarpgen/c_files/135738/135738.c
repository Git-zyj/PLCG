/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(816723412177410936, var_5));
    var_14 = (~var_6);
    var_15 |= ((var_4 >> (-41793 + 74)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_4;
        arr_5 [i_0] |= var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_2] [i_2] = (((arr_7 [11]) || -var_9));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_1] [0] [0] [i_3] = ((((((arr_13 [i_0] [8] [i_2]) ? var_9 : -101))) ? ((-1202 ? var_4 : (arr_6 [12] [i_1] [12]))) : var_11));
                        arr_16 [i_0] [i_2] [i_0] = var_8;
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_4] [i_0] = (((arr_2 [i_0] [i_1]) / (((((arr_13 [i_0] [i_2] [0]) >= 67100672))))));
                        arr_20 [i_0] [i_2] [i_2 + 1] [11] [12] [i_2 + 2] = var_0;
                        arr_21 [6] [i_1] [i_2] [i_1] [8] [i_1] &= (((arr_18 [7] [i_1] [i_2] [i_4 - 1]) - (((arr_2 [i_1] [i_1]) ? (arr_13 [i_0] [i_1] [i_2]) : var_10))));
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_26 [i_1] [i_6] [i_1] [i_6] [i_6] = (arr_23 [i_0] [i_1]);
                            arr_27 [i_2] = (arr_3 [i_0] [6]);
                        }

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [7] [i_7] [i_2] = ((268402688 ? (arr_23 [i_0] [9]) : var_4));
                            arr_31 [i_0] [i_0] [i_0] [i_5] [i_7] [i_2] [i_2] = ((((16744448 ? -1202 : 170)) <= (arr_24 [10] [i_0] [i_2 + 4] [i_5 + 3] [i_0])));
                            arr_32 [i_0] [i_2] [i_5] [i_5 + 2] [i_7] = (((128 <= (arr_2 [0] [i_1]))));
                        }
                        arr_33 [i_0] [i_2] [i_2] [0] [i_5] = ((~(arr_25 [i_0] [i_0] [i_2 + 4] [i_5 + 2] [i_1])));
                        arr_34 [i_0] [i_1] [i_2] [i_5] = (((var_0 + 2147483647) >> ((((arr_8 [2] [i_1]) < var_9)))));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_37 [i_2] [i_1] [0] [i_8] = (((arr_28 [1] [i_2] [i_2 + 1] [i_2] [i_0] [6]) % (arr_28 [i_0] [i_2] [i_2 - 1] [i_8] [i_2] [i_1])));
                        arr_38 [9] [i_1] [i_2] [9] = (arr_22 [i_2 + 1] [i_8 + 1]);
                        arr_39 [i_1] [i_1] [i_0] [4] [i_0] [i_2] = (((arr_24 [i_2 + 4] [i_8 + 3] [i_2] [i_8] [i_2]) ? var_3 : 1202));
                        arr_40 [2] [2] [i_2] = 86;
                        arr_41 [i_0] [i_1] [i_2 + 3] [i_8 + 3] [i_1] = (-1868 != 16744448);
                    }
                    arr_42 [i_2] = 48;
                }
            }
        }
        arr_43 [i_0] = var_10;
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_46 [i_9] [i_9] = var_6;
        arr_47 [i_9] = ((((min(((var_11 ? (arr_29 [i_9] [i_9] [i_9] [i_9]) : (arr_13 [i_9] [i_9] [3]))), (arr_0 [1] [i_9])))) ? ((((((arr_18 [i_9] [i_9] [i_9] [i_9]) ? (arr_8 [i_9] [i_9]) : 3223383499)) * (!6063)))) : ((~(((arr_8 [i_9] [9]) ? var_11 : (arr_23 [i_9] [i_9])))))));
    }
    #pragma endscop
}
