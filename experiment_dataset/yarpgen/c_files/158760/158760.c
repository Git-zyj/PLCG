/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = (((arr_8 [i_0] [i_1] [i_0] [i_3]) >= (max((min(18446744073709551615, var_8)), 193))));
                        arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [i_0] = 14745573759128576183;
                    }

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_4] = 189;
                        var_11 = (min(var_11, (arr_4 [i_0] [i_1] [i_4])));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_21 [i_0] [i_4] [i_1] [i_0] = 32127;
                            var_12 = var_6;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_20 [i_5 + 1] [i_5 + 2] [i_5 + 4] [i_5 - 1] [i_5 + 4] [i_5 + 3]) | (arr_11 [i_5 + 1] [i_5 + 2] [i_5 + 4] [i_5 - 1] [i_5 + 4] [i_5 + 3])));
                        }
                        var_13 = (arr_8 [i_2] [i_1] [i_2] [i_4]);
                        var_14 ^= ((16597 | (max((arr_2 [i_0] [i_2]), (arr_2 [i_4] [i_4])))));
                    }
                }
            }
        }
        var_15 = ((((min(7936, -7919))) <= ((((1 ? 20 : 1)) / (((-7919 ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_6)))))));
        var_16 += 18446744073709551604;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_17 = ((arr_16 [i_0] [i_6] [i_0] [i_6]) ? -var_7 : -var_0);
            arr_26 [i_0] = (arr_4 [i_0] [i_0] [i_0]);

            for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_6] = ((var_0 | (arr_20 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7])));
                arr_31 [i_0] [i_0] [i_0] [i_7] = var_3;
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_18 = var_1;
                arr_34 [i_0] [i_6] = (((arr_5 [i_0] [i_6] [i_8 - 1] [i_8 - 1]) ^ 28902));
                arr_35 [i_0] [i_0] [i_6] [i_6] |= 18446744073709551604;
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_19 = (max(var_19, (arr_18 [i_9] [i_6])));
                var_20 ^= 6551;
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_21 = ((~(!var_7)));
            arr_40 [i_0] = (min(-18446744073709551609, (((arr_29 [i_0] [i_0] [i_0]) ? 226 : (1 | -1)))));
            var_22 += 2270354208090425633;
            arr_41 [i_0] = (((--1) ? (min(18446744073709551608, (-2147483647 - 1))) : (min((min(-1, var_5)), var_9))));
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            var_23 -= (min(((1427903227 - (5 != 1))), (arr_33 [i_11])));
            arr_45 [i_0] = ((((max((arr_18 [i_0] [i_0]), (arr_32 [i_0] [i_11] [i_11] [i_11]))) & (((~(arr_29 [i_0] [i_0] [i_11])))))));
        }
    }
    var_24 = var_4;
    #pragma endscop
}
