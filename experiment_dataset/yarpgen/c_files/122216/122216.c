/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = (arr_7 [i_3] [i_0] [i_0] [i_0 + 1]);
                        arr_14 [i_3] [i_0] [i_0] [i_0 + 1] = -8969053195519146467;
                        arr_15 [2] [3] [i_2] [i_0] [i_2] [i_2] = (((((21 ? 55 : 66))) * (2147483626 / -9081068671777300958)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_12 = var_0;
            arr_20 [i_0] = ((~(arr_4 [i_0 + 1] [i_0 + 1])));
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            arr_23 [i_0] [i_0 + 1] [i_0] = (min(var_2, (min(58301, 9081068671777300962))));
            var_13 ^= 2147483624;
            var_14 ^= (~3535473943);

            for (int i_6 = 4; i_6 < 8;i_6 += 1)
            {
                var_15 = var_4;
                var_16 = min((min((arr_25 [i_5 - 2] [i_5 - 3] [i_5 - 3]), var_3)), (((((max(var_9, 1))) & ((~(arr_22 [i_0] [i_0] [i_0])))))));
                var_17 = (((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? ((5 ? (arr_16 [i_0]) : 188)) : (~var_2)));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_18 = (min(42874, (arr_31 [4] [i_7] [i_7] [i_7] [i_7] [i_0])));
                            arr_32 [i_0] = var_2;
                            arr_33 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = (min((arr_29 [i_7] [3] [i_7] [3] [i_5] [3] [3]), (arr_21 [i_0] [i_0] [i_0])));
                            arr_34 [i_8] [i_0] [i_7] [i_6] [i_5] [i_0] [i_0] = (((24304 & var_10) | (((min(var_6, var_9)) & (arr_28 [i_7 - 2] [i_7] [i_0] [i_7] [i_7 + 1])))));
                            var_19 ^= ((~((var_9 - ((4294967277 ? 177 : 8969053195519146484))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_20 += (((arr_36 [i_5] [i_5] [i_5] [4]) & (arr_30 [i_9] [i_9])));
                arr_38 [i_0] [i_0] [i_9] [i_9] = var_11;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_21 = var_7;
                arr_41 [i_0] [i_0] [i_0] = ((~(((arr_3 [i_0]) ? 759493334 : 2573546970))));
                arr_42 [i_0] = (arr_28 [4] [2] [i_0] [i_0] [i_0 + 1]);
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_59 [i_11] [0] [0] [i_11] [0] [i_11] [i_11] = (arr_49 [i_12] [i_12]);
                                var_22 = ((((~(arr_51 [i_11] [i_12] [i_12]))) < ((2168494851 ? 22 : -2147483613))));
                                var_23 ^= ((var_7 ? (arr_56 [i_14]) : (arr_50 [i_15] [i_11 - 1])));
                            }
                        }
                    }
                    var_24 += (((((~(arr_52 [4] [i_13] [i_12] [4] [i_12] [4])))) ? (((var_0 ? 1083333147 : 58282))) : (var_5 ^ var_10)));
                }
            }
        }
        var_25 ^= -776883680;
        var_26 ^= (arr_52 [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11]);
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        var_27 = (max(var_27, ((min(655024997, var_5)))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                {

                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        var_28 ^= 1296048065916653080;
                        var_29 = ((((((!(arr_70 [i_17] [i_19])) && ((max(3873745279, 42871))))))));
                        var_30 = (max(var_30, (arr_62 [i_16 - 1] [i_16 - 1])));
                    }
                    for (int i_20 = 3; i_20 < 22;i_20 += 1)
                    {
                        var_31 = 3535473944;

                        for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                        {
                            var_32 |= 1798922044;
                            arr_76 [i_20] [i_18] [i_18] [i_17] [i_20] = ((~(-2147483626 || 12789)));
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, (arr_60 [i_17])));
                            arr_79 [i_20] [i_17] [i_17] [i_17] = (var_7 * var_11);
                            arr_80 [i_20] [i_20] = var_3;
                            var_34 = var_2;
                        }
                        arr_81 [i_20] [i_18] [i_20] [i_18 - 1] = (min(var_8, (min(6974078224455213830, var_6))));
                    }
                    var_35 = (max(var_35, var_7));
                }
            }
        }
        arr_82 [i_16] [13] = (arr_60 [i_16]);
    }
    var_36 = var_8;
    #pragma endscop
}
