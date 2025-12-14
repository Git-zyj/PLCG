/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (~var_4);

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] [i_0] &= (min(var_7, (var_12 | 10149422468291756290)));
        var_15 = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_16 = ((var_7 ? 35681 : (3660931215 <= var_3)));
            var_17 = ((-3848245109521804528 ? 35673 : 634036088));
            var_18 = (min(var_18, (((-(29446 + 3848245109521804527))))));
            arr_6 [1] [12] &= 32767;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_0] = (!var_5);

                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_19 = ((((((max(7, -93709526477020605)) >> ((((9223372036854775803 ? var_4 : var_6)) - 1874263963071375280))))) * 0));
                            arr_19 [i_0] [i_0] [i_0] [9] [i_0] [i_0] [i_0] &= ((((~var_0) ? var_3 : (max(1, -1)))));
                        }
                        arr_20 [i_0] [4] [i_0] [i_0] [i_0 - 2] = ((!(16848865043693118631 == var_5)));
                    }
                }
            }
            arr_21 [14] &= (((-9223372036854775807 - 1) > var_5));

            /* vectorizable */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_20 = (min(var_20, (-59 / 59)));
                            arr_30 [6] [i_2] [i_6] [i_2] [6] [i_7] [i_2] = var_0;
                        }
                    }
                }
                var_21 = (min(var_21, (var_1 / var_7)));
                var_22 = (min(var_22, (4294967290 % var_12)));
                arr_31 [i_0] [i_0] = (2920217828637728011 == var_6);
            }
            arr_32 [7] [i_0] [7] &= (((var_7 | 143583845) ? var_13 : -22314));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        var_23 = var_0;
                        arr_39 [i_9] = (!-84);

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_24 -= var_6;
                            arr_43 [i_9] [i_9] = -108;
                            var_25 &= ((var_8 - (18446744073709551615 - var_11)));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_26 = -var_12;
                            arr_46 [i_10] [i_10] [8] [i_10] &= 1;
                            var_27 = ((29865 ? 10 : 36662));
                            arr_47 [i_0 - 1] [10] [i_0 - 1] [4] [i_9] = (~var_5);
                            var_28 = (~29208);
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [14] [i_9] [i_9] = (((((64 ? 29208 : var_9))) ? 65535 : (1 | 29208)));
                            arr_51 [i_10] &= 13576;
                            var_29 &= var_3;
                            var_30 = ((-19 ? 1 : var_11));
                        }
                        arr_52 [i_0] [i_9] [i_10] [i_11 - 1] &= (1 + 0);
                    }
                }
            }
            arr_53 [i_9] = (12 & var_12);
            arr_54 [i_9] [i_9] [i_0] = 26226;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_64 [i_0 - 2] [i_0 - 2] [i_9] = ((29210 ? (30741 <= var_1) : 1));
                            arr_65 [i_0 + 2] [i_0 + 2] [i_15] [i_9] [i_17] = 42;
                            arr_66 [i_0] [i_0] [i_9] = (~var_10);
                            var_31 = (max(var_31, 1));
                        }
                    }
                }
            }
        }
        for (int i_18 = 1; i_18 < 15;i_18 += 1)
        {
            var_32 = (max(var_32, ((((((((0 ? var_12 : 1)) & (-738656794 - 0)))) ? (min(8191, 10673775787817725978)) : ((~(var_2 & var_5))))))));
            var_33 = (min(var_33, ((((!(1 % var_7)))))));
        }
        arr_69 [i_0 + 1] = 62339;
        arr_70 [i_0] [17] &= (max(((var_5 ? 65535 : -6865691174998797674)), ((max(3193, -32766)))));
    }
    #pragma endscop
}
