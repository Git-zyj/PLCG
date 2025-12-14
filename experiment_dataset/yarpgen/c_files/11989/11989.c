/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((max(1289445593, var_2)))) ? (min(((var_1 ^ (arr_1 [i_0]))), (max((arr_1 [i_0]), var_9)))) : ((((!var_3) ? -257685634 : ((var_5 ? (arr_1 [i_0]) : var_8)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((-(arr_5 [i_2 - 3] [i_2 - 3])));
                var_12 = (max(var_12, ((((((var_8 % (arr_6 [i_0] [i_1] [i_2 - 1])))) ? 50 : (arr_3 [i_0] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_13 = (var_6 ? var_1 : var_4);
                            var_14 = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_17 [i_6] [i_1] [i_2] [i_5 - 2] [i_6] = (arr_3 [i_6] [i_5 + 3] [i_2]);
                            arr_18 [i_0] [i_6] [i_2 - 1] [i_5] [i_6] = ((((((arr_16 [i_0] [i_2 + 1] [i_2 - 1] [i_5 + 2] [i_6]) < var_7))) % (arr_3 [i_1] [i_2 - 1] [i_5 - 1])));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_1] [i_1] [i_7]);
                            var_15 = ((!(var_10 == var_10)));
                        }
                    }
                }
                var_16 = var_3;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_17 = (arr_29 [i_0] [i_1] [i_7 - 1]);
                            var_18 *= (~-1);
                            var_19 -= ((!(((98 - (arr_6 [i_10] [i_7 + 1] [i_0]))))));
                        }
                    }
                }
            }
            var_20 = ((-(arr_21 [14] [i_1] [i_0] [i_1] [14])));
            arr_34 [i_1] [i_0] = (arr_33 [i_0] [i_1] [i_1]);
            var_21 = (arr_29 [i_0] [i_1] [i_1]);
        }
        arr_35 [i_0] = (min(-51, (((((arr_7 [i_0] [i_0] [i_0]) - (arr_33 [i_0] [i_0] [i_0]))) + 50395))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_22 = (max(var_22, ((((max(var_8, (arr_22 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (((arr_36 [i_12]) ? (arr_38 [i_12]) : (arr_32 [i_12]))) : (arr_0 [i_12] [i_12])))));
        arr_39 [i_12] = ((-(((min((arr_37 [i_12] [i_12]), (arr_5 [i_12] [i_12]))) ^ (((18446744073709551615 ? -257685641 : 1)))))));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_23 = ((((((var_8 ^ (arr_9 [i_12] [i_12] [i_13] [i_12]))))) - var_7));
                    arr_44 [i_13] [i_13 - 1] [i_12] [i_13] = ((min(-var_6, (arr_31 [i_14] [i_14] [i_14] [i_14] [i_13]))));
                    var_24 *= (min(var_8, 2908601389793392025));

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_25 = var_10;
                        var_26 = (max(var_26, ((((((1634314305 ? (arr_40 [i_12] [6]) : -1602564002305702224))) || 5718945095703558868)))));
                        var_27 = (max(var_27, (-8215865158043836134 != var_2)));
                        var_28 *= ((var_7 ? var_7 : (arr_12 [i_13 + 1] [i_13] [i_13] [8] [i_13 + 2] [i_12])));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        var_29 ^= (((((arr_48 [i_16]) ? var_3 : var_2)) / ((((arr_37 [i_12] [i_12]) ? (arr_32 [i_12]) : (arr_30 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))));
                        var_30 = ((var_4 - (arr_15 [i_12] [i_13] [i_13 + 2] [i_13 - 1])));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, ((((~-257685603) ? (min(var_10, (arr_11 [i_14] [i_17]))) : (arr_25 [i_14] [i_14] [i_13 + 2] [i_17]))))));
                        var_32 ^= (((!11299349532212758776) ? (arr_47 [i_12] [i_12] [i_12] [i_12] [i_12]) : ((var_11 / (arr_47 [i_17] [i_17] [i_14] [i_13] [i_12])))));
                        var_33 = (arr_14 [i_12] [i_13] [i_13] [i_17] [i_13]);
                    }
                }
            }
        }
        arr_53 [i_12] = ((arr_51 [i_12] [2]) + ((var_6 ? (var_8 + var_2) : (arr_20 [i_12] [i_12]))));
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_34 = 12083408060162129155;
        var_35 = ((+(((arr_10 [i_18 + 3] [0] [i_18 + 4]) ? (arr_16 [i_18] [i_18] [i_18] [15] [i_18]) : (arr_54 [i_18])))));
    }
    for (int i_19 = 2; i_19 < 14;i_19 += 1) /* same iter space */
    {
        arr_60 [i_19 + 3] [i_19] = ((-((((((arr_22 [i_19] [i_19] [i_19] [i_19 - 2] [i_19]) ? (arr_23 [i_19] [i_19] [i_19 + 4] [i_19] [i_19 + 4] [i_19 + 4]) : 11))) ? var_7 : (arr_29 [i_19] [i_19] [i_19 + 4])))));
        var_36 = (min(var_36, 9223372036854775807));
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                {
                    var_37 -= (((min(var_3, ((((arr_28 [i_19] [i_21]) != (arr_21 [i_19] [i_19] [i_19 + 4] [i_19 - 1] [i_19])))))) != (var_11 || var_5)));

                    for (int i_22 = 1; i_22 < 16;i_22 += 1)
                    {
                        arr_68 [i_19] [i_20] [i_19] [i_21] [i_19] = (((((((-(arr_7 [i_19] [i_20 - 3] [i_21]))) || (var_10 == var_4))))));
                        var_38 = ((+(((min((arr_11 [i_21] [i_22]), var_3)) + (((arr_22 [i_19] [i_19] [i_21] [i_22] [i_22]) ? var_2 : var_3))))));
                        var_39 = ((-(((!(((var_2 ? 65535 : (arr_58 [i_19 + 2] [i_19 + 2])))))))));
                    }
                }
            }
        }
    }
    var_40 = ((~(max((max(var_4, var_0)), var_6))));
    var_41 = var_11;
    #pragma endscop
}
