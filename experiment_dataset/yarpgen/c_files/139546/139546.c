/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_13 = var_8;
        arr_4 [i_0] = ((+(((arr_0 [i_0 - 3]) ? 0 : (arr_0 [i_0 + 1])))));
        var_14 = (~(arr_2 [i_0 - 1]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_15 = (arr_5 [i_1] [i_1 + 2]);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = 1;

            for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_13 [i_3] [i_3] [i_2 - 1] [i_3] = var_11;

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 = (max(var_17, ((((arr_9 [i_2 - 1]) << (((arr_9 [i_2 - 1]) - 52052)))))));
                    var_18 = (((((~(arr_9 [i_2])))) ? 25692 : (arr_9 [i_2 - 1])));
                }
            }
            for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_19 |= (((arr_8 [i_1 - 1] [i_5 + 2] [i_2 - 1]) ? (arr_8 [i_1 + 2] [i_5 - 2] [i_2 - 1]) : (arr_8 [i_1 + 2] [i_5 + 1] [i_2 - 1])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = (arr_20 [i_1] [3] [i_5] [1] [13] [3]);
                            arr_22 [i_5] [i_2] [i_2] [i_2] [9] [i_2] = (((((!(arr_17 [i_5])))) >> (((((arr_12 [i_5] [i_2] [i_5] [13]) ? (arr_10 [i_1] [i_1] [i_5]) : 25692)) - 124))));
                        }
                    }
                }
                arr_23 [i_1] [i_5] [i_1] [i_1 + 2] = var_6;
                var_21 = ((!(arr_12 [i_5] [i_5] [i_5] [i_5])));
            }
            var_22 &= (((arr_12 [16] [i_1 - 1] [i_2 - 1] [16]) ? (arr_12 [6] [i_1 + 1] [i_2 - 1] [i_2]) : 25692));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_23 *= -var_3;
            arr_27 [i_8] [i_8] = ((arr_24 [i_8]) ? (arr_24 [i_8]) : (arr_24 [i_8]));
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_24 = (arr_5 [i_1] [i_9]);
            var_25 = (max(var_25, (arr_6 [i_1] [i_1])));

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                arr_33 [i_1] [i_9] [i_10] [i_10] = (((1 ? 63316 : 2264150812)));
                arr_34 [i_1] [i_1] [14] [10] |= 3;
                var_26 = ((arr_9 [i_1]) ? (arr_26 [0]) : (arr_7 [i_1] [i_1] [i_10]));

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_27 = (((arr_12 [i_10] [i_9 + 2] [2] [i_10]) ? (arr_24 [i_10]) : 4));
                    var_28 = (((arr_32 [i_1 + 2] [i_9 + 1] [i_9 - 1]) ? (arr_32 [i_1 + 2] [i_9 + 1] [i_9 - 1]) : 100));
                }
                var_29 = ((3 < (arr_24 [i_10])));
            }
            for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
            {
                arr_40 [11] [11] [i_12] [i_12 + 1] = (arr_32 [i_1] [i_9] [i_1]);
                var_30 = (min(var_30, ((25679 ? -24 : (arr_15 [i_12 + 1] [i_9] [2] [i_1 + 1])))));
            }
            for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
            {
                var_31 &= 8271134374453230935;
                var_32 = 1;
                var_33 = (max(var_33, var_3));
            }
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            arr_47 [i_1 + 2] = ((((!(arr_24 [i_14])))) << (var_11 + 1064729118));
            arr_48 [i_1] [9] = ((~(~1)));
        }
        var_34 = (max(var_34, (((~((-120 ? (arr_37 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1 + 1] [i_1 - 1]))))))));
    }
    var_35 = (min((((~(var_7 & var_12)))), (max((~var_7), (((-3044134030923905139 + 9223372036854775807) << 0))))));
    #pragma endscop
}
