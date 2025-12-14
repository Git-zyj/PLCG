/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((((var_8 ? var_3 : var_5))) ? (3965365518279898347 << var_10) : (!var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((var_10 ? ((((!(arr_2 [i_0]))))) : var_3));
        var_14 = (((((-2323419095345751534 ? var_11 : 6556648382770019944))) || ((!(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_15 += ((var_11 != (((arr_4 [i_2] [4]) ? var_11 : var_0))));
                            var_16 = ((-(arr_2 [i_2 - 3])));
                            arr_16 [i_0] [i_0] [3] [i_0] [3] [i_0] = ((var_2 || (arr_4 [i_0] [10])));
                        }
                    }
                }
            }
            var_17 = (((var_3 == var_0) % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])));
        }
        arr_17 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        arr_20 [i_5] = ((min(-var_10, (arr_18 [i_5 + 3]))));
        var_18 += (arr_18 [i_5]);
        var_19 |= ((~(((var_10 <= (arr_18 [i_5 - 4]))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_20 *= (!12166117589720156627);
                        var_21 = (((~(arr_22 [i_5 - 2] [i_6]))) * (((min((arr_27 [i_5] [i_5] [i_5 - 1]), var_2)))));
                        arr_29 [i_6] [i_5 - 3] [i_6] [i_7] [i_8] = (((((12166117589720156630 & (((arr_21 [i_6] [i_6]) ? var_10 : var_11))))) ? ((-(max((arr_18 [i_6]), var_4)))) : var_9));

                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            arr_34 [i_5] [i_5 - 2] [i_5] [i_6] [i_6] = var_11;
                            var_22 |= ((0 ? var_0 : ((~(arr_32 [i_5])))));
                            var_23 = var_3;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_24 = (((~var_1) ? (min(var_4, (arr_31 [i_5] [i_5] [i_5 + 1] [i_5 - 3] [i_6] [i_5 + 1]))) : ((((!(((var_11 ? (arr_22 [i_7] [i_6]) : (arr_37 [i_5] [i_5] [i_5] [i_5] [i_5]))))))))));
                            arr_39 [9] [i_8] [i_6] [i_8] = (((arr_33 [i_5] [i_6] [i_7] [i_8] [i_10] [i_6 + 1] [i_5]) | (~var_10)));
                            var_25 = 6280626483989394989;
                            var_26 = (min(-97, ((max(var_1, (!15112))))));
                            arr_40 [i_6] [i_5] [i_7] [i_5] [i_6] = (((!var_8) << -var_2));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_27 &= var_0;
                            var_28 = var_5;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_47 [i_5] [i_6] [i_7] [i_5] [i_6] = (((((var_5 + (arr_22 [i_6] [i_6])))) ? 99 : var_10));
                            var_29 -= (arr_27 [i_5] [i_6 - 2] [i_8]);
                        }
                        var_30 = (max((((!(arr_44 [i_6] [i_5 - 2] [i_5 - 2] [i_6] [i_6 - 2])))), 6556648382770019944));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_31 -= (((arr_22 [i_13] [8]) < var_7));
        var_32 = (--1316850579);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_33 = (+(((arr_51 [i_14]) ? var_7 : -954018403)));
        var_34 = ((var_5 ? var_3 : (arr_53 [i_14])));
        arr_55 [i_14] [i_14] = 9247034720139173621;
    }
    var_35 = (((((var_8 >= var_4) ? -576460752303423487 : ((var_6 ? var_6 : var_10)))) >= var_0));
    #pragma endscop
}
