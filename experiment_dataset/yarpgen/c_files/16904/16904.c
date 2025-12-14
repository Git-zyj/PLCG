/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_1 ? (((100 ? var_1 : 100))) : var_13))), var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((max((max(1, (arr_0 [i_0] [i_0]))), 1)));
        var_17 ^= (max((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))), -19));
        var_18 -= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = (arr_5 [i_1] [i_1]);
        var_19 = (min(var_19, ((((arr_2 [16]) ? var_9 : ((((((-98 ? var_5 : -8184291899236452920))) <= 100))))))));
        var_20 = 1;

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_10));
                            var_22 += ((+((((min((arr_11 [i_1] [i_3] [i_1] [i_5 - 1]), -407372695)) <= ((max(-84, var_8))))))));
                            var_23 = var_10;
                            arr_18 [i_3] [i_2] [i_1] [i_4] [i_5] [i_5 - 2] = (max(var_5, ((((max(var_1, 1))) ? var_7 : var_8))));
                        }
                    }
                }
                arr_19 [i_1] [i_2] [i_3] = (1 / var_4);
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                var_24 = ((78 ? 288225978105200640 : (18267 ^ 123)));
                var_25 = (11 / 81);
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_26 = (((var_0 % (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_24 [i_1] = (((max((arr_23 [i_1 - 1]), (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_7] [i_7]))) <= (((max(-81, 1))))));
                var_27 = (min(var_27, (((~((((arr_17 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 1] [4]) && (1 || 66)))))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_28 += var_3;

                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    var_29 += ((-(arr_13 [i_9 + 2] [i_2 - 1] [i_8] [i_1 - 1] [i_2 + 2])));
                    var_30 = ((-1062987831 ? 1 : -12474));
                    var_31 = 421305499;
                    var_32 = arr_27 [i_8] [i_1] [i_2 + 1] [i_1] [i_1 - 1];
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((var_12 ? -82 : 1)))));
                            var_34 = 1099511627775;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        {
                            arr_42 [i_1] [i_2 + 2] [i_2] [i_8] [i_2] [i_1] [i_13] = var_5;
                            var_35 -= 4159356270899636713;
                            arr_43 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] = (1 ? var_13 : (arr_27 [i_12 + 1] [i_1] [i_8] [i_1 - 1] [4]));
                            var_36 = (min(var_36, (((((((!(arr_2 [0]))))) - (arr_36 [i_1 - 1] [i_2 - 1]))))));
                            var_37 += 81;
                        }
                    }
                }
                var_38 = (min(var_38, (arr_32 [i_1 - 1] [i_1 - 1])));
            }
            arr_44 [i_1] [1] = -var_2;

            /* vectorizable */
            for (int i_14 = 1; i_14 < 17;i_14 += 1)
            {
                arr_48 [i_1] [i_2] [i_2] = (arr_33 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]);
                var_39 = ((arr_11 [i_2] [i_2 + 1] [i_2 - 1] [i_2]) & var_3);
            }
        }
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            var_40 -= 81;
            var_41 = (min(var_41, ((((((!(1062987831 & -1062987831)))) >> (((((arr_16 [i_1 - 1] [i_15 + 1] [i_15] [i_15] [i_15 - 2] [i_15] [i_15]) + var_8)) - 3078413033)))))));
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                {
                    var_42 ^= 1;
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 9;i_20 += 1)
                        {
                            {
                                arr_65 [i_16] [i_16] [i_17] [i_16] [i_16] = (~-95);
                                var_43 += (((~-1062987813) + 8123585635684184833));
                                var_44 ^= ((-(((((arr_62 [i_16] [i_16] [i_16] [i_19] [i_19]) / 1831546872)) / (arr_40 [18])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
