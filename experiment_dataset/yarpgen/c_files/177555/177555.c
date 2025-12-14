/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 = ((((((((var_11 + 2147483647) >> (var_0 - 16764))) << ((((min(var_3, (arr_1 [i_0] [i_0])))) - 57))))) ? (min((((arr_0 [3]) ? var_2 : var_5)), (arr_0 [i_0]))) : (min(var_0, ((~(arr_0 [4])))))));
        arr_2 [i_0] [i_0] = (((((((min(49936, (arr_0 [i_0])))) >> (((((arr_1 [i_0] [i_0]) ? var_3 : (-2147483647 - 1))) - 145))))) ? ((var_5 ? var_1 : 15599)) : (((!((((arr_0 [i_0]) % var_0))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_2;
        var_14 = ((((9 || var_5) >> (((min(1602884709, var_4)) - 99)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (-(arr_7 [i_2]));

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_3] = var_8;
            arr_14 [i_2] [i_3] = (((var_3 >= 2060021728) && var_7));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_4] [i_4] [4] = var_5;
                arr_20 [i_4] [i_4] = (((2147483647 ^ var_6) ? (((arr_3 [i_2]) >> var_5)) : ((var_9 ? (arr_15 [i_2] [i_4] [2]) : var_3))));
                var_15 = (arr_6 [i_2]);
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_16 = (arr_17 [i_4]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            arr_31 [i_4] [4] = ((((var_1 << (var_9 - 23522))) != var_10));
                            var_17 += (((((arr_29 [i_8] [i_8 + 1] [i_8] [5] [i_8] [i_8] [i_8 + 1]) + 2147483647)) >> (((arr_29 [i_8] [i_8 + 1] [i_8] [i_8] [4] [i_8] [i_8 + 1]) + 8341))));
                            var_18 = ((!(arr_27 [i_8 + 1] [10] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                        }
                    }
                }
                var_19 = (((arr_4 [i_6]) ? var_11 : (arr_4 [i_2])));
                var_20 = (((arr_0 [i_2]) | (arr_22 [i_2] [i_4] [i_6])));
                var_21 = (arr_30 [1] [i_2] [i_4] [i_4] [i_6]);
            }

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_22 = (((arr_22 [i_2] [i_4] [i_9]) ? (((!(arr_23 [i_2] [i_2] [i_4] [i_2])))) : (arr_32 [i_4])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_44 [i_2] [i_4] [i_4] [3] [5] [i_11] [i_11] = ((((((arr_16 [i_4]) + var_8))) ? ((var_2 / (arr_12 [i_4] [i_4] [8]))) : var_11));
                            arr_45 [i_2] [i_2] [i_2] [i_4] [i_2] = (~(arr_26 [i_10 + 1] [i_10 - 2] [1] [i_10 + 1]));
                            var_23 = ((~((var_1 ? var_6 : var_3))));
                            arr_46 [i_4] [i_10 + 1] [i_10 - 2] = (!var_5);
                            var_24 += var_5;
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_50 [i_4] [i_4] [i_12] [i_4] = ((2096545750 + (arr_49 [i_4])));
                var_25 = ((55 <= (51145 ^ var_10)));
                arr_51 [i_4] [i_4] [i_4] = ((!(arr_3 [i_2])));
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_54 [i_4] = (((arr_29 [i_2] [6] [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_11 [i_2] [i_4] [i_4])));
                var_26 = (((arr_6 [i_2]) ? ((var_0 ? (arr_28 [i_2] [6] [i_13] [i_4]) : var_1)) : -var_11));
                arr_55 [i_2] [3] [i_2] [i_4] = ((((((arr_12 [i_4] [i_4] [i_4]) ? (arr_52 [i_2] [i_4] [i_13] [i_13]) : (arr_27 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? ((-(arr_12 [i_4] [i_4] [4]))) : 15624));
            }
            var_27 = (((((arr_17 [i_2]) ? 51145 : (arr_48 [6] [i_4] [i_4] [i_4])))) ? (var_11 <= var_5) : ((-(arr_34 [i_2] [i_2] [i_4] [i_2]))));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    {
                        var_28 = ((!(arr_4 [i_16])));
                        arr_67 [i_14] [i_15] [i_14] [i_16] [i_15] = ((((var_1 != (arr_42 [i_14] [i_15] [i_15] [i_17] [i_14] [i_14] [1])))) % var_3);
                        var_29 = ((33549 ? 49920 : 51145));
                    }
                }
            }
        }
        arr_68 [i_14] = ((3743385478 ? (arr_47 [2] [i_14]) : var_10));
    }
    #pragma endscop
}
