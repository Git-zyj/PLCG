/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((+((((((arr_0 [15]) - 18446744073709551603))) ? ((((var_1 + 2147483647) >> (var_12 + 3979)))) : (arr_3 [i_0] [i_1] [i_1]))))))));
                var_20 = (max(var_20, (~-1)));
            }
        }
    }
    var_21 = (max(var_21, ((((((-(min(var_14, var_7))))) | (max(-18014398509481983, (((-1 ? var_17 : 559829771))))))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_18 [1] [1] [6] [8] [8] [1] [9] = 3;
                            var_22 = (min(var_22, (~8745616791671996528)));
                            var_23 = (!var_14);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = (max(var_24, 1));
                            var_25 = ((!(((1 ? 21 : 1125899906842624)))));
                            var_26 = ((~(arr_2 [i_5 - 1] [i_5 + 1])));
                            arr_21 [i_2] [1] [i_4] [i_5] [4] = ((-(!var_7)));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_27 = (max(var_27, 2047));
                            arr_26 [1] [4] [i_5] [i_4] [4] [6] = ((!(((var_11 + (arr_4 [0]))))));
                            arr_27 [i_8] [i_5] |= (arr_16 [i_5 - 1] [1] [i_5] [7] [i_5 + 1]);
                            var_28 = (min(var_28, (arr_25 [5] [i_4] [i_5 + 1] [5] [i_8] [8])));
                        }
                        var_29 = (min(var_29, ((-(arr_20 [0] [i_3] [i_4] [i_5 - 1] [3] [i_2] [i_2])))));
                    }
                    var_30 = (min(var_30, (((((!(arr_1 [10]))) ? ((213817771689204683 ? (arr_2 [i_4] [15]) : -64)) : 780997061)))));
                    arr_28 [9] [6] [8] = ((var_10 ? (arr_14 [i_2] [2] [3] [7]) : ((((-16 + 2147483647) << (11 - 11))))));
                }
            }
        }
        var_31 = 1;
        arr_29 [5] = -121;
        arr_30 [i_2] = (((arr_5 [5] [i_2]) ? 8745616791671996528 : (arr_10 [i_2])));
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            arr_35 [i_9] [4] &= (((arr_31 [i_9 + 2]) ? var_7 : (arr_31 [i_9 + 2])));
            var_32 = (((18446744073709551582 - 8) ? (41 > 95) : (arr_33 [i_9 - 1] [11])));
            var_33 = ((130 ? 255 : 33));
            arr_36 [i_9] [17] = var_6;
            var_34 = (max(var_34, 21));
        }
        arr_37 [i_9] = (arr_33 [i_9] [18]);

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_41 [19] [i_11] [5] = ((~(-3 <= 8444249301319680)));
            arr_42 [i_11] &= (max((-1 & var_18), var_8));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
        {
            var_35 = (((((var_6 + (arr_44 [5]))) - var_15)));

            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_48 [i_9] [i_12] [i_13] = -17728;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_36 &= 1;
                            var_37 = var_10;
                            var_38 = 15;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
        {
            var_39 = -576285456;
            var_40 = ((2827953837440166901 ? 78 : (arr_55 [i_9 + 1])));
        }
        var_41 = ((var_0 || ((max((arr_55 [i_9]), -18446744073709551586)))));
    }
    var_42 = ((((max(((max(var_12, var_14))), var_5))) ? (((112 / 147) ? (1811063935699678020 + var_1) : -121)) : var_0));
    #pragma endscop
}
