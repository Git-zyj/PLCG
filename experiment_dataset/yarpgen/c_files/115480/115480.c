/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~(32512 <= 18)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = (!2093232712);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = 7168;
                        var_22 -= max((~24576), 1);
                    }
                }
            }
            var_23 = (min(var_23, ((((max((16777212 | var_11), 1591331161)) >> ((((((min(-6391, (arr_0 [i_1] [i_1])))) ? -1 : (arr_5 [i_0] [i_0] [i_1]))) + 16)))))));
            var_24 = (min(1, (var_8 == -16777213)));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_25 = -16777213;

            /* vectorizable */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_26 = 1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_27 = (arr_11 [i_6]);
                            var_28 = (min(var_28, ((((2 ^ 16777212) ? 1268 : var_2)))));
                            var_29 = (((1 ? 1 : 64268)) > 64267);
                        }
                    }
                }
                var_30 = ((1 >> (6144 - 6135)));
                var_31 -= arr_11 [i_5];
                var_32 -= (((var_15 ? (arr_16 [i_4] [i_0] [i_4] [i_4] [i_5]) : var_0)));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_33 -= (arr_14 [11] [11] [i_8]);
                var_34 -= (~20);
                arr_24 [i_0] [1] = (max(1, ((((2013265920 ? 2147483634 : var_4)) % ((11 ? 209 : 0))))));
            }
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_28 [12] [i_0] = (max(1712452612, 626007618));
            arr_29 [i_0] = var_16;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_33 [i_0] [i_10] |= ((128 && (((var_8 ? 16128 : 236)))));
            arr_34 [i_0] [9] [i_10] = ((((0 ? var_17 : (arr_1 [i_10]))) & (1 >= 11621414368254300704)));
            var_35 ^= (((arr_14 [i_0] [i_0] [13]) ? (((arr_3 [i_10]) ? 0 : 10586975278084881760)) : var_12));
            var_36 += 202;
            var_37 = (((44 ? (-2147483647 - 1) : (arr_3 [i_10]))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 4; i_12 < 14;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    var_38 = (max(var_38, ((((((arr_31 [i_0] [i_0] [i_0]) - (arr_23 [1] [2] [i_12 + 1]))) * (((209 ? (arr_19 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : 65))))))));
                    var_39 = (min(var_39, 203));
                    var_40 = (((2761598621 ? (arr_13 [i_0]) : 1)));
                }
                var_41 = ((var_17 ? ((1 ? var_12 : (arr_23 [i_0] [1] [i_12 + 2]))) : var_5));
                var_42 = ((arr_10 [i_12 - 3] [i_11]) | 1);
            }
            var_43 -= (((arr_4 [i_11] [i_11] [i_0]) ? (~var_12) : 190));
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_44 |= ((255 ? 1 : -37));
                            var_45 = (min(var_45, (((255 ? -1 : 16999802715694885272)))));
                        }
                    }
                }
            }
            var_46 *= (((arr_17 [i_0]) ? 15872 : (arr_17 [i_0])));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
        {
            var_47 = (((arr_17 [i_17]) ? (arr_17 [i_0]) : (arr_6 [i_17] [i_0] [i_0])));
            var_48 = (arr_0 [i_17] [i_0]);
            var_49 = ((!(((1008 ? 5 : 1)))));
        }
        var_50 -= (((((((-(arr_31 [i_0] [6] [i_0])))) ? (50081 >= 17406913662056713970) : ((var_5 ? var_4 : 65528)))) & (((max(1, 65519))))));
    }
    var_51 = 209;
    var_52 = (!50081);
    var_53 = 208;
    #pragma endscop
}
