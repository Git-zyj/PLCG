/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((max(((-(arr_4 [i_0] [i_0] [i_2]))), (arr_7 [4] [4])))))));
                    arr_8 [i_0] [i_2] [i_0] = ((((~39244) ? (max(73, 188918941)) : -22)));
                    var_18 = (min((max(-1, 212)), (max((max(14072972089328702074, -27113)), (-1 - -18)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((447688287 ? (min(var_11, ((var_11 >> (((arr_6 [i_0] [i_3] [i_0]) - 363496499)))))) : (-769223967 >= 447688287))))));
                                arr_14 [i_2] [1] [i_2] [17] [i_4] = (arr_7 [i_0 + 1] [i_3 - 3]);
                                arr_15 [17] [i_1] [i_2] [17] [5] = min((0 - 1342), ((-((-126 ? var_2 : 3)))));
                                var_20 = (max(((447688287 ? 3847279020 : -123)), -10));
                                var_21 = (arr_6 [i_0 + 3] [i_0 + 3] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_22 = (min(var_22, var_6));
                        var_23 = (min(var_23, ((((((var_12 ? 0 : 123))) ? (arr_24 [10] [i_7] [i_8]) : (arr_6 [i_5] [2] [i_7]))))));
                        arr_26 [i_5] [i_6] [i_7] [3] [i_8 - 1] &= arr_6 [i_5] [i_5] [i_5];
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_24 = (max(var_24, (var_13 / 14072972089328702078)));
                        arr_30 [i_5] [7] [i_5] [i_5] = (max(127, 46818));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_25 = ((-1 ? -254519761 : 69));
                            arr_33 [i_10] [i_10] [10] [i_10] [3] = (arr_19 [i_5] [i_7] [1]);
                            arr_34 [i_5] [i_6] [i_6] [i_9] [i_7] [i_10] = -var_8;
                        }
                        for (int i_11 = 4; i_11 < 10;i_11 += 1)
                        {
                            var_26 = var_13;
                            var_27 = ((-((447688260 / (((-123 ? -21453 : 1338373421)))))));
                        }
                        var_28 += ((((max((arr_19 [0] [i_7] [i_9]), -30))) ? -16 : ((123 ? 211934032 : -2119367441))));
                    }
                    arr_37 [i_5] [i_5] [10] [3] = (arr_11 [i_7]);
                    var_29 = (min(1285494681865511373, (((11 >> (142 - 140))))));
                    var_30 *= (((arr_27 [i_5] [i_5] [i_6] [i_7]) * ((max(0, -3)))));
                }
            }
        }
    }
    var_31 = var_16;
    var_32 = (min(var_32, var_11));

    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        var_33 = (max(var_33, ((((arr_18 [i_12]) % (arr_16 [i_12 + 1]))))));
        var_34 -= ((!((min((arr_10 [i_12] [i_12] [i_12] [i_12]), -2119367437)))));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        var_35 = (max(var_35, (arr_1 [i_13] [i_13])));
        arr_43 [i_13] [i_13] = 9093;
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_36 = 9110;
        arr_46 [i_14] = (((((2119367436 ? 4294967295 : 14028143582422589028))) ? (max((arr_11 [i_14]), (((arr_2 [i_14] [i_14]) ? (arr_6 [i_14] [i_14] [3]) : (arr_6 [i_14] [i_14] [i_14]))))) : (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_37 = (max((!-16), ((11 != ((min(72, (arr_11 [i_15]))))))));
        arr_50 [i_15] = (arr_40 [i_15]);
        var_38 = (max(var_38, 12));
        var_39 += arr_3 [i_15];
        var_40 = (max(var_8, (arr_13 [i_15] [i_15] [6] [6] [i_15] [i_15] [i_15])));
    }
    #pragma endscop
}
