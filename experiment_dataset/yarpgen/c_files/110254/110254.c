/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = 125;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (arr_1 [i_0]);
                    var_21 = ((var_17 ? (var_3 / var_17) : (arr_6 [i_0] [i_0] [i_1] [i_0])));
                }
            }
        }
        var_22 = (((~15) ? var_12 : var_10));
        arr_7 [i_0] = (-105 & -4110027918588163499);
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = var_17;
                            var_24 *= (0 ^ 36);
                        }
                    }
                }
            }
            var_25 ^= (((((-(arr_18 [12] [12])))) ? (max((arr_18 [20] [20]), var_7)) : (((arr_18 [8] [8]) ? (arr_18 [2] [2]) : (arr_18 [10] [10])))));
            var_26 ^= var_11;
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_27 = (min(((((min(var_4, (arr_13 [i_3] [i_3] [i_8])))) ? (220 <= 43949) : var_5)), (((arr_23 [i_3 + 1] [i_3 + 1] [0]) ? (arr_23 [i_3 + 1] [i_3 - 1] [i_8]) : (arr_23 [i_3 + 2] [i_3 + 1] [10])))));
            var_28 ^= (min(1, 36));
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_29 = (0 % 15920);

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 = (max((arr_16 [i_9 - 1]), (((arr_12 [1] [1]) & (arr_12 [20] [20])))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_34 [i_3] [i_3] [i_10] [i_11 - 1] = (((var_10 / (arr_11 [i_10] [i_11 - 1] [22]))));
                            var_31 = (((((-(arr_11 [22] [22] [18])))) ? (min((arr_29 [i_3] [i_3] [i_3] [i_3]), (arr_31 [i_3 + 1] [i_9] [i_3 + 1] [i_3 + 1] [i_12 + 1] [i_3] [7]))) : (0 * 0)));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_32 = var_14;
                            var_33 ^= (arr_33 [i_3] [i_3] [i_9] [i_13] [i_14] [i_15]);
                            arr_41 [i_3 + 1] [i_9] [i_13] [i_14] [i_15] = (max((arr_27 [i_3 - 1] [i_13]), ((((5656 ? 1085 : (arr_16 [i_15]))) >> (((~0) + 27))))));
                        }
                    }
                }
                arr_42 [i_3] = (min((~var_2), (~var_0)));
            }
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            arr_45 [i_3 + 1] = (min(-var_2, (arr_44 [i_3 + 2] [i_3 + 1])));

            for (int i_17 = 1; i_17 < 21;i_17 += 1)
            {
                arr_49 [i_3] [i_3] [i_17] [i_16] = (arr_11 [4] [i_16] [i_16]);
                var_34 = (((((-1 ? 9223372036854775807 : 0))) && ((max(-40, 56425)))));
                arr_50 [i_3] [i_17] |= var_8;
            }
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                arr_54 [i_3] = (((!0) || (((var_8 ? (arr_21 [i_3 + 2] [i_3 + 2]) : 27523)))));
                var_35 = (max(var_35, -69809883));
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    arr_61 [i_3] [i_19] = (max(473213142948026855, (-1 ^ 64450)));
                    var_36 = (arr_16 [12]);
                }
                arr_62 [i_19] [i_16] [i_19] = (((((~(0 != -1)))) ? 35992 : (!9223372036854775807)));
                var_37 = ((((min((arr_30 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 - 1]), var_17))) == (-13187 && 21152)));
                arr_63 [i_19] = ((min((((64450 ? 0 : var_15))), (arr_29 [i_3] [i_16] [19] [i_19]))));
            }
            var_38 = var_5;
        }
        var_39 ^= ((((((max((arr_46 [i_3] [i_3 + 2]), -1))) ? (arr_59 [i_3 + 2] [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3]) : (arr_9 [i_3 + 2])))) * 13415);
        var_40 -= 5242253770345487848;
        var_41 = (max(var_41, var_7));
    }
    #pragma endscop
}
