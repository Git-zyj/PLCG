/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_14 = ((((arr_1 [i_0 - 3]) & ((min((arr_1 [i_0]), (arr_0 [i_0 - 1])))))));
        var_15 = (min(var_15, var_11));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = (2343752548 >= 39);
                    var_17 = (max(var_17, ((max(2343752571, 2343752571)))));
                    var_18 = (min(var_18, 0));
                }
            }
        }
        var_19 = (((max(17, var_12))));
        var_20 &= ((((((var_2 ^ 1951214752) ? ((((arr_4 [i_1 + 2] [i_1]) ? var_2 : var_3))) : (((arr_4 [i_1] [i_1]) ? 2343752554 : (arr_3 [i_1])))))) ? ((((var_5 == (arr_5 [i_1 + 2] [i_1 - 3]))))) : 2343752548));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_4] [i_4] [i_6] [i_7] [i_5] = (((arr_27 [i_4] [i_5] [i_4]) ^ (arr_21 [i_4 + 1] [i_6 - 1])));
                        var_21 = 1951214752;
                        arr_29 [10] [i_5] [i_5] [10] |= (((((var_8 ? var_5 : var_10))) ? ((var_10 ? var_8 : var_1)) : var_1));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_35 [i_4] [i_4] [i_8] = 1951214724;
                            var_22 = (var_10 == (200 & 1));
                            var_23 = (min(var_23, ((((((var_2 == (arr_5 [i_8] [i_8])))) ^ (arr_11 [i_4]))))));
                            var_24 |= (((arr_20 [i_4 - 2] [i_4 - 1] [i_4 - 2]) ? var_8 : (arr_20 [i_4 - 2] [i_4 - 1] [i_4 + 1])));
                            var_25 = (((arr_15 [i_4 - 1] [i_4 + 1]) + (arr_30 [i_4] [i_5] [i_9] [i_8])));
                        }

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_23 [i_4 - 1]) % (arr_4 [i_4 - 2] [i_6 + 1]))))));
                            var_27 = (max(var_27, (2945301461 + 2343752543)));
                        }
                    }
                    arr_38 [i_4] [i_4] [4] = ((((1 ? 2343752555 : 194)) - (~var_9)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_50 [i_4] [i_11] [i_12] [i_13] &= (((arr_24 [i_4 - 2]) ? (var_10 == 6186388364148941553) : var_2));
                        var_28 = (((((1951214719 ? var_0 : (arr_47 [i_4 - 1])))) ? ((1 ? var_6 : var_6)) : ((var_10 ? (arr_15 [i_13] [i_13]) : var_2))));
                        var_29 = 1874350304;
                        var_30 = (((arr_45 [i_4 - 1] [i_13] [i_4 - 1] [i_13]) && (arr_17 [i_4 + 1])));
                    }
                }
            }
        }
        var_31 = (max(var_31, ((((((var_12 ? (arr_15 [i_4] [i_4]) : var_4))) || ((((arr_7 [1]) ^ (arr_15 [i_4 - 2] [i_4])))))))));
    }
    var_32 = ((((((min(var_8, var_13))))) == ((var_3 ? ((var_2 ? var_11 : var_0)) : (((1951214741 ? 0 : 2945301461)))))));
    var_33 = var_8;
    var_34 = (((((!(((var_2 ? var_9 : var_3)))))) * var_3));
    var_35 = var_4;
    #pragma endscop
}
