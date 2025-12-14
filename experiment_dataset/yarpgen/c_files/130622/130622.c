/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = var_7;
                var_14 *= ((var_7 ? ((906996065 ? 15461399211207751318 : 9758)) : 683275338));
                arr_4 [i_1] [i_0] [12] = (arr_2 [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 - 1] [17] = (((!(arr_3 [i_2] [i_2]))));
        arr_8 [i_2] = var_2;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 18;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_15 = (~(arr_9 [i_4] [0]));
            var_16 -= (((arr_1 [i_4]) % (arr_1 [i_3])));
            var_17 = (((arr_10 [i_4] [i_3]) ? (arr_9 [i_4] [i_3 - 4]) : (arr_5 [i_3 - 2])));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_18 = ((((((arr_9 [i_3] [i_5]) ? (arr_14 [i_5]) : var_7))) ? (arr_1 [i_5]) : -33));
            arr_18 [i_5] |= ((var_1 != (arr_16 [i_3 - 2] [i_3 - 3] [i_5])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_21 [i_3] [i_3] [6] = (((arr_9 [i_6] [i_3]) + var_5));
            var_19 = (arr_15 [i_3 - 2]);
            var_20 = 4;
            var_21 = (arr_5 [i_3 - 3]);
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_26 [i_3 - 3] [i_3 - 2] [i_7] = (arr_2 [i_3 + 1]);
            var_22 = var_11;
            arr_27 [i_7] [i_7] = (((var_10 ? (arr_6 [i_3] [i_7]) : var_10)) < var_2);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_34 [i_9 - 3] [i_7] = ((var_1 ? 94 : var_6));
                            arr_35 [i_7] [i_8] = (arr_24 [i_3 - 1] [i_3 - 2]);
                            arr_36 [i_7] = (arr_16 [i_3 + 1] [11] [i_3]);
                            var_23 = ((((18446744073709551611 ? 88 : 30708)) < (~var_4)));
                        }
                    }
                }
            }
            arr_37 [i_3] [i_7] = (9158 ? (((!(arr_30 [i_7] [i_3 - 4] [i_3 - 4] [i_7])))) : -1477682852);
        }
        var_24 = var_0;

        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            arr_40 [i_3 - 1] [i_3] |= (arr_23 [i_3 - 2] [i_11] [i_11 - 1]);
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_49 [i_11] [i_11] [i_11] [i_11] [6] [1] = ((~(!67)));
                            var_25 = (!var_3);
                            arr_50 [i_3] [i_11] [i_12] [i_3] [i_3 - 4] = (((arr_28 [i_13] [i_13 - 1] [i_13] [i_13 - 1]) ? (arr_28 [i_13] [i_13 + 1] [i_13] [i_13 + 1]) : (arr_28 [i_13] [i_13 - 1] [i_13] [i_13 + 1])));
                        }
                    }
                }
            }
            arr_51 [i_3] [i_11] = var_12;
        }
        for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
        {
            arr_55 [i_3] [i_15] [i_15] = ((59937 ? 1477682852 : (~5598)));
            var_26 = (arr_11 [i_15 - 1]);
            var_27 = var_6;
            var_28 = (((((689842938 ? var_8 : 18446744073709551596))) ? (((~(arr_53 [i_3] [i_3] [9])))) : (~var_9)));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            arr_59 [i_16] [i_16] = 8796093022207;

            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                arr_63 [i_16] = var_10;
                arr_64 [i_16] [i_16] [i_17] [i_16] = (arr_22 [i_3 - 1] [i_16] [i_16]);
            }
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                var_29 = ((var_2 ? (arr_41 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (var_1 % -753576482)));
                arr_68 [i_16] = var_1;
            }
        }
        for (int i_19 = 1; i_19 < 16;i_19 += 1)
        {
            var_30 = 59938;
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_31 = ((arr_38 [i_19 + 3] [i_20 + 3] [i_19]) & ((var_9 ? (arr_10 [i_19] [i_19 + 2]) : (arr_22 [i_19 + 1] [i_19 + 3] [i_19]))));
                        arr_78 [i_3 - 3] [i_19] [i_20 + 2] [i_21] [i_19] = (~var_7);
                        var_32 = (((arr_6 [i_19 + 2] [i_19 + 3]) ? (arr_6 [i_19 + 3] [i_19 + 3]) : (arr_30 [i_19] [i_3 - 4] [i_20 + 1] [6])));
                    }
                }
            }
            var_33 = ((!(arr_33 [i_3 - 1] [i_3] [i_3 - 2])));
        }
        var_34 -= ((!(arr_32 [i_3 + 1] [i_3] [i_3 - 4] [i_3] [i_3 - 3] [i_3])));
    }
    /* vectorizable */
    for (int i_22 = 4; i_22 < 18;i_22 += 1) /* same iter space */
    {
        var_35 -= ((~5120992940896583663) ? var_5 : var_9);
        arr_83 [i_22] [i_22] = (((arr_62 [i_22] [i_22] [i_22]) ? (arr_1 [i_22]) : -9760));
        var_36 -= (((((9175 ? (arr_46 [13] [i_22] [13] [i_22] [13] [i_22 - 2] [i_22]) : var_10))) ? var_12 : (!var_0)));
    }
    #pragma endscop
}
