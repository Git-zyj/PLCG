/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-(var_5 & var_3)))) ? (max(var_8, var_13)) : ((max((var_1 | var_0), (var_0 >= var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 ^= ((+(max(var_12, ((var_14 ? (arr_5 [i_0 - 3]) : var_4))))));
                var_17 = (((((var_0 * (var_3 > var_7)))) ? (((((var_12 ? var_2 : var_8))) ? (arr_3 [i_0] [i_1 + 4]) : ((57 ? 198 : var_9)))) : (((((var_10 << (var_5 + 43)))) ? (((arr_3 [i_1] [i_1]) / var_1)) : (var_9 | var_10)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = 57;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 ^= (!-128);
                        var_19 = (max((((~var_11) / (~1))), (((!(203 >= 57))))));
                        arr_12 [i_0 - 2] [i_1 + 3] [i_1] [i_1] [i_2] [i_3] = ((~(((arr_3 [i_0 + 2] [i_0 + 2]) | ((199 ? var_12 : (arr_3 [i_2] [i_1])))))));
                        var_20 = (arr_0 [i_0] [i_1]);
                        var_21 = (((max((arr_10 [i_0] [i_0 - 3] [i_0 + 2] [i_1 + 2] [i_1] [i_1 + 1]), (arr_10 [i_0 - 3] [i_0 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 4]))) >= (arr_10 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 4])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1 + 2] [i_4] [i_4] [i_1 - 2] &= var_1;
                        arr_16 [i_0] [i_1 + 1] [i_1] [i_2] [i_4] = (((((arr_13 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]) | (arr_4 [i_1 + 4] [i_1])))) ? var_14 : ((max((arr_6 [i_0 + 3] [i_0]), ((var_3 ? var_8 : 199))))));
                    }
                    var_22 = (arr_5 [i_0 - 3]);
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    arr_21 [i_1] [i_5] = ((~(arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 3])));
                    arr_22 [i_0] [i_1] |= ((((((arr_17 [i_0] [i_1] [i_5 - 1] [i_5 - 1]) ? var_8 : -1770152298))) ? (arr_14 [i_0] [i_0] [i_5] [i_0 + 2] [i_1]) : (((((arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 3]) >= var_3))))));
                    arr_23 [i_5 + 2] [i_5] [i_5] [i_5 + 1] = var_7;
                    var_23 = var_2;
                }
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_24 = (((((((var_8 ? var_2 : 57))) ? (~67108863) : ((max(var_11, var_10))))) >> (((arr_27 [i_0]) + 38))));
                        arr_29 [i_7] [i_0] = (((~var_8) * ((-((max(1, 0)))))));
                        arr_30 [i_7] [i_1 + 3] [i_1] [i_1] = (((var_8 || var_1) ? ((max(var_10, var_9))) : (max(var_6, var_2))));
                        arr_31 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] [i_7] = (max((max((arr_8 [i_1 + 2] [i_6 - 1] [i_7]), var_9)), var_6));
                        arr_32 [i_7] [i_1] [i_1] [i_1 + 3] [i_1] = -var_6;
                    }
                    var_25 = 60;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_35 [i_0] [i_1 + 2] [i_8] = (max(var_8, (((max(209, var_14)) * (arr_4 [i_0 + 3] [i_1 + 4])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_26 = (max(var_1, (var_6 & var_12)));
                                var_27 ^= (((((57 ? var_1 : (arr_25 [i_1 + 1])))) ? var_3 : 1));
                                var_28 = (((~711261202) * ((((((var_10 ? var_3 : 199))) ? var_10 : ((var_8 ? var_4 : var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 3; i_11 < 13;i_11 += 1)
    {
        var_29 ^= (-var_13 / (max(((max(var_10, 56))), ((var_3 / (arr_18 [i_11 - 1] [i_11] [i_11]))))));
        var_30 |= (max((((((1 ? var_3 : (arr_8 [i_11] [i_11] [i_11])))) ? var_6 : var_7)), (((arr_41 [i_11 - 3]) ? -1 : (~var_1)))));
    }
    var_31 |= var_5;
    #pragma endscop
}
