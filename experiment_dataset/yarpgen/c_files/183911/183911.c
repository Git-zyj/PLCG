/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4833654323604194708;
    var_12 += (max(4833654323604194712, (~1)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 += (max((arr_1 [1]), ((((((max(255, 58)))) > (max((arr_1 [10]), 1)))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_14 = ((~(arr_4 [i_0] [i_1 + 3] [i_0 - 1])));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_15 = (max(var_15, 1));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = (((((15702097070859991292 ? 13613089750105356908 : 10305879960274709782))) ? (~var_3) : (min(((max(var_4, (arr_4 [i_2] [i_3 - 4] [i_4])))), (max(1, 8140864113434841831))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = (max(var_4, (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
                        }
                    }
                }
                arr_17 [i_0] [i_2] [i_1] [i_0] = ((((((arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1] [i_1] [i_0]) > 1))) == (((32747 != (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_1] [i_2] [i_0]))))));
                var_16 = (min((arr_5 [i_0]), var_3));
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_17 = (max(var_17, (((-(arr_12 [i_0 - 1] [i_0] [i_0] [i_5] [i_0] [8]))))));
            var_18 = (min(((16 ? -var_6 : (max(var_6, (arr_11 [i_0] [i_5]))))), (((((var_0 ? 1 : (arr_2 [i_0 - 1]))) == (~1))))));
            var_19 = ((-((max(1, (204 > -32738))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_20 = -16764;
                            var_21 += (max(-1, (max(1, 387440174892592172))));
                            var_22 = min((max(15678000331651380503, 1690535391189582465)), (max(1, 12606597191104566537)));
                            var_23 *= 18446744073709551603;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_24 = (((6225751690307314830 && 4196326750905780289) ? ((~(arr_9 [i_0] [i_0] [1]))) : 1));
                        var_25 = 8335559374162177511;
                        var_26 = (30 * var_9);
                    }
                }
            }
            arr_35 [i_0] [i_0] = (((((32747 ? (arr_7 [i_0] [i_0] [i_0]) : 1))) ? (arr_27 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_9] [i_9]) : 0));
            var_27 = ((0 ? 0 : 4196326750905780272));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_38 [i_0] = ((2401996159441745947 && (arr_20 [i_0 - 1])));
            arr_39 [5] [i_0] [i_12] = (14250417322803771327 + 5840146882604985083);
            arr_40 [i_0] = ((13736 == (arr_34 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        }
    }
    for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
    {
        arr_44 [i_13] = (min(((max(1, 1))), 1));
        var_28 = (min((min(14918426461788251315, -32313)), (~-32289)));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 8;i_14 += 1) /* same iter space */
    {
        var_29 |= 25879;
        var_30 = arr_25 [12] [i_14 + 3] [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14];
        var_31 = 13736;
    }
    #pragma endscop
}
