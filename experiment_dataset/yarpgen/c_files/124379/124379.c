/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = ((var_0 ? var_2 : (((arr_4 [i_0]) * 0))));
            var_20 = (((((0 ? 1 : -1))) ? (((arr_5 [i_0] [3]) / (arr_4 [i_0]))) : -6));
            arr_7 [i_0] = (max(0, (max(var_18, ((0 ? -1611 : 973120435))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 = (min(var_21, 60));
                            var_22 = (arr_13 [i_0]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [1] [i_3] = ((-1 ? 1 : var_12));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_23 &= ((((min((~var_5), ((max(-973120436, (arr_15 [i_5] [i_5] [i_5] [6] [i_0] [i_0] [i_0]))))))) ? (((~-64) | ((2305843009213693951 ? 39 : (arr_8 [i_0] [i_1] [i_5] [i_0]))))) : ((((((((arr_0 [i_0]) ? var_12 : 0))) || ((min(0, 20759)))))))));
                var_24 = (min(var_24, -12871));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_25 = ((((((arr_17 [13] [i_1] [i_0]) ? 31 : 39))) ? (9163617130020496099 + -2305843009213693939) : ((9178459429539443681 ? 80 : (-9223372036854775807 - 1)))));
                            arr_25 [i_0] = 1;
                            var_26 |= (~((32767 + (arr_13 [i_1]))));
                        }
                    }
                }
                var_27 = ((((((arr_2 [i_1]) / 623665115))) ? -2419 : (min(var_4, var_9))));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_28 = -32767;
                var_29 &= (max(var_12, (((arr_6 [i_9] [i_1] [i_0]) ? ((var_14 ? var_7 : -973120436)) : var_5))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_30 += (arr_2 [i_1]);
                    var_31 = ((-32741 ? (~4095) : var_17));
                    var_32 = 135;
                    arr_30 [i_0] [i_1] [i_9] [i_1] = ((var_11 ? 55093 : 73));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_33 = ((max(var_1, (arr_13 [i_0]))));
                    var_34 = ((((max((arr_13 [i_0]), 14211085750709794052))) ? 12851 : ((((((arr_18 [i_0] [i_0] [i_0]) ? var_9 : 58))) | ((65526 ? 0 : 0))))));
                }
                for (int i_12 = 3; i_12 < 12;i_12 += 1)
                {
                    var_35 -= (((-22662 | -9178459429539443679) ? -43 : ((var_7 ? ((((!(arr_14 [i_0] [i_0] [1] [1] [13] [i_12]))))) : var_7))));
                    arr_36 [i_9] [i_1] [i_9] [9] [i_12] [i_12 - 1] = 1;
                    var_36 = (arr_11 [i_0] [i_1] [1] [i_12 + 2] [i_1] [i_9]);
                    var_37 *= (arr_4 [i_1]);
                }
            }
        }
        var_38 = (((7677 ^ 4433971033504414241) ? 12852 : (arr_6 [i_0] [i_0] [i_0])));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_39 = (arr_29 [i_13] [8] [i_13] [i_13] [i_13]);
        var_40 = 6;
    }
    var_41 = (max(((min(2217675287, 149228132))), (((((var_5 ? 0 : var_18))) ? ((0 ? var_1 : 13835058055282163712)) : var_10))));
    var_42 = var_11;

    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_43 = (arr_41 [i_14]);
        var_44 = ((+((var_4 ? (arr_41 [i_14]) : 68719476735))));
    }
    #pragma endscop
}
