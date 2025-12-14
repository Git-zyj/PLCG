/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (1216705153 ? 16383 : (arr_0 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = (~var_0);
            arr_9 [i_0] = 4294950909;
            var_10 = ((-(4294950890 + -121377120)));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_11 = ((16388 == ((9 / (arr_0 [i_2] [9])))));
        arr_12 [9] = var_2;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (arr_2 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_12 += (((arr_25 [14] [i_5] [i_5] [i_5 - 1] [i_6]) ? 4294950930 : var_6));
                            var_13 = arr_23 [i_4 - 1] [i_6] [i_6 - 1] [i_4];
                            var_14 -= (arr_24 [i_3] [i_4 + 2] [i_6] [4]);
                            arr_28 [i_4] = ((-(4294950904 % 4294950882)));
                        }
                        arr_29 [i_4] = 16375;

                        for (int i_8 = 4; i_8 < 14;i_8 += 1)
                        {
                            arr_32 [i_4] [6] [i_4] = (arr_25 [i_3] [i_3] [i_3] [i_3] [i_4]);
                            var_15 = 18446744073709551602;
                        }
                        arr_33 [i_3] [i_4] [i_4] [i_4] = (arr_18 [i_4] [i_4 + 1] [11]);
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_36 [i_9] [i_9] = 10;
        var_16 = ((((16365 ? 3027446576 : 16390)) <= (((+(min((arr_20 [11] [i_9]), (arr_34 [i_9]))))))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_17 -= (max(((var_6 * (((((arr_37 [8]) && var_9)))))), ((var_1 ? -5 : var_0))));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_18 = 3808848224858071714;
            arr_42 [i_10] [i_10] [i_10] |= ((18446744073709551601 ? (arr_20 [i_10] [i_11]) : (arr_16 [i_11] [i_10])));
            var_19 = 1542545228;

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_45 [i_10] [5] [i_12] [i_12] = 4294950909;
                arr_46 [i_12] = (!4294950930);
                var_20 ^= 16392;
                arr_47 [i_10] [i_12] [i_12] = (4294950906 / -158706159);
            }
            var_21 ^= ((arr_10 [i_10]) ? var_1 : (arr_10 [i_10]));
        }
        for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((--28) ? 18446744073709551611 : (arr_41 [i_13] [i_13 - 1] [i_13 + 1])))));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_56 [2] [1] [2] [i_15] [4] [i_15] [i_15] = 11554740866715473963;
                            arr_57 [0] [0] [0] [i_15] [i_16] [i_15] = ((18446744073709551612 ? 158706160 : 11));
                            var_23 += (max((((24 ? ((((arr_1 [i_10] [i_10]) < (arr_27 [i_10] [i_10] [i_16] [i_14] [0] [i_15] [i_16])))) : (arr_38 [i_10] [i_10])))), 15698364677985667987));
                            var_24 = (arr_35 [i_14 - 1]);
                            arr_58 [i_14 + 1] [i_13] [8] [i_15] [2] [i_15] = (((var_8 ? ((min(var_6, (arr_5 [i_10] [i_15] [i_16])))) : (min((arr_16 [i_10] [i_13 + 2]), 939675451)))));
                        }
                    }
                }
            }
            arr_59 [i_10] [i_13] = var_6;
            arr_60 [i_10] [i_10] = ((-2147483644 / (arr_5 [i_13 + 1] [i_10] [i_10])));
        }
        for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
        {
            arr_63 [i_17 + 1] = (min((((min(var_3, 24)))), 1729535001834216955));
            arr_64 [i_10] [i_17 - 1] = var_6;
        }
    }
    var_25 = (max(var_25, 1));
    var_26 = var_9;
    #pragma endscop
}
