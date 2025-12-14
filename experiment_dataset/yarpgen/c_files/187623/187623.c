/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((92 < 11098) ? (523264 && 25431) : (max(18446744073709551615, var_0)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (var_3 / -9223372036854775788);
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) != var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [7] [i_1] = var_3;
        arr_7 [i_1] [i_1] = (var_13 == var_0);
        arr_8 [i_1] [i_1] = 122;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [3] = (((arr_13 [i_1] [i_2] [i_3] [i_3]) ? var_2 : var_14));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_2] [i_4] = ((((arr_0 [i_1]) ? (arr_15 [i_1] [i_2] [i_1] [i_2] [i_3] [i_4]) : 122)) < (arr_17 [i_1] [i_2] [i_3] [i_1]));
                        arr_20 [i_1] [8] [i_3] [8] = (((arr_9 [i_1] [i_4]) ? -110 : var_0));
                        arr_21 [8] [i_2] [i_3] [i_4] [i_4] = ((arr_5 [i_1] [i_4]) == var_16);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_26 [i_2] [0] [i_2] [i_2] [i_3] [i_5] = 23;
                        arr_27 [i_1] [4] [4] [i_1] [i_5] [2] = (arr_23 [i_1] [i_2] [i_3] [i_5]);
                        arr_28 [i_2] [6] [i_2] [i_3] [i_5] = ((var_7 ? (arr_13 [i_1] [i_2] [i_2] [i_5]) : var_7));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_31 [6] [i_2] [i_5] [i_6] = (((arr_10 [i_5] [i_6]) >= var_2));
                            arr_32 [i_1] [i_5] [i_5] [i_5] [i_6] [i_1] [i_6] = (~149);
                            arr_33 [i_2] = (var_14 * 0);
                        }
                        arr_34 [i_5] = ((var_4 ? (arr_12 [i_3] [i_5]) : (arr_30 [i_2] [i_5] [i_5])));
                    }
                    for (int i_7 = 1; i_7 < 6;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 6;i_8 += 1)
                        {
                            arr_40 [i_2] [i_3] = (!var_2);
                            arr_41 [2] [0] [i_2] [1] [3] [i_8 + 1] [2] = (((arr_24 [i_1] [i_2] [i_1]) - (arr_36 [i_1] [i_1] [i_3] [i_3] [i_8])));
                            arr_42 [i_1] [0] [6] = ((var_10 ? (arr_5 [i_7 - 1] [i_8 + 1]) : (arr_5 [i_7 + 3] [i_8 + 4])));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_46 [i_1] [i_2] [i_2] [i_3] [9] [1] &= var_13;
                            arr_47 [i_1] [i_2] [i_3] [8] [i_9] = ((var_11 ? (var_5 + 1) : (var_9 ^ 59852)));
                            arr_48 [i_2] [i_3] [i_9] = 2;
                            arr_49 [1] [i_7] [i_9] = (1 >= 59852);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_53 [i_3] [i_7] [i_10] = (((((((arr_9 [i_1] [i_2]) && 1)))) > var_3));
                            arr_54 [i_10] = var_6;
                            arr_55 [i_1] [i_10] [i_3] [i_7 + 1] [8] [i_10] [3] = ((var_6 ? (arr_50 [i_2] [i_7 + 3] [i_7] [i_10] [i_10]) : (arr_50 [i_3] [i_7 + 3] [6] [i_7] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_58 [i_2] [i_2] [i_7] [7] = (!var_16);
                            arr_59 [i_1] [i_2] [i_3] [i_7] = var_4;
                            arr_60 [1] [i_2] [i_3] [7] [1] = ((5329459734606158823 && (arr_38 [i_7 - 1])));
                        }
                        arr_61 [1] [1] = ((~(arr_50 [i_1] [i_2] [i_3] [4] [i_2])));
                    }
                    arr_62 [4] [4] [8] = var_14;
                    arr_63 [8] [8] [8] [i_3] = ((1 < ((var_10 ? var_4 : -122))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        arr_67 [i_12] [i_12 + 1] = (((((arr_1 [i_12] [16]) ? (min(var_0, var_7)) : (((arr_64 [i_12 + 1]) ? 99 : (arr_65 [i_12 + 1]))))) % ((max(964856266, (arr_0 [i_12 + 1]))))));
        arr_68 [i_12] = (~var_1);
    }
    #pragma endscop
}
