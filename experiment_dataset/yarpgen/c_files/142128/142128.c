/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((max(228, var_3))) ? ((((min(var_14, var_3))))) : (((22856 ? 72057593903710208 : 117)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_5));
        var_21 = (1 & 1024);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 ^= ((2080374784 ? 1026 : 20247));
        var_23 |= var_1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_3] = (((!(arr_8 [i_1]))));

                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_24 ^= (~var_14);
                        arr_14 [i_4 - 2] [i_3] [i_2] [8] = ((62914560 * (var_16 >= var_13)));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_25 = ((var_18 << (((arr_9 [16] [i_5] [18] [i_5]) - 9034135769223843147))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_23 [i_6] [i_5] [i_6] [16] = 18446744073709551615;
                    arr_24 [i_6] [i_6] [i_7] = ((!(~-105)));
                }
            }
        }
        var_26 ^= ((~(arr_18 [i_5] [i_5] [i_5])));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_27 ^= var_4;
        arr_28 [i_8] = -var_9;
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_28 = (((arr_7 [i_9] [i_9] [i_9]) * (arr_7 [i_9] [9] [i_9])));
        var_29 = (max(var_29, (((((!((min(var_8, var_10))))) ? (max(var_9, (min(1022, var_14)))) : -1048)))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_30 = (min(var_30, ((((((-(max(var_4, var_14))))) ? (max(var_6, var_1)) : (((min(var_17, var_11)))))))));
        arr_36 [i_10] = (((arr_31 [i_10] [i_10]) ? (min((arr_18 [i_10] [i_10] [i_10]), 59)) : ((max(268369920, 189)))));
        var_31 ^= (((4026597376 ? -1022 : 221)));
        var_32 = ((var_1 <= ((var_15 ? ((var_8 ? var_5 : var_3)) : ((var_14 >> (var_9 - 29398)))))));
        var_33 ^= ((((max(var_10, 1))) ? ((1 ? (arr_9 [i_10] [i_10] [1] [i_10]) : (arr_19 [i_10] [i_10] [i_10]))) : (min(var_9, (arr_6 [i_10])))));
    }
    #pragma endscop
}
