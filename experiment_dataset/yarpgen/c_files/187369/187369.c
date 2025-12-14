/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = var_7;
            var_12 = ((((var_4 || (arr_4 [i_0] [i_0] [i_1])))) >> (((var_9 ^ 11824392418264276906) - 8296)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_13 ^= (arr_1 [i_0]);

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_14 = (var_5 ? 2199976406 : 0);
                var_15 = (((arr_12 [i_0] [i_3 - 1] [i_3 + 1] [8]) ? 2094990889 : 255));

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_16 ^= (((((2199976406 ? 0 : 740544443))) && (((var_6 ? var_11 : -9223372036854775789)))));
                    var_17 = var_3;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = (min(var_18, 208));
                    arr_18 [i_0] [i_2] [i_3] [1] [i_2] = var_4;
                    arr_19 [7] [7] [i_0] [i_5] [i_5] = (!3554422852);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_22 [i_6] [i_3] [13] [i_0] = (((arr_20 [i_0] [i_0] [i_3] [i_0] [i_0]) ? -11824392418264276906 : (11824392418264276906 - 62616)));
                    var_19 = var_7;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_26 [i_0] [i_2] [i_3] [i_7] = ((!(arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_2] [i_0] [i_0])));
                    arr_27 [i_2] [2] [i_2] [i_2] = (((arr_12 [i_3 + 1] [i_3] [5] [i_3]) ? var_1 : (arr_21 [i_0] [i_2] [i_3 + 1] [i_2] [i_3 - 1] [i_2])));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = (!var_10);
                }
            }
        }
        var_20 = (0 ? (min(((((var_11 + 2147483647) >> 0))), ((var_7 ? var_3 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((((2199976405 | 740544443) ? (!var_2) : var_3))));
    }
    var_21 = ((((var_11 ? ((2094990868 ? var_6 : 2199976410)) : 2))) ? (((var_8 ? var_5 : -99))) : (((max(104, 1030)))));
    var_22 ^= min(10316035726518606164, var_9);

    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_23 |= -21;
        var_24 ^= (((18446744073709551615 && var_1) <= ((29 ? 104 : 3554422830))));

        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_25 += (((!(arr_31 [i_12] [8] [i_12]))));
                            var_26 = ((4 >> (65535 - 65519)));
                            arr_41 [i_9] = (!814529317);
                        }
                    }
                }
                var_27 = (max(var_27, 6622351655445274710));
                var_28 ^= 4294967289;
                var_29 = (arr_37 [i_9] [i_9]);
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_30 = (((arr_29 [i_9] [i_13]) ? 127 : (arr_31 [i_13] [i_9] [1])));
                var_31 = (((arr_32 [i_13]) ? (arr_29 [i_8] [i_8]) : (arr_29 [i_8] [i_9])));
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_32 = (max(var_32, (arr_30 [i_8])));
                            var_33 = ((~(248 || 29)));
                        }
                    }
                }
                var_34 = (((arr_39 [i_8] [i_8] [i_14] [i_9] [i_14]) ? (arr_39 [i_8] [i_9] [i_9] [i_9] [i_14]) : (arr_39 [i_14] [i_9] [i_9] [i_9] [i_8])));
                var_35 = (!var_7);
                arr_51 [i_8] [i_9] [i_14] = var_4;
            }
            var_36 = ((((arr_32 [i_9]) + 9223372036854775807)) << (((var_0 <= var_6) - 1)));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {
                        arr_58 [2] [2] [i_9] [19] = -9279384066321901076;
                        arr_59 [i_8] [i_9] [i_17] [i_8] = -var_10;
                    }
                }
            }
            var_37 = (min(var_37, (((28189 - ((var_1 ? (arr_48 [16] [16] [i_8] [i_9] [i_8]) : var_5)))))));
            var_38 = (max(var_38, ((((arr_48 [8] [20] [i_9] [i_9] [i_9]) <= (arr_48 [4] [i_9] [i_9] [i_9] [i_9]))))));
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
        {
            var_39 = (min(var_39, (((~(var_8 * 3))))));
            var_40 = (171 <= var_4);
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {
                    {
                        arr_67 [i_8] [i_8] [i_20] [20] [i_8] = ((65521 ? (arr_52 [i_8] [i_19] [i_20]) : (arr_48 [i_20] [i_20] [i_19] [i_19] [i_20])));
                        var_41 = var_4;
                        var_42 = (((arr_50 [i_8] [i_8] [i_19] [i_20] [i_20]) ? ((var_9 ? var_3 : 3520920003)) : (arr_48 [i_20] [i_8] [i_19] [i_8] [i_21])));
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
        {
            var_43 -= ((var_1 && (((740544443 ? var_8 : var_0)))));
            arr_71 [7] = (((!var_7) >> (((((arr_53 [i_22] [i_22] [i_22] [i_22]) ? (-32767 - 1) : var_6)) + 32796))));
        }
    }
    #pragma endscop
}
