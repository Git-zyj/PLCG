/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? var_9 : var_11));
    var_13 = var_1;
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = (min(var_15, var_9));

            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                var_16 -= (((arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 3] [i_2 - 1]) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 3]) : (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 3])));
                var_17 = (((var_5 << (var_6 - 3748994964))));
                arr_8 [0] [i_0] [i_1] [i_2] = ((0 ? (arr_4 [i_0] [i_2 - 1] [i_2 + 2]) : 1));
                var_18 = (min(var_18, (((((709902855882138354 ? 607453986 : 121))) ? var_10 : (arr_6 [i_2] [i_1] [i_2])))));
            }
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                var_19 += (arr_1 [i_0]);
                var_20 = var_9;
            }
            var_21 += ((var_4 == (arr_12 [i_0] [i_1])));
        }
        var_22 -= 123;

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = (arr_5 [i_0] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_23 -= 1;
                        var_24 = ((0 ? 1 : (arr_13 [i_0] [i_4])));
                    }
                }
            }
            var_25 -= ((1 ? (arr_1 [i_0]) : 1));
            var_26 = (arr_9 [i_0]);
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_27 = ((var_6 ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_7])));
            var_28 = var_11;

            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                var_29 = (0 ? 3 : (arr_17 [i_0] [i_0] [i_0]));
                var_30 = (var_6 ? ((((arr_21 [i_0] [i_7] [2]) == 0))) : 1);
                arr_24 [i_7] = (~(arr_4 [i_8 - 1] [i_8 - 1] [i_8 + 1]));
                var_31 = var_2;
                var_32 += ((var_5 ? 1 : (((arr_10 [i_7]) << (var_1 - 15675)))));
            }

            for (int i_9 = 1; i_9 < 8;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_33 -= (((((var_2 ? var_11 : 0))) ? (arr_2 [i_0] [i_7]) : (arr_30 [i_0] [7] [i_9] [i_10] [i_9 - 1])));
                            var_34 = (max(var_34, (((var_6 ? (arr_31 [i_0] [i_7] [i_9] [i_9] [1] [7]) : (arr_0 [i_7]))))));
                            var_35 -= ((~((8646557140551822843 ? var_7 : (arr_23 [i_0])))));
                            var_36 -= var_4;
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_37 = -0;
                    var_38 = ((((arr_19 [i_0] [5] [6] [i_12] [i_7] [i_7]) ? 2885308030 : 1)));
                    var_39 = 0;
                    var_40 = (arr_19 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 2]);
                    var_41 = (arr_29 [i_9 + 1] [i_9 + 2] [i_9 + 2] [1] [i_9] [i_9 - 1]);
                }

                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    arr_37 [i_0] [3] [5] [i_9] [i_13] = (((((var_3 ? 1 : (arr_5 [1] [9])))) ? 2 : 0));
                    var_42 = 18446744073709551610;
                    arr_38 [i_13] [i_7] [i_9] [i_13] = (arr_29 [i_7] [i_7] [8] [i_7] [i_13 - 1] [i_9]);
                    var_43 = var_4;
                    arr_39 [4] = var_10;
                }
                arr_40 [i_0] [i_7] [6] [i_9] = (arr_36 [i_0] [i_7] [i_9] [i_9] [1]);

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_44 = 0;
                    arr_44 [i_14] [i_14] [i_7] [0] [i_14] [i_0] = (arr_32 [i_9 + 1] [i_7] [i_7] [i_14] [i_7]);
                    var_45 = (611146143 == -7334070623703489860);
                    var_46 = (max(var_46, ((((arr_36 [8] [i_14] [i_9 - 1] [1] [i_9 - 1]) << (-491092229175456274 + 491092229175456282))))));
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_47 = (((((var_3 ? 1 : var_5))) ? -2 : (arr_5 [i_0] [i_7])));
                var_48 -= 1;
            }
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
        {
            var_49 = (arr_49 [i_16] [i_16] [i_16]);
            arr_53 [1] [i_16] [1] = ((+(((arr_6 [i_0] [1] [i_16]) ? 18446744073709551613 : var_10))));
        }
        var_50 += ((((var_7 ? (arr_25 [i_0] [i_0] [i_0]) : var_10)) == (arr_36 [i_0] [i_0] [i_0] [i_0] [1])));
    }
    #pragma endscop
}
