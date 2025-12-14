/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (min((arr_1 [13]), (1353947152 || 144)));
                        var_19 ^= var_2;
                        var_20 *= (max((((arr_5 [i_0] [i_0] [i_2]) % var_11)), (!var_8)));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] = (arr_10 [i_2] [i_2]);
                            var_21 = var_13;
                            arr_13 [i_0] = var_8;
                            var_22 = -var_14;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_3] [i_0 + 1] [13] [i_3] [i_5] = (arr_10 [i_0 - 1] [9]);
                            var_23 -= ((~(arr_14 [i_1] [i_2] [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_24 = (max(var_24, ((max(((((arr_3 [i_0 - 1] [i_0 - 1]) % 3498025435))), var_2)))));
                            var_25 = ((2892796501 ? 21364 : -2108441870689709767));
                            var_26 = var_5;
                            var_27 = (arr_7 [i_0] [i_6] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_28 ^= ((2147483647 ? 18446744073709551615 : (!var_2)));
                            var_29 = (min(var_29, var_15));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_30 = var_16;
                    var_31 += (((((arr_23 [6] [6] [i_8 + 1]) ? (((arr_0 [i_8]) ? var_2 : 212393615)) : ((var_2 % (arr_0 [1]))))) >= var_4));
                    var_32 = (min(var_32, (((((!(~var_6))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_33 = (max(var_33, ((((arr_26 [i_10 - 1] [i_10 + 1]) ? var_15 : (var_13 % var_11))))));
        var_34 = (var_10 ? (((arr_19 [i_10] [i_10] [i_10]) << (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [2] [1]))) : var_6);

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_35 -= var_0;
            arr_32 [i_11] [i_11] [5] = ((2995999291 ? (!var_1) : (arr_17 [i_10] [i_10] [i_11] [i_10] [i_11])));
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            var_36 |= var_8;
            arr_35 [i_10] = var_0;

            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_37 *= ((((~(arr_18 [i_10] [i_12] [13] [13] [i_14]))) & var_1));
                    var_38 = var_11;
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_39 = ((((-127 - 1) ? 796941848 : 1298968005)) + var_8);
                    var_40 = (max(var_40, ((((arr_19 [i_10] [i_10] [i_10]) > 7775388466844453321)))));
                    var_41 &= var_9;
                    var_42 = ((var_15 ? var_5 : (arr_10 [i_13] [i_13])));
                }
                var_43 = 622787955;
                var_44 = var_12;
                var_45 = (arr_40 [i_10]);
            }
            for (int i_16 = 1; i_16 < 11;i_16 += 1)
            {
                arr_49 [i_10] [i_10] [i_12] [i_16] = (((arr_0 [i_16 + 1]) ? (arr_8 [i_16 + 1] [i_10 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_10] [i_16]) : (arr_8 [i_16 + 2] [i_10 - 1] [i_16] [i_10] [i_12 - 1] [3] [i_16])));
                var_46 ^= ((!(arr_10 [5] [i_12 + 1])));
            }
            for (int i_17 = 4; i_17 < 13;i_17 += 1)
            {
                var_47 ^= (arr_6 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1]);
                var_48 = (min(var_48, -15));
                var_49 = (arr_0 [6]);
            }
            arr_54 [2] = var_9;
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        arr_57 [i_18] = var_10;
        arr_58 [10] = var_10;
        arr_59 [i_18] &= (arr_56 [i_18]);
    }
    #pragma endscop
}
