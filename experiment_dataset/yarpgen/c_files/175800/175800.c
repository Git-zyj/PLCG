/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_3 + 1] [i_1] [i_1] [i_0] = var_7;
                        arr_14 [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = var_10;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_11 = (arr_17 [i_0] [i_7]);
                                var_12 += var_4;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_13 = (max(var_13, ((((-32767 - 1) | (((arr_16 [i_5] [i_5]) ^ var_4)))))));
                        var_14 = (~165);
                    }
                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        var_15 = (max(var_15, (((70 / ((-89 ? 158 : 41718)))))));
                        arr_31 [i_5] = (arr_5 [i_9] [i_0] [i_0]);
                        arr_32 [i_0] = (((arr_3 [i_5]) >= (arr_7 [i_0])));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_16 -= (((((75 ? var_7 : (arr_7 [i_9]))) * 100)));
                            var_17 = (arr_5 [i_10] [i_4 + 1] [i_4 + 2]);
                            var_18 = (max((arr_23 [i_0] [i_4 + 1] [i_0] [i_9 - 1] [i_10]), -16237));
                        }
                        var_19 = 2689;
                    }
                    var_20 = (((var_3 & (-3977071909129409165 == var_9))));
                }
            }
        }
        var_21 = (max(var_21, (((~(var_9 <= var_5))))));
    }
    for (int i_11 = 2; i_11 < 17;i_11 += 1)
    {
        var_22 = (arr_39 [12] [i_11 - 2]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_23 = (max(((var_9 + (arr_39 [i_11] [i_11]))), (((~((~(arr_38 [i_11] [i_11]))))))));
                    var_24 = (((var_6 + var_5) ^ 41707));
                }
            }
        }
        var_25 = (~100);
    }

    for (int i_14 = 3; i_14 < 10;i_14 += 1)
    {
        var_26 *= (((arr_12 [i_14] [0] [i_14 + 1] [0] [i_14 + 1] [i_14 + 1]) ? -1 : var_1));
        var_27 = (max(var_27, (((((((52 ? var_8 : var_4)) ? (var_5 - 1191183645) : (var_7 - 11420))))))));
        var_28 = (min(var_28, ((((((max(0, (arr_7 [6])))) ? var_10 : var_4))))));
        var_29 = (0 < 16130);
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_30 = (min(var_30, (arr_49 [i_15])));
        var_31 = var_9;
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_32 = (max(var_32, ((max(0, var_7)))));
                            var_33 = (arr_51 [i_16] [i_16]);
                        }
                    }
                }

                for (int i_20 = 2; i_20 < 13;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 14;i_22 += 1)
                        {
                            {
                                var_34 = (min(var_34, (((((((min(var_6, 2305843009213693952)) * (!var_2)))) ? (91 - 64512) : var_3)))));
                                arr_70 [i_16] [i_16] [i_16] [i_21 - 1] [i_16] |= var_5;
                            }
                        }
                    }
                    var_35 = (min(var_35, ((((arr_49 [i_20 - 2]) ? ((1 ? 55 : (arr_49 [i_20 + 1]))) : (arr_49 [i_20 + 1]))))));

                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        arr_74 [i_16] [i_16] [i_17] [i_16] [i_16] &= var_10;
                        var_36 = (min((arr_56 [i_16] [i_20] [i_17]), (((~-1048576) - 650270390))));
                        var_37 = (min(var_37, (arr_47 [i_16])));
                    }
                    /* vectorizable */
                    for (int i_24 = 1; i_24 < 13;i_24 += 1)
                    {

                        for (int i_25 = 2; i_25 < 12;i_25 += 1)
                        {
                            var_38 = (((((var_7 ^ (arr_57 [i_16] [i_17] [i_16] [i_17])))) ? (0 & 4467726473883603760) : (arr_57 [i_24 + 1] [i_25 - 1] [i_25 + 2] [i_25 + 1])));
                            var_39 = ((-8693202158387583210 <= (arr_75 [i_20 + 1] [i_20 + 1] [i_17] [i_20 - 2] [i_20])));
                        }
                        var_40 = (arr_53 [i_16] [i_16]);
                    }
                }
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    arr_82 [i_16] [i_17] = var_4;
                    var_41 = (min(var_41, var_0));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 14;i_28 += 1)
                        {
                            {
                                var_42 = (max(var_42, (arr_43 [i_16] [i_17])));
                                arr_89 [i_16] [i_17] [i_17] [i_17] [i_28] [i_16] [i_17] = (231 ^ 0);
                            }
                        }
                    }
                    var_43 = (min(var_43, var_9));
                }

                for (int i_29 = 0; i_29 < 14;i_29 += 1)
                {
                    var_44 ^= (max((arr_66 [i_16] [i_17] [i_29] [i_16]), (((arr_66 [i_16] [i_16] [i_16] [i_16]) ^ var_3))));
                    var_45 = (~var_1);
                    arr_94 [i_17] [i_17] [i_17] = ((var_9 + (var_2 == var_4)));
                }
            }
        }
    }
    #pragma endscop
}
