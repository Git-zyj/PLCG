/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((var_0 ? 1729382256910270464 : -14237))) / var_10));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 *= 0;
        var_16 -= (var_7 >= 65535);
        var_17 = (max(var_17, ((((65534 < 65535) < var_10)))));
        var_18 = ((18806 ? -var_5 : (((var_3 ? (arr_2 [8]) : var_0)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_19 = (max(var_19, ((((~(arr_3 [8] [i_2])))))));
                var_20 = (max(var_20, (~7)));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((((65535 != 7720562781728069495) ? 0 : 46722)))));
                            var_22 *= ((var_1 ? var_1 : ((((!((((-127 - 1) + 46718)))))))));
                            var_23 -= (min((0 > -837731929), var_6));
                        }
                    }
                }
                arr_13 [8] |= ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_8 : (var_13 - var_9)))) ? ((((max(var_5, 18810))) ? (arr_3 [0] [i_1]) : var_2)) : var_2));
                var_24 ^= (((((-35 ? var_5 : (arr_3 [12] [12])))) ? (arr_2 [1]) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : 18797))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        var_25 |= (((arr_12 [i_7 + 2] [i_0] [i_7 + 1] [i_6] [i_0]) ? ((-(arr_12 [i_7 + 2] [i_7 - 2] [i_7 + 1] [i_6] [i_6]))) : ((((arr_14 [1] [12] [i_7 + 1] [i_7 + 3] [1]) - var_11)))));
                        var_26 = (max(var_26, ((!(var_10 ^ var_5)))));
                        arr_19 [i_0] [i_0] [8] [8] [i_7] &= ((((!(arr_14 [i_0] [i_6] [i_7 - 3] [i_7 + 1] [2]))) ? ((var_2 - (arr_14 [i_0] [i_7] [i_7 - 3] [i_7 + 1] [12]))) : (!65535)));
                        var_27 &= (var_2 < var_0);
                    }

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_28 &= ((((max(18806, 15))) > (((((32767 < (arr_22 [6])))) >> (var_3 - 3622521412862262600)))));
                        var_29 &= (-381640477 >= -381640479);
                        arr_24 [i_0] [10] [i_3] [10] [10] &= (((725781897 ? var_6 : (arr_8 [0] [i_8 - 2] [0]))));
                        var_30 &= ((~(4294967288 < 9)));
                        arr_25 [10] [i_1] |= ((-1841228695807919491 ? 432345564227567616 : (min(var_11, ((var_4 ? (arr_1 [i_1] [i_6]) : var_5))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_28 [i_1] [2] |= var_6;
                        var_31 *= (381640478 <= 18807);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_1] [i_1] [1] &= (arr_4 [2]);
                        var_32 &= (min(var_4, ((-29979 ? var_12 : (arr_22 [6])))));
                        arr_32 [i_6] [8] [i_0] &= (((arr_21 [0] [i_0] [i_1] [4] [i_6] [i_1] [i_10]) | (((arr_21 [i_0] [i_1] [i_3] [0] [i_3] [i_6] [i_10]) ? var_4 : var_10))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_33 *= (min(830308956, 2139311549));
                        var_34 |= arr_20 [i_0] [i_1] [i_3] [1] [i_11];
                    }
                    var_35 |= ((var_5 > (arr_10 [i_0] [i_0] [i_0] [i_0])));
                    var_36 *= (((((-var_12 ? ((min(18809, var_4))) : 18797))) * var_0));
                }
                var_37 = (max(var_37, ((((var_6 + var_10) <= (81 - var_3))))));
            }
            var_38 = (min(var_38, ((((((var_4 ? 65535 : var_2))) >= var_3)))));
            var_39 = (max(var_39, (arr_0 [6] [i_1])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_40 &= var_7;
            var_41 = (min(var_41, (((-221719901 ? var_9 : var_9)))));
        }
    }
    var_42 = (min(var_42, var_2));

    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_43 += ((((-1 ? 3109328778945614060 : -84)) <= (arr_40 [i_13] [i_13])));
        var_44 |= -19441;
    }
    #pragma endscop
}
