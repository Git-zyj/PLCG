/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 -= (max(46474, 46474));
        var_12 -= (((2147483647 >= 0) % (min((((arr_0 [i_0]) % 19047)), ((2700632708558091310 ? 46489 : 1))))));
        var_13 = var_3;
        arr_2 [3] [i_0] = (((!(((var_6 ? (arr_1 [i_0]) : (-32767 - 1)))))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_14 -= (1 & 2139095040);
        arr_5 [i_1] = ((((arr_1 [i_1 + 2]) | (arr_1 [i_1 - 2]))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (0 ^ 1305369168);
            var_15 = (arr_6 [i_1]);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_11 [3] [i_3] [i_1] = (4362190345453911977 ? 0 : 182577281);
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_16 += ((~(((arr_14 [i_6] [i_1] [i_5 + 1] [i_4 - 3] [i_1] [i_1]) ? (((arr_4 [i_5]) - var_2)) : var_3))));
                            arr_20 [i_1 + 2] [i_1] [i_3] [10] [i_3] = (arr_7 [i_1 - 1]);
                            arr_21 [i_3] = (arr_10 [i_3]);
                        }
                    }
                }
            }
            var_17 = (-(((arr_17 [i_1 - 4] [i_3]) ? (arr_17 [i_1 - 3] [i_3]) : (arr_17 [i_3] [i_1 - 3]))));
            arr_22 [i_1 - 2] [i_3] [i_1] = var_9;
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                var_18 = (((var_2 ? 18446744073709551605 : 19062)));
                var_19 = 317047287;
                var_20 = (min(var_20, (0 / 8992573944900818432)));
            }
            var_21 = -8915972294345390488;
        }
        var_22 = (min(var_22, (((2147483647 ? (arr_4 [i_1 + 2]) : (((arr_16 [i_1 - 1] [i_1] [2] [i_1] [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_16 [9] [i_1] [i_1 - 3] [i_1] [i_1 - 2]))))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_41 [i_9 + 2] [i_9 + 2] [i_9] [i_9] = 2147483646;
                                var_23 = (min(var_23, var_2));
                                arr_42 [i_9] [i_10] [i_11] [i_12] [i_9] = ((~((((max((arr_27 [i_9]), (arr_29 [i_9 + 2] [i_10] [i_11 - 4])))) ? var_5 : (var_1 ^ -4126)))));
                            }
                        }
                    }
                }
                var_24 = (arr_28 [i_9 + 2] [i_9 + 2]);
                var_25 = (min(var_25, (((-(max((arr_29 [i_9 + 2] [i_9 - 2] [i_10]), 2147483647)))))));
            }
        }
    }
    var_26 = var_7;
    #pragma endscop
}
