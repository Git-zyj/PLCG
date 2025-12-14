/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = -9223372036854775791;
                            arr_12 [i_4] [i_0] = var_2;
                            arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_3] [i_0 - 1] |= 255;
                        }
                    }
                }
            }
            arr_14 [i_1] |= ((var_2 ? var_13 : (arr_2 [i_0 - 1] [i_1 - 1])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_17 [i_0 + 2] [i_5] |= var_1;
            arr_18 [i_0] [i_0] [i_5] = (max((((33030144 >= 4294967273) ? 9223372036854775791 : 1)), (~var_7)));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_23 [i_6] [18] [i_6] |= (arr_16 [i_6] [i_6] [i_0 - 3]);

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_27 [i_0] [i_7] [14] |= -var_11;
                arr_28 [i_0] [i_0] [i_0 + 1] [i_0] = (arr_1 [i_0] [i_0]);
                arr_29 [i_0] [i_6] = (8184 <= 254);
            }
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] = ((0 | (511 * 0)));
                            arr_41 [i_0 - 3] [i_6] [i_0 - 3] [i_0] [i_9] [i_9] [i_10] = (((arr_7 [i_0]) ? ((8184 << (var_3 - 3174727153))) : (~64)));
                            arr_42 [i_10] [i_0] [i_8] [i_0] [14] = 9223372036854775800;
                            arr_43 [i_0] [i_6] [i_0] [i_10] |= (arr_4 [i_0] [i_6] [i_0]);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_46 [i_0] [i_6] [i_6] [i_6] [i_11] = (((-((18446744073709551601 ? 9223372036854775807 : var_8)))));
                    arr_47 [i_0] = ((511 | (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 4294967295 : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                    arr_48 [i_0] [i_6] [i_11] [i_0] = ((-511 > (arr_22 [i_11] [i_0 + 2])));
                    arr_49 [i_11] [i_0] [i_0] [i_0] = var_13;
                }
            }
            arr_50 [i_0] [10] [i_6] = ((9223372036854775790 ? var_1 : (arr_35 [i_0] [i_0] [i_0] [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_57 [i_0] [i_0] [i_12] [i_13] [i_13] [i_0] = 25;
                        arr_58 [i_14] [i_12] [i_14] [i_14] [i_0] [i_0] = (((max((-9223372036854775807 - 1), (32 && var_3))) + 2));
                    }
                }
            }
        }
        arr_59 [i_0] = -34;
    }
    var_15 = (((max(var_3, var_1)) >> (var_6 + 2589846585238440563)));
    var_16 = var_1;
    var_17 = (65521 << 0);
    #pragma endscop
}
