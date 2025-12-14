/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, 1));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_6] &= 1;
                        var_11 = (max(var_11, (((-(1 < 1))))));
                        var_12 = (((~22036) - (!-1)));
                        var_13 = -3650;
                        var_14 = (min(var_14, 3990573102));
                    }
                }
            }
            arr_24 [i_0] [i_0] = (((3660 || 20384) || (0 > 6596979027345423555)));
            arr_25 [i_0] [i_0] [i_0] |= (-21 ^ 127);
            arr_26 [i_4] [i_0] [i_0] = ((!(4203372274 != -24)));
            arr_27 [i_0] = 91595025;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            arr_30 [i_0] = ((4611686018427387648 - (~4196679370)));
            arr_31 [i_0 + 1] [i_0 + 2] = -127;
            arr_32 [i_0] = 1;
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_40 [i_0] [i_0] [i_0 - 1] [i_0] [i_8] [i_0] = (~(((-26 + 2147483647) << (((-7723148540058071000 + 7723148540058071023) - 23)))));
                        arr_41 [23] [11] [i_8] [18] [i_10] = ((~(3650 != -24)));
                        arr_42 [i_0] [i_8] [i_9] [i_8] = ((-(!6055)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                {
                    arr_49 [i_0] [i_11] [i_11] = (~-7246992965426689152);
                    arr_50 [i_11] [i_11] = (((!3641) % 4203372271));
                    arr_51 [3] [i_11] [i_11] [i_11] = 10664461869902519607;
                }
            }
        }
        arr_52 [i_0] [0] = (((1865390861732907683 % 87) & 3644));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {
                arr_58 [i_13] [1] [i_13] = ((!(!1)));
                arr_59 [i_13] [i_14] |= ((20 ^ (((!(!1911682658))))));
                var_15 = 25;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_65 [i_15] [i_15] = 1;
                            var_16 = (min(var_16, 768472323581281379));
                            arr_66 [i_13] [i_14] [12] [i_16] |= 1033237848;
                            var_17 = (max(var_17, ((((((((!281071059) >= (!1))))) % 18446744073709551599)))));
                            var_18 = (max(var_18, 65521));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
