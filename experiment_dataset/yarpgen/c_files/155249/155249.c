/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 *= var_7;
        arr_3 [i_0 - 2] [i_0 + 1] = var_1;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_15 = ((((max(var_6, 31))) / 255));
            var_16 = (((var_8 * var_5) ? 247 : ((var_2 ? (255 >= 255) : ((9199 ? var_1 : (arr_5 [i_1])))))));
        }
        var_17 = ((((((((max(8, 8))) || 1561847224809592626)))) <= (((((26 ? 739964285 : 4294967295))) ? (arr_7 [0] [i_1]) : var_10))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    var_18 = (min((((8 ? var_11 : (arr_1 [i_1])))), (min(755855128, ((-1 ? 1410295275882298031 : 1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 |= ((!(((9188 ? -1 : var_2)))));
                                arr_19 [i_1] = ((1 >= (((262143 == (arr_13 [i_4 + 2] [i_6] [1] [3]))))));
                                var_20 += (755855128 % 7);
                                var_21 = (max(var_21, 4946932997185708072));
                            }
                        }
                    }
                    arr_20 [i_1] [i_3] [8] = ((~(((!(var_0 & var_1))))));
                    var_22 *= 0;

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_23 |= 755855128;
                        arr_24 [i_1] [i_1] = 4294967295;
                        var_24 = (max(var_24, (arr_21 [4] [i_7 + 1] [i_4 + 1])));
                        var_25 = 1;
                        var_26 = (((((arr_2 [i_4 - 2]) > 107))) - (arr_2 [i_4 + 2]));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_27 = ((var_0 % (arr_10 [i_4 + 2] [i_1] [i_4])));
                        var_28 = (min(var_28, 52858));
                        arr_28 [i_8] [i_8] [i_1] [i_1] [i_3] [i_1] = var_3;
                        var_29 = (((((56323 ? 1 : (arr_18 [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4] [i_4] [i_4 - 2])))) ? (-262144 || var_3) : 12902292615959458646));
                    }
                }
            }
        }
        arr_29 [i_1] = var_9;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_30 = (max(var_30, (-2147483647 - 1)));
        var_31 = 1;

        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            var_32 = ((var_0 - (arr_35 [i_9 - 1] [3] [i_10])));

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_33 = 1;
                arr_39 [i_9] = ((0 < (arr_35 [i_11] [1] [i_9 - 1])));
                var_34 = (-13434 - var_5);

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_42 [i_9] [i_9] [19] = (((arr_37 [i_10 - 1] [i_10 - 1] [i_11]) != (arr_31 [i_10 - 1])));
                    arr_43 [i_12] [i_11] [i_9] [i_9] [i_9] [3] = ((var_4 ? var_7 : 59509238));
                    var_35 = (-6317073067817899744 - var_0);
                }
                for (int i_13 = 4; i_13 < 20;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_36 = -19;
                        var_37 = ((262143 ? var_5 : (arr_45 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 + 1])));
                        var_38 = (min(var_38, 230));
                    }
                    var_39 = 9;
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_40 = (((arr_31 [i_9 - 1]) ? var_0 : (arr_31 [i_9])));
                    arr_50 [i_9] = (((var_11 ? 65535 : var_9)));

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_54 [i_9] [i_15] [i_11] [i_9 + 1] [i_9] = var_4;
                        arr_55 [i_16] [i_9] [i_16] [i_16] [i_16] = var_11;
                        var_41 = (((arr_53 [i_9] [i_9 + 1]) ? 107 : var_5));
                        var_42 -= 18446744073709551615;
                        arr_56 [i_16] [i_9] [i_9] [i_9 + 1] = 12734617680004674353;
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_43 = (((((6546961260795023964 ? var_12 : 3047638052809950627))) ? 124 : 1));
                        arr_60 [i_9] [i_9] [i_9] [6] [i_9] [1] = var_2;
                    }
                }
            }
        }
    }
    var_44 = var_0;
    #pragma endscop
}
