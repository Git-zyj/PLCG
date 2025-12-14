/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? ((min(1, 12))) : (min(-5734064331179063391, var_10))));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] &= 33;
            var_15 -= (arr_1 [18] [3]);
        }
        var_16 = (min(var_16, var_8));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_10 [5] [i_2] = (max((((8513605951807526218 | -4244352413994716454) ^ 1)), var_9));
            var_17 = (max(var_17, -var_4));
            var_18 *= (((((!(arr_0 [i_2 + 4])))) & 65534));
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] [i_2] = var_6;
            arr_15 [i_4] = -5734064331179063386;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        var_19 = (((!(!var_10))) ? (arr_8 [i_2]) : var_11);
                        var_20 = 64;
                        var_21 = (max((945855157 / 2808448750), (((arr_20 [i_2 + 3] [i_6 - 1] [i_5] [1]) ? var_3 : var_11))));
                        var_22 = var_1;
                    }
                }
            }
            var_23 |= ((-(max(var_10, var_12))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_24 = (((((11202 ? 2 : 8064))) ? (min((!-20), (min(21, 8513605951807526220)))) : var_8));
            arr_24 [i_7] = ((~(max(var_10, (arr_7 [i_2 - 1] [i_2 + 1])))));
        }
        arr_25 [i_2 + 3] = 1486518544;
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_25 = var_3;
        var_26 = ((((arr_28 [i_8 - 1]) ? (arr_28 [i_8 + 1]) : (arr_28 [i_8 + 1]))));
        var_27 = ((!((!((!(arr_28 [8])))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_28 = ((((arr_34 [i_9] [i_10]) ? var_10 : var_3)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_29 = ((~((var_2 ? (var_1 + var_10) : 12000))));
                                var_30 -= ((((max((max((arr_39 [i_9] [i_9] [1] [7] [i_11] [1] [10]), 15)), (arr_34 [i_11] [i_9])))) ? var_1 : var_1));
                                var_31 = var_11;
                            }
                        }
                    }
                    var_32 = (max((arr_29 [1]), (57478 || 1)));
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_33 *= ((-(var_8 % 2162618668624980587)));
            var_34 = var_4;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 23;i_17 += 1)
                    {
                        {
                            var_35 = 1;
                            var_36 = var_0;
                            var_37 = (min(var_37, (((~(arr_44 [i_9]))))));
                        }
                    }
                }
            }
            var_38 = (var_6 && -9082811236452571234);
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                {
                    arr_56 [i_9] [20] [i_19] = (arr_41 [i_18]);
                    arr_57 [i_9] [i_18] [i_9] = 1;
                }
            }
        }
    }
    var_39 = var_7;
    #pragma endscop
}
