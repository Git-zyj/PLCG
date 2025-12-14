/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_14;
    var_17 = (max((((((var_0 ? var_14 : var_6)) + (var_5 - 3914854216)))), var_9));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = var_5;
            arr_6 [i_0] = ((-var_4 ^ ((127 ? var_11 : var_12))));
            var_18 = (min(var_18, (((var_7 ? ((var_3 ? (arr_2 [9] [i_1] [i_1]) : var_9)) : (-9223372036854775807 - 1))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_4 [i_4] [i_0 - 1])));
                            arr_15 [7] [3] [i_0] [7] [i_2] = ((((!(-9223372036854775807 - 1)))));
                            arr_16 [i_0] [i_0] [i_2 - 1] [2] [i_0] = ((var_5 ? var_9 : (!var_4)));
                            var_20 = (((arr_8 [i_0]) ? (arr_2 [i_3] [10] [i_0]) : (arr_3 [i_0 - 1])));
                            arr_17 [i_4] [4] [i_0] [i_1] [i_0] [i_1] [0] = (!8407833758429733487);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0 - 1] [i_0] = (!var_12);
            var_21 = var_2;
            arr_21 [i_0] = ((~(var_6 == 2310530993)));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_22 ^= (((arr_13 [i_0] [i_0] [i_7] [11] [i_0 - 1] [i_6]) ? var_0 : (arr_13 [i_0] [i_0] [i_7] [1] [i_0 - 1] [4])));
                var_23 = (~9223372036854775807);

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_24 = (min(var_24, (((513158006 ? 17092 : 212)))));
                    var_25 = (min(var_25, var_7));
                    var_26 -= -36474133;
                    var_27 |= (((arr_22 [i_6] [i_8]) ? var_6 : (arr_13 [i_0] [i_0 - 1] [i_7] [13] [i_0 - 1] [i_6])));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_28 = var_10;
                    var_29 ^= (arr_29 [i_0] [8] [i_0 - 1] [8]);
                }
            }
            var_30 += 4629667490119430780;

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_31 = (min(var_31, ((((arr_26 [i_0] [12] [i_6]) > (arr_27 [i_0 - 1] [i_0 - 1] [i_10] [i_10]))))));
                arr_35 [i_0 - 1] [8] [i_0 - 1] [i_0] = (17092 ? 3088834736 : (3554280490658664996 * 0));
                arr_36 [i_0] [0] [i_0] [6] = (((((var_14 & (arr_24 [i_0 - 1] [0] [i_0])))) + -10441549055080719226));
            }
        }
        var_32 = (max(var_32, var_5));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_33 |= ((-(((((var_0 / (arr_38 [14])))) ? (var_5 * 2016642156) : var_4))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_34 = var_1;
                        arr_49 [0] [i_11] [i_13] [i_13] [i_11] [i_11] = (var_0 + var_5);
                    }
                }
            }
        }
    }
    #pragma endscop
}
