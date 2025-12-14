/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 111;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [3] [3] [3] = 1;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1 - 1] [i_2] [i_1 - 1] [i_3] = (arr_1 [i_0]);
                            arr_14 [i_4] &= 1;
                            arr_15 [i_3] [i_0] [i_3] [i_2 - 1] [i_3] [i_0] [i_0] = ((239 & ((1 ? 1 : -1))));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = 4703141975424060807;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_0] = -1924415399;
            arr_20 [22] [i_5] [i_0] = ((var_16 ? ((-(1 <= 1))) : ((((var_14 + 1) && (((11049758866067652330 ? 1 : var_5))))))));
            arr_21 [i_0] [i_0] [i_5] = (max((!65), (1 | 1)));
        }
        arr_22 [i_0] [i_0] = (((((-((1 ? var_13 : 697565076578514190))))) ? (max(1, (max(42, var_13)))) : (28346 ^ 1)));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_32 [i_6] [i_7] [i_6] [i_6] = (max((1 / 697565076578514190), ((min((max(40, -1048576)), ((169 ? (arr_11 [i_6] [i_7]) : 1)))))));
                        arr_33 [i_6] [i_6] [i_6] [i_7] = (((min(var_9, (arr_9 [i_7] [i_6])))));
                        arr_34 [i_7] [i_7] [1] = 42715;
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_39 [i_7] [i_7 - 1] [i_7] = 48714;
                arr_40 [i_6] [i_7] = (arr_30 [i_7] [i_7 + 1] [i_7 + 1] [i_7]);
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        arr_52 [i_6] [i_11] [i_12] [i_11] |= (((((1 ? 1210659021 : 127))) ? ((11021488498762532936 ? 6720 : 28996)) : (((arr_45 [i_6] [i_11] [i_13]) ? -28997 : 1))));
                        arr_53 [i_13] [i_12] [i_13] [i_6] [i_6] = (min(((min(-6720, (arr_18 [i_6] [i_6])))), (((((1 ? 0 : -29439))) ? 24701 : ((min(-6718, 253)))))));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        arr_58 [i_14] = 1048576;
        arr_59 [i_14] = ((-32767 ? 224 : -1048559));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
    {
        arr_62 [i_15] [i_15] = (978159356 ? 1684278137 : 1);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                {
                    arr_68 [i_16] = (((arr_1 [i_17 + 1]) ? (arr_43 [i_17 + 1] [i_16] [i_16]) : 127));
                    arr_69 [i_15] [i_15] = (32736 + 452186426);
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            {
                                arr_75 [i_15] [i_15] [i_15] [i_15] [i_15] [i_18] [0] = 1048577;
                                arr_76 [i_15] [i_15] [i_18] [i_15] [i_15] = ((11587 ? 11582 : 4194303));
                                arr_77 [1] [i_19] [i_19] [i_19] [i_19] [i_15] = 70;
                            }
                        }
                    }
                    arr_78 [i_15] [i_15] [i_15] |= (((((1048575 ? 6720 : 1))) | ((2147479552 ? 4194280 : (arr_7 [i_17 + 1] [i_16] [i_15])))));
                }
            }
        }
        arr_79 [i_15] [10] = 4194303;
        arr_80 [i_15] [i_15] = (((-6720 ? 31028 : 6696)));
    }
    var_18 = min((((((var_12 ? 3231071878 : var_12))) ? 66 : (max(-1048562, 167)))), (1446761225 > var_6));
    #pragma endscop
}
