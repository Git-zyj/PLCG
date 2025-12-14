/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((32767 ^ -126), (var_1 | var_12)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (min((78 / var_12), (1 ^ 0)));
            var_16 = 2080833737;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_1] [5] = 51;
                        var_17 = (min((((var_3 + 9223372036854775807) << (((var_8 + 127) - 38)))), (6 & -30395)));
                    }
                }
            }
            arr_13 [i_0] [i_1] [i_1] = ((7 > 59074) ^ ((min(32767, var_5))));
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_18 *= ((!(min(var_6, var_6))));
            var_19 = (min(var_19, var_10));
            var_20 = 601047874;
            var_21 = ((((-1 + (max(-30377, 7539370127493807386)))) >= ((min(32768, 14855)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_5] = ((+(min((-393261170 - var_9), 30376))));
            var_22 = (min(var_22, (0 - 23420)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_23 = -1;
            arr_22 [i_6] [i_6] [i_6] = 59076;
            arr_23 [10] [i_6] [i_6] |= ((((max((var_7 != var_3), 1))) >= ((min(1, 0)))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_24 = (min((1 && var_11), (((-27200 + 2147483647) >> (32774 - 32772)))));
                            arr_30 [9] [i_6] [i_7] [i_7] [i_6] [6] [i_9] = 0;
                        }
                    }
                }
            }
            var_25 = (min(1, (2602107980973608961 - 61958)));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_26 = (1 & var_0);
                            var_27 ^= ((-(max(1179854837, var_14))));
                            arr_40 [i_0] [i_10] = var_13;
                            var_28 = (-30386 * var_5);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
                        {
                            var_29 = (max(((max(-30377, 13))), ((min(var_3, 121)))));
                            arr_47 [11] [i_10] [i_14] [1] [i_16] = (((45589 ^ -8588) / (-4547701531693366076 ^ var_9)));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                        {
                            var_30 = 1;
                            arr_52 [i_0] [i_10] [i_14] [i_15] [i_10] = var_6;
                            var_31 = ((var_5 - (!-3224662061103750507)));
                        }
                        var_32 = var_6;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {
        var_33 = (min(var_33, 62));
        var_34 = (min(var_34, ((((var_11 | -63) - var_2)))));
    }
    var_35 = var_4;
    var_36 = ((~((var_5 >> (var_8 + 106)))));
    var_37 = 0;
    #pragma endscop
}
