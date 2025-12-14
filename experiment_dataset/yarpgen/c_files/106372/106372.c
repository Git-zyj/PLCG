/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] = (-13098 || 2147483647);
                    var_17 = (((!0) <= (arr_7 [i_0 + 1] [i_0] [i_1] [i_2])));
                    arr_9 [i_1] = (((arr_4 [i_0 + 1] [i_0 + 1]) ? 11549151212254911690 : 4294967294));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = var_9;
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] = ((!((((arr_4 [i_0] [i_0]) ? (arr_1 [i_3]) : (arr_10 [i_1] [i_1] [i_2 + 1] [i_3] [i_1]))))));
                            arr_15 [i_3] [i_1] [i_2] |= (arr_6 [i_0 - 2] [i_1]);
                            var_19 &= (arr_5 [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                            arr_16 [i_1] [i_3] [i_3] [i_2] [i_1] [i_0 - 1] = 26407328;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_0 - 1] [i_1] [i_1] [i_2 + 1] [i_3] [i_5] &= arr_18 [i_0 - 1] [i_0 - 1] [i_2 - 3] [i_3] [i_5];
                            var_20 = ((5787038004147605461 ? var_6 : (arr_1 [i_0 + 1])));
                            arr_20 [i_0] [i_1] [i_2 - 2] [i_3] [i_5] = (arr_3 [i_2 - 1] [i_1] [i_2 + 1]);
                            var_21 = (min(var_21, (arr_13 [i_0] [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_5])));
                        }
                        var_22 ^= (~var_11);
                        var_23 = (((((var_16 + 2147483647) << (((var_15 + 4616147138289506764) - 9)))) / (arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])));

                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((var_8 & var_10) / (((var_8 ? var_9 : var_3))))))));
                            var_25 |= ((var_11 ? ((var_16 ? var_15 : var_2)) : (arr_18 [i_6] [i_3] [i_2 - 4] [i_1] [i_0 - 2])));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_26 = (var_16 & var_1);
                            arr_28 [i_7] [i_3] [i_1] &= ((arr_1 [i_0 - 1]) ? var_2 : (arr_1 [i_3]));
                            var_27 = (min(var_27, (arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_2 - 1] [i_7 + 1])));
                        }
                    }
                }
            }
        }
        arr_29 [i_0] = var_10;

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_28 = ((0 - (arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 + 1])));
            arr_32 [i_0 - 2] = (arr_25 [i_0 + 1] [i_0 + 1]);
        }
        var_29 = (max(var_29, (((4038990934 << (19528 - 19505))))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_30 = (max(var_30, (~9223372036854775790)));
        var_31 = (arr_5 [i_9] [i_9 + 1] [i_9 + 1] [i_9]);
    }
    var_32 = var_15;
    #pragma endscop
}
