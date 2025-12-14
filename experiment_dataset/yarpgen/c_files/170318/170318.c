/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_11 |= (arr_5 [i_0] [i_1]);
            var_12 = ((275047599 ? var_9 : (arr_0 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_0] [i_3] = (((arr_8 [i_1 + 1] [i_1 + 1] [i_2]) ? (arr_7 [i_0] [i_1]) : (arr_1 [i_3])));
                        var_13 = (((arr_6 [i_2 + 2] [i_1]) % (arr_10 [i_2] [i_2] [i_2] [i_1 - 1] [i_3 + 1])));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_14 -= 275047594;
                            var_15 = (max(var_15, (arr_8 [i_1 - 1] [i_1 - 1] [i_3])));
                        }
                        var_16 = (arr_6 [i_0] [i_0]);
                    }
                }
            }
            var_17 = (((arr_12 [i_0] [i_1 - 1] [i_0] [i_1] [i_1]) ? 2110962782 : (arr_8 [14] [i_1 - 1] [14])));
            arr_14 [i_0] [i_0] [i_1] = (275047591 || 1508736414);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] = (((arr_16 [i_0] [i_0] [i_0]) ? var_3 : (arr_13 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1])));
            var_18 = (arr_9 [12]);
            var_19 ^= ((var_4 ? (arr_3 [i_5 - 1]) : (arr_3 [i_0])));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_0] [i_6] = 9546;
            var_20 = ((((((arr_7 [i_6 - 1] [i_6]) ? (arr_7 [i_6 - 1] [i_6 - 1]) : (arr_7 [i_6 - 1] [i_0])))) ? (((arr_7 [i_6 - 1] [i_0]) >> (var_4 - 1841681571220729242))) : (max((arr_7 [i_6 - 1] [i_0]), (arr_7 [i_6 - 1] [i_6])))));
            var_21 = (arr_10 [10] [i_6] [14] [i_0] [10]);
        }
        var_22 = var_3;
        var_23 = (min(var_23, ((((arr_2 [i_0]) != (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
        var_24 = (((31109 * (111 == 1))));
        var_25 = (((-(arr_13 [i_0] [15] [i_0] [i_0] [i_0] [i_0] [i_0]))) | var_9);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_26 = (max(var_26, (arr_4 [i_7 + 2] [i_7] [15])));
        var_27 = (arr_3 [i_7]);
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_28 = (min((arr_20 [i_8 + 1] [i_8] [i_8]), (min((arr_8 [i_8 + 1] [i_8 - 1] [i_8]), (max(1736927417, var_5))))));
        var_29 -= (((arr_13 [i_8] [3] [i_8] [i_8] [7] [1] [3]) ? (arr_1 [i_8 - 1]) : (((((arr_8 [i_8 + 2] [i_8] [i_8]) != (arr_6 [i_8 + 1] [i_8])))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_30 [i_9] = ((((arr_4 [i_9] [i_9] [i_9]) ? (arr_20 [i_9] [i_9] [i_9]) : var_0)));
        arr_31 [i_9] |= (arr_17 [11] [i_9]);

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_35 [7] = (arr_6 [i_9] [9]);
            var_30 *= ((((((arr_10 [i_10] [i_10] [i_10] [4] [i_10]) ? (arr_10 [i_9] [i_10] [i_9] [i_10] [i_9]) : (arr_8 [i_9] [i_10] [i_10])))) ? (arr_8 [i_9] [i_10] [i_10]) : (arr_10 [i_10] [i_9] [i_9] [i_10] [i_10])));
            var_31 = (arr_15 [3]);
            var_32 = (min(var_32, ((max((max((arr_15 [i_9]), (arr_8 [i_9] [i_9] [i_9]))), ((var_2 ? (arr_34 [i_9] [i_10]) : (arr_27 [i_10] [i_10]))))))));
        }
        var_33 = arr_28 [i_9] [i_9];
    }
    var_34 = (min(var_34, var_6));
    #pragma endscop
}
