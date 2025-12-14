/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = (min((min((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1]))), var_3));
        arr_3 [i_0] [i_0 - 1] = (((arr_0 [i_0]) % (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1])))));
        arr_4 [i_0] [i_0] = (((~4190796579) <= (((((arr_1 [i_0 - 1]) == (32933 / var_6)))))));
        arr_5 [1] &= var_10;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 -= (min(-1, (((arr_7 [i_1]) >> ((((var_10 ? var_0 : var_13)) - 15272))))));
        arr_8 [i_1] = ((((((((arr_7 [i_1]) ? (arr_6 [i_1] [1]) : var_6))) ? (arr_7 [i_1]) : ((((arr_6 [0] [i_1]) < var_5))))) >= (arr_7 [i_1])));
        var_16 += (arr_6 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_1] = ((~(min(var_0, (arr_11 [i_2 - 1])))));
            arr_14 [i_1] [i_1] = (((min((~46), (max(9075736368209829771, 9371007705499721844))))) ? (~var_1) : ((-116 ? 9371007705499721845 : (((arr_9 [i_1]) ? 9755248136128790706 : -6578)))));
            var_17 = 9075736368209829762;
        }
        arr_15 [i_1] = ((~((((min((arr_9 [i_1]), (arr_7 [i_1])))) ? (arr_11 [i_1]) : (arr_10 [i_1])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 = (max(((((arr_2 [i_3]) ? (arr_0 [i_3]) : (!var_12)))), (max((arr_7 [i_3]), (arr_16 [i_3] [i_3])))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_19 = (min(var_19, (((1 ? 29473 : (((arr_2 [i_3]) + var_3)))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_30 [i_3] [0] [i_3] [4] [i_5] [i_3] = ((arr_2 [4]) ? ((var_5 ? (arr_19 [i_3] [i_3]) : (arr_19 [i_5] [i_5]))) : (arr_27 [i_5] [i_6 + 2]));
                        var_20 = var_1;
                        arr_31 [i_3] [i_3] [i_3] [i_3] [i_5] [3] = (i_5 % 2 == zero) ? (((~(((arr_29 [i_3] [i_3] [i_3]) << (((arr_26 [i_3] [i_5] [i_3] [i_3]) + 26583))))))) : (((~(((arr_29 [i_3] [i_3] [i_3]) << (((((arr_26 [i_3] [i_5] [i_3] [i_3]) + 26583)) + 4041)))))));
                        arr_32 [i_3] [i_5] [i_5] [7] = var_3;

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_35 [i_3] [i_4] [i_5] = 2572448869;
                            arr_36 [i_5] [i_6] [8] [9] [i_5] = (((arr_16 [i_6 - 1] [i_6 - 2]) ^ (arr_16 [i_4] [i_6 - 2])));
                            var_21 &= 127;
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_22 -= -4294967295;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_23 = (min(var_23, (arr_25 [i_10] [i_9] [i_4] [2])));
                            arr_45 [2] [i_4] [2] [2] [3] = ((206 ? (arr_21 [i_3]) : (arr_21 [i_9])));
                        }
                    }
                }
                var_24 = (max(var_24, (((4294967295 ? -1 : (arr_9 [i_8]))))));
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                arr_48 [i_4] [i_3] [i_4] [i_3] = ((!(arr_7 [i_3])));
                arr_49 [i_3] [9] [i_3] &= 44726;
                arr_50 [i_3] [i_3] [i_3] [i_11] = (((arr_27 [i_4] [i_4]) >= (~var_10)));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_53 [5] [i_3] [i_4] [i_12] |= 9755248136128790706;
                var_25 -= (arr_47 [i_12] [i_3] [i_3]);
            }
        }
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            var_26 = (max(var_26, ((min(-20, 20810)))));
            var_27 += ((((var_9 / (((var_4 >= (arr_43 [i_13 - 1] [i_13 - 1] [i_3] [5] [i_3] [i_3] [i_3]))))))) ? ((((((arr_52 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 1]) + 9223372036854775807)) << (((((arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 - 1]) + 9025673990274602823)) - 43))))) : (max((arr_38 [i_13 + 1]), (arr_38 [i_13 - 1]))));
            arr_56 [i_13] [i_13] = var_1;
            var_28 = (max(var_28, (((var_0 * (4294967295 | 9075736368209829771))))));
        }
        arr_57 [i_3] = (min((7 != 4294967295), (min(var_3, (!12)))));
    }
    var_29 = var_2;
    var_30 = (~var_5);
    #pragma endscop
}
