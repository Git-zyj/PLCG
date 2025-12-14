/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((max(var_17, var_13))) ? (max(var_16, var_15)) : (-45 / var_10))) >> (((((var_17 ? var_8 : var_18)) != (max(var_12, var_11)))))));
    var_20 *= var_15;
    var_21 = (min(var_21, (min(402309700, var_12))));
    var_22 = (max(((max((!var_17), 3428038486))), (min(var_4, 2885712801043116325))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 -= var_8;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_24 = var_8;
                                var_25 = (!var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((((min(var_14, var_13))) ? 32761 : var_13)))));
                                arr_17 [i_0 + 1] [i_1] [i_2] [1] [1] [i_1] [1] = (((arr_5 [i_2] [i_2] [i_5] [i_0 - 1]) / (((max(var_13, var_4))))));
                            }
                        }
                    }
                    arr_18 [6] [i_2] [i_2] [i_2] = (max((min(var_15, ((((-3 + 2147483647) >> (32767 - 32743)))))), (((-((18446744073709551607 ? -9 : 0)))))));
                }
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    arr_23 [i_0] = ((((max(var_4, var_12))) ? ((((arr_11 [i_0] [i_1]) ? var_9 : var_8))) : (2147483647 % var_14)));
                    arr_24 [i_0 + 1] [i_0] = (((((var_16 / var_14) >> ((((max(var_1, 1))) - 60859)))) >> (((((var_9 + 2147483647) >> (((-1327355749 % -1327355778) + 1327355750)))) - 923894197))));
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_27 = (min(var_27, (((+(((var_8 + 2147483647) << (var_15 - 14900065963868236052))))))));
                    var_28 = (((arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) && (arr_2 [i_0 + 1] [i_0] [i_0 + 1])));
                }
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    arr_31 [8] [i_0 - 1] = (max((max(65520, 26799)), (!604626264)));
                    var_29 = var_3;
                }
                for (int i_10 = 1; i_10 < 7;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            {
                                var_30 = (arr_35 [i_10] [i_1] [i_1] [i_1]);
                                var_31 = -var_14;
                                arr_41 [i_0 - 1] [i_1] [i_10] [i_11] [i_12] = ((!(((8 ? -10008 : 1327355775)))));
                            }
                        }
                    }
                    var_32 = var_18;
                    var_33 -= (var_6 >> (((~5635) + 5640)));
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    arr_46 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] = var_6;

                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        arr_49 [i_0 - 1] [2] [i_0 + 1] [2] [i_0] = (var_15 & var_3);
                        arr_50 [i_0] [i_0 + 1] [i_0] [1] [i_14 - 1] = (arr_25 [i_0] [i_1] [0] [i_14]);
                        var_34 &= (var_0 ? -101 : (arr_2 [i_13] [i_13 - 1] [7]));
                    }
                    var_35 |= (((min(((var_5 ? 4 : var_7)), var_5)) / -19710));
                }
            }
        }
    }
    #pragma endscop
}
