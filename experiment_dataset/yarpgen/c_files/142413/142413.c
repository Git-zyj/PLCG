/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 > 9223372036854775798);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0])));
        var_13 = (((((9729443466497706148 ? 2690948471 : 39344))) * (((((((1604018824 / (arr_1 [i_0])))) && (((arr_1 [i_0]) < (arr_0 [i_0] [i_0])))))))));
        var_14 = (max((((((((arr_0 [i_0] [i_0]) ? var_4 : (arr_1 [i_0])))) ? (((arr_1 [i_0]) & (arr_1 [i_0]))) : (((!(arr_0 [i_0] [i_0]))))))), 1604018840));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [1] [i_0] [i_1] [14] = ((!((((12051 ? var_9 : 4513362935062548289))))));
                    var_15 |= (arr_0 [i_1] [i_2]);
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_16 |= 1608432421;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_17 = (arr_4 [i_0]);
                        arr_16 [i_0] [i_3] [i_4] [i_3] = 189;

                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            var_18 = (((var_4 ? (arr_11 [i_0] [i_4] [i_5]) : (arr_4 [i_3 - 1]))));
                            var_19 *= var_10;
                            var_20 = (!32);
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_21 += (arr_20 [i_3 - 3] [i_4] [i_7 + 1] [i_0] [i_7] [i_7] [i_7]);
                            var_22 -= (((arr_9 [i_4]) ? (arr_9 [i_5]) : (arr_9 [i_0])));
                            var_23 = (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 3]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_28 [1] [i_8 - 1] = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);

            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_24 = (!1);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_25 = (192 & 8);
                            arr_35 [i_11] [i_0] [i_9] [i_0] [i_0] |= (23919 || 116025416);
                        }
                    }
                }
                var_26 |= (min(((((arr_32 [i_0] [i_0]) * (arr_32 [i_9] [i_0])))), ((((((arr_33 [i_0] [i_0] [11] [i_8] [i_9] [i_9]) / (arr_13 [i_9] [0] [i_0])))) / (max(1604018854, var_4))))));
                var_27 = var_4;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_28 = ((-(((var_0 != (arr_19 [i_9] [i_8 - 1] [i_8 - 2]))))));
                            var_29 &= (~-15222);
                            var_30 += (arr_5 [i_0] [i_9] [i_13]);
                            var_31 += (((((15836513646363036722 / -23919) - ((((var_9 != (arr_27 [i_8]))))))) & (~2421922183535917351)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
            {
                var_32 = ((var_9 < (arr_38 [i_8] [i_8] [i_8] [i_8 - 1] [i_14])));

                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_33 *= (~-107);
                    var_34 = (((48 < (arr_14 [i_0]))));

                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((((arr_48 [i_0] [i_8 + 1] [i_14] [i_8 + 1] [i_16]) <= var_4)))));
                        var_35 = (min(var_35, ((((((arr_47 [i_0] [i_8] [i_0]) < 189)) ? (((262143 || (arr_10 [i_0])))) : (arr_10 [i_8 - 1]))))));
                        arr_51 [i_0] [13] [i_14] [i_15] [i_15] [i_15] = ((116025416 ? (arr_33 [i_0] [i_8 + 1] [i_14] [i_14] [i_15] [i_16]) : ((((var_10 > (arr_40 [i_0])))))));
                        var_36 -= ((-(arr_39 [i_8 - 2] [i_8] [i_8] [i_8 + 1] [i_8 + 1])));
                    }
                    var_37 = ((~(arr_43 [i_0] [i_8] [i_14] [i_0])));
                    arr_52 [i_0] [i_8] [i_0] [3] |= var_8;
                }
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_38 = (-(arr_34 [i_0] [i_0] [i_8 - 3] [i_8 - 3]));
                var_39 = 218;
                var_40 = (arr_13 [i_0] [i_8] [i_8]);
                var_41 &= var_11;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_42 = (-2690948471 || var_2);
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_8 - 2] [i_8 - 1] [i_8 - 3]);
                            arr_63 [i_0] [i_8] [i_17] [i_18] = ((~(arr_36 [i_8] [i_8] [i_8 - 2] [i_8])));
                            var_43 = arr_43 [i_19] [i_8 - 3] [i_17] [i_8 - 3];
                            arr_64 [1] [i_19] [i_17] [1] [i_19] = ((-(arr_27 [i_8 - 2])));
                        }
                    }
                }
            }
            var_44 = ((-((-((-5339241449964710310 ? 2654702600340640582 : 234))))));
        }
    }
    var_45 = ((var_1 ? 8426436588191233722 : (((max((var_3 && var_3), (var_3 && 14487374943980945903)))))));
    var_46 |= 26206;
    var_47 ^= ((-((((!var_8) <= var_2)))));
    #pragma endscop
}
