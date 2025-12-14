/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 32704;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_0]);
        arr_3 [i_0] = 255;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = max((((((var_14 / (-9223372036854775807 - 1))) != (arr_7 [i_2] [i_1] [i_0])))), (arr_1 [i_1]));
                    arr_10 [i_0] [i_0] [i_0] = ((((((arr_7 [i_0] [i_1] [5]) ? (arr_2 [i_1]) : (arr_7 [i_2] [i_0] [i_0])))) ? (arr_4 [i_2]) : (4 != var_2)));
                    var_23 ^= ((!((max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_24 ^= ((18446744073709551615 + 2147483647) << (((arr_5 [i_0] [i_0] [i_3]) - 101)));
                        var_25 = (arr_12 [i_1] [i_1] [i_1] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((var_18 ? (((var_9 >= ((var_11 ? 0 : var_13))))) : (~var_15)));
        arr_17 [11] = (arr_0 [i_4]);
        var_26 = (~var_5);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [2] = (!18446744073709551601);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    {
                        var_27 = (arr_18 [i_6]);
                        var_28 = ((-((var_13 ? (arr_2 [i_8]) : (arr_8 [i_5])))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    arr_38 [i_9] [i_11] &= (arr_0 [i_9]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_47 [i_9] [i_10] [i_11] = (~(((((arr_29 [i_13]) ? 18446744073709551613 : (arr_7 [i_11] [i_11] [i_11]))))));
                                arr_48 [i_9] [i_10] [i_11] [i_12] [i_13] = (max(((min((arr_44 [i_10] [i_12 - 1] [i_12 - 1] [i_10]), (arr_44 [i_10] [i_12 + 2] [i_12 + 1] [i_10])))), 9));
                                var_29 |= (~var_1);
                            }
                        }
                    }
                }
            }
        }
        var_30 = 7;
        var_31 = (((-(arr_23 [i_9] [i_9]))) | ((var_14 ? (arr_2 [i_9]) : (arr_2 [i_9]))));
        arr_49 [i_9] = (!18446744073709551615);
    }
    #pragma endscop
}
