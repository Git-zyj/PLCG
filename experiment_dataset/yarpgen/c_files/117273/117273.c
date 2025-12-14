/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((-1084932448 ? ((var_2 ? 14277 : 1)) : var_9))));
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 -= (min((max((arr_0 [i_0] [4]), (((arr_0 [i_0] [i_0]) ? var_3 : (arr_1 [i_0]))))), (max((32767 / var_2), var_8))));
        var_21 = 2147483622;
        var_22 = (min(var_22, (arr_1 [i_0])));
        var_23 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_24 |= ((+(((arr_0 [i_1] [i_1 + 1]) ? 1872957331 : var_5))));
        arr_6 [3] = ((!(var_11 - 1)));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_25 = ((((2145684198 & (arr_0 [i_2] [6]))) & (((arr_5 [i_2 + 1]) ^ (arr_9 [i_2])))));
        var_26 += (((max((arr_2 [i_2 + 1]), ((var_10 - (arr_4 [i_2]))))) * (arr_0 [i_2 - 1] [i_2 - 1])));
        var_27 = 32767;
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_28 &= 48659;
            arr_15 [i_3] = ((~(arr_14 [i_3 - 1] [i_3 - 1])));
            var_29 = (min(var_29, (((~(arr_1 [i_3 + 1]))))));

            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                var_30 = (((arr_17 [i_5] [i_4]) - (arr_14 [i_3] [i_3 + 1])));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_31 = ((105 ? var_7 : (!var_1)));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_6] [i_6] = var_15;
                        var_32 = (max(var_32, var_7));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_33 = 1872957331;
                        arr_26 [i_3] [i_4] [i_5] [i_3] [i_8] [i_6] = (-32767 - 1);
                        var_34 = (122 >= (arr_17 [i_5 + 2] [i_5 + 2]));
                        var_35 -= (arr_14 [i_3 - 1] [i_5 + 2]);
                        var_36 = 65534;
                    }
                    var_37 += (((arr_14 [i_4] [i_4]) && var_7));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_38 = (((arr_22 [i_4] [i_4]) || (arr_17 [i_3 - 1] [i_3 - 1])));
                    var_39 = (arr_21 [i_9] [6] [i_9] [i_9] [i_4] [i_9]);
                }
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    arr_34 [i_3 + 1] [i_3] [i_10] = (((arr_13 [i_3 - 1]) / (arr_13 [i_3 - 1])));
                    var_40 = (arr_31 [i_3 - 1]);

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_41 = (var_0 & var_4);
                        var_42 |= ((((-(arr_0 [i_11] [i_3 + 1]))) & (arr_31 [i_11 - 1])));
                        var_43 = (((arr_22 [i_10] [i_10]) % -1));
                    }
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_44 = (2147483647 / (arr_29 [i_3 - 1] [i_3]));

                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        var_45 |= (arr_2 [i_3 + 1]);
                        var_46 = (((arr_10 [i_5 + 3]) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 - 1])));
                        var_47 = (302791756324871849 || -1872957348);
                        var_48 = (max(var_48, (((var_13 || (arr_7 [i_5 + 3]))))));
                        arr_42 [i_13] [i_13] = -var_9;
                    }
                    for (int i_14 = 3; i_14 < 9;i_14 += 1)
                    {
                        var_49 = ((-(arr_44 [i_14] [i_14 - 3] [i_14] [i_14 - 3] [i_14 - 3])));
                        arr_46 [i_12] [i_4] [i_5] [i_14] [i_14] = (10669 | 1557651866970135531);
                        var_50 = var_14;
                    }
                    var_51 = 16888;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 7;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_52 -= 2089615745;
                    arr_53 [i_15] [i_15 + 3] = (min(((((arr_45 [i_3] [i_15] [i_15 + 3] [i_16]) >= ((((var_16 || (arr_14 [i_15 - 1] [i_16])))))))), var_2));
                    var_53 = (arr_27 [i_3 - 1] [i_3] [i_3 + 1] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
