/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [i_1] [i_1] [i_0] = (arr_1 [i_3]);
                            var_14 = arr_8 [i_0 + 2] [i_2] [i_2 + 1] [i_4 - 1];
                            var_15 = (min(var_15, 740838265));
                            var_16 |= 740838265;
                            var_17 = -740838271;
                        }
                    }
                }
                arr_14 [i_0] [i_0] [12] |= (((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ^ -1035664813602994457));
            }
            arr_15 [i_0 + 2] [i_0] [i_0] = (((arr_6 [9] [9] [i_0 + 2] [i_0 + 2]) ? (arr_6 [i_0 + 1] [12] [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_0] = ((~(arr_7 [i_0])));
            arr_21 [i_0] [i_0] [i_0 + 1] = (~1);
        }
        var_18 -= ((~(arr_18 [i_0 + 1] [i_0 + 1])));
        arr_22 [i_0] = (arr_19 [i_0]);
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    arr_32 [i_6 - 1] [i_6] [i_8] = 9747;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_19 |= 740838244;
                                arr_40 [i_6] [i_7] [i_7] [2] [i_6] [i_10] = 1;
                                var_20 = (!(((~(arr_11 [i_6 + 2] [i_8 + 2] [i_10 + 1] [i_10])))));
                            }
                        }
                    }
                    var_21 = (min(var_21, 18446744073709551615));
                }
            }
        }
        var_22 |= (((arr_18 [1] [i_6]) <= (55799 - 9747)));
        var_23 = (arr_24 [i_6]);

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_45 [i_6] [i_11] = ((-(((!(arr_5 [i_6 + 2] [i_6 + 1]))))));

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                arr_48 [i_6] [5] [i_12] [i_6] = (9747 - 5348388686106152799);
                var_24 = 6477;
            }
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                arr_51 [i_6] [i_11] &= ((((!((((arr_17 [i_11] [i_11] [i_11]) / 1))))) ? 11605 : (arr_37 [i_13 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_25 = (arr_18 [i_6 + 1] [i_13 - 1]);
                            arr_57 [i_14] [i_6] [i_14] [i_14] [i_14] = ((~(-31618 + 59849)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    {
                        var_26 -= 227;
                        arr_62 [5] [i_11] [i_6] = ((~(arr_58 [i_6 + 2])));
                        arr_63 [i_6] [i_16] = 14;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_27 = (max(var_27, var_4));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        {
                            var_28 = ((~(arr_35 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 1])));
                            arr_75 [i_21] [0] [i_6] [i_18] [i_6] = ((-((var_10 / (arr_69 [i_6 + 2] [12] [12])))));
                            var_29 = -740838265;
                            var_30 = ((!(arr_58 [i_6 + 2])));
                        }
                    }
                }
                arr_76 [i_6] = -40;
            }
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                arr_79 [i_6] [i_22] = 55783;
                arr_80 [i_18] [i_18] |= 9223372036854775786;
                var_31 = (max(var_31, 1));
            }
            arr_81 [1] [i_6] [i_18] = ((!(arr_35 [i_6] [i_18] [i_6 - 1] [i_6] [i_18])));
            var_32 ^= var_6;
        }
    }
    #pragma endscop
}
