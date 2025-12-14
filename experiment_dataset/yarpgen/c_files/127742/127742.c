/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 ? (1 <= var_1) : (~1)));
    var_18 ^= (~(6478387376670702172 - 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [7] [i_1] [i_1] = (((((max(1858797280, var_2))) < (min(1, 4014928902130323734)))));
                arr_8 [i_0] = var_0;
                var_19 = (max((((((arr_4 [i_1] [i_0] [i_0]) + (arr_3 [i_0]))) / (arr_3 [i_0]))), (((var_7 % ((var_3 ? 2436170021 : (arr_4 [15] [i_0] [15]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_20 = -6478387376670702191;
                    var_21 = (((var_10 >= var_15) > (1 / 512)));
                    var_22 = (arr_13 [i_2] [i_3] [i_4]);

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_23 = (max(var_23, (arr_15 [i_4 + 1] [14])));
                        var_24 = var_6;
                        arr_21 [i_2] [i_3] [15] [i_2] = ((1 < ((-(arr_18 [i_2] [i_3] [13])))));
                        var_25 = (1 >> 1);
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_2] [i_2] [i_3] [i_4] [i_6] = (!var_15);
                        var_26 = (max(var_26, (((!(~var_4))))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_27 = (arr_26 [i_2 + 2] [i_3] [i_4 + 3] [i_3] [i_2]);

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_2] [i_2] [i_8] [i_8] [0] = ((-(var_14 | 1)));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_2] [1] [i_4 - 3] = ((9 ? 16740 : 10));
                            arr_31 [i_2] [i_7] [i_2] [i_2 + 2] [i_2] &= 2147483647;
                        }
                        var_28 = var_0;
                    }
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_34 [i_2] [i_3] [i_4] [i_2] = ((~(((arr_6 [i_9]) ? 1 : 34808))));
                        var_29 = (((arr_32 [i_4 - 1] [i_4 - 2] [i_4 - 1]) | (arr_32 [i_4 + 3] [i_4 - 2] [i_4])));
                        var_30 &= (arr_25 [i_3] [i_9] [i_9 + 1] [i_9 + 1]);

                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            var_31 = (max(var_31, (!1509594057)));
                            var_32 = ((var_16 + -2147483633) && (arr_28 [i_4 - 2] [i_10 - 1] [i_9 - 2] [i_4 - 2] [i_2 - 2]));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_2] [i_9] [i_4] [i_3] [i_2] = ((~(arr_33 [i_2] [i_2] [i_4] [i_4 - 3])));
                            arr_42 [i_2] [i_9] [i_4] [i_2] [i_2] = ((var_4 ? ((-(arr_28 [11] [i_3] [i_3] [6] [i_3]))) : ((((arr_1 [i_4]) && var_0)))));
                            var_33 = (min(var_33, (arr_35 [i_3] [i_3] [i_4] [i_4 + 1] [i_4])));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_12] [i_2] [i_4] [i_2] [i_2] = ((!(arr_25 [i_2 + 2] [i_4 + 1] [i_9 + 2] [i_12])));
                            var_34 = ((((var_3 ? 383396138 : var_14)) | (var_15 ^ var_7)));
                            arr_48 [i_2] = (((((arr_37 [i_2] [i_3] [i_4] [i_9] [i_3] [11]) >> (((arr_32 [i_12] [10] [i_2]) - 1497432344))))) ? (arr_2 [i_2 + 1]) : (!3729376312));
                        }
                    }
                    arr_49 [11] [i_2] [6] = var_9;
                }
            }
        }
        var_35 = (max(var_35, (((!((((arr_2 [23]) - var_16))))))));
        arr_50 [i_2] [i_2 + 2] = (arr_2 [i_2]);
        var_36 = (arr_10 [i_2 - 2]);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_37 = (2147483647 == (arr_51 [i_13]));
        arr_54 [17] = ((1858797256 ? (!var_0) : var_9));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 18;i_15 += 1)
            {
                {
                    var_38 = (min(var_38, ((((((4294967295 ? var_15 : var_5))) ? (var_11 & 3514487314300171099) : (arr_53 [1]))))));
                    arr_61 [10] [i_14] [i_13] = ((32767 ? (arr_53 [i_15 + 1]) : var_4));
                }
            }
        }
    }
    #pragma endscop
}
