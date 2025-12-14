/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_15 = (max(var_15, var_13));
            var_16 &= (((arr_2 [i_0]) >= (arr_3 [i_0] [i_1])));
            arr_4 [i_0] [i_1] [i_1] = -32761;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3 + 1] = ((32767 % (((arr_6 [i_0] [i_1] [i_0]) % var_14))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_2] [i_3 + 1] [i_2] [i_1] [i_2] = (((!(arr_8 [i_0] [i_1] [i_0]))));
                            var_17 = 32761;
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_18 = arr_12 [i_0] [i_2] [i_1] [i_2] [i_3 + 1] [i_5];
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_0] = var_13;
                        }
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (((arr_1 [i_6 + 1] [i_6]) ? 1 : 1));
                            arr_20 [i_1] &= (arr_0 [i_0]);
                            var_20 = (1 > 18446744073709551615);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (min(var_21, (((-9086 ? ((var_9 ? (arr_1 [i_1] [i_1]) : 6710354658080348455)) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3 + 1]))))));
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] = -var_0;
                            var_22 = ((270 - (arr_18 [i_0] [i_2] [i_1] [i_2])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_31 [i_0] [i_1] [i_8] [i_9] [i_1] = var_0;
                        var_23 = ((!(arr_10 [i_0] [i_0] [i_1] [i_8] [i_8 - 1] [i_0] [i_9 - 3])));
                        var_24 = (min(var_24, ((((arr_7 [i_9] [i_8 - 1] [i_1] [i_0]) <= (arr_7 [i_9 + 2] [i_8 - 1] [i_1] [i_0]))))));
                        arr_32 [i_0] [i_1] [i_8] [i_9] [i_9] = 13754532216336695185;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_42 [i_12] [i_11] [i_0] [i_0] [i_0] = arr_25 [i_0] [i_10] [i_11] [i_10];
                        arr_43 [i_10] [i_10] = -16320;
                        arr_44 [i_0] [i_10] [i_10] [i_12] = 9223371899415822336;
                    }
                }
            }
            arr_45 [i_0] [i_0] [i_0] = (((arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) > -4173));
            arr_46 [i_0] = (((arr_33 [i_0]) & ((-(arr_40 [i_10] [i_10] [i_0] [i_0])))));
        }
        var_25 = (min(var_25, ((((arr_2 [i_0]) * (!4088))))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        arr_58 [i_13] [i_14] [i_14] = ((((((4692211857372856453 <= 1) >= (arr_53 [i_13] [i_13] [i_13])))) & (1 ^ 22632)));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_26 = var_13;
                            arr_62 [i_15] [i_14] [i_14] &= arr_52 [i_16] [i_15] [i_14];
                            arr_63 [i_14] = (((arr_56 [i_14] [i_14]) ? var_8 : (arr_56 [i_14] [i_15])));
                            var_27 = (arr_52 [i_13] [i_15] [i_16]);
                            var_28 = (arr_60 [i_13] [i_15] [i_17]);
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            arr_66 [i_13] [i_14] [i_13] [i_13] [i_13] = var_6;
                            arr_67 [i_13] [i_14] [i_15] [i_15] [i_18] [i_16] [i_14] = 8;
                        }
                    }
                }
            }
        }
        arr_68 [i_13] = (var_11 & 10644);
        arr_69 [i_13] = (((arr_51 [i_13] [i_13] [i_13]) % (4100 / -4088)));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_29 = (min((min(4096, 1)), var_12));
        var_30 = var_12;
        arr_72 [i_19] = ((18 >> (var_2 + 11106)));
        var_31 = var_10;
    }
    for (int i_20 = 3; i_20 < 10;i_20 += 1)
    {
        var_32 = 8382;
        arr_76 [i_20] [i_20 + 3] = (((((min(32760, 51381)))) / ((1 ? 27084 : 6710354658080348450))));
        var_33 = (((arr_18 [i_20 - 1] [i_20] [i_20] [i_20 - 1]) >> (((!(var_9 ^ 1))))));
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 11;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            {
                arr_82 [i_21] [i_22] = -11798;
                var_34 &= (-((-(arr_60 [i_21] [i_22] [i_21]))));
                arr_83 [i_21] [i_21] [i_21] = (min((max((arr_18 [i_22] [i_21] [i_21] [i_21]), (arr_48 [i_21] [i_22]))), (arr_22 [i_21] [i_21] [i_21] [i_21])));
            }
        }
    }
    var_35 = var_12;
    #pragma endscop
}
