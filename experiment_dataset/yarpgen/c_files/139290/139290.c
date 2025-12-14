/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_11 = 418614264;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 &= arr_4 [3];
            arr_6 [i_0] [i_1] [i_1] = ((+(min((((arr_1 [i_1]) ^ 248)), -46998))));
            arr_7 [i_1] [i_1] [i_1] = (((arr_4 [i_1]) >> (arr_0 [i_1] [i_0])));

            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                var_13 = ((((var_3 & (arr_3 [i_0] [i_0] [i_2]))) % 418614264));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_14 = (((((((arr_1 [i_0]) & 63)))) >> (var_7 + 3407)));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [21] = (((!var_1) >= (var_7 - 4831092397272185504)));
                            arr_18 [i_0] [i_0] [i_2] [i_1] [i_2] = (arr_4 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_15 = (min((((18538 ? 0 : 119))), var_6));
                            var_16 = -var_0;
                            var_17 = (max(var_17, ((max(var_9, ((min(61135, ((~(arr_16 [i_0] [i_0] [i_1] [i_0] [i_5 + 1] [i_6] [i_6])))))))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                arr_26 [i_0] [i_1] [i_1] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                var_18 = ((arr_0 [i_0] [i_7]) >= (arr_9 [i_7] [i_1] [i_7] [i_1]));
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_29 [i_8] [i_8] [6] = ((((var_6 ? var_2 : (arr_13 [i_0] [i_8])))));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_19 = (max(((var_9 ? (max((arr_32 [i_10] [i_9] [i_9 + 1] [i_0] [i_0]), 16)) : var_7)), -1));
                        var_20 = var_9;
                        var_21 = (arr_24 [i_8] [i_8] [8] [i_8]);
                        var_22 = (arr_16 [i_9 + 2] [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 2]);
                        var_23 = (((min((arr_12 [i_9 - 2]), var_2)) + (((min(1, (!-11713)))))));
                    }
                }
            }
            var_24 = arr_21 [i_0] [i_0] [i_0] [i_0] [i_0];
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_25 += (((((-32725 ? var_4 : (arr_23 [i_12])))) ? (((1 <= ((min(11712, 139)))))) : (42983 % var_1)));
                            var_26 -= 18533;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_27 = (((min(((var_5 ? (arr_11 [i_0] [i_14] [i_14]) : (arr_4 [i_14]))), ((min(var_0, (arr_38 [i_0] [i_14] [i_14])))))) << (((((1931045337 ? -15446 : var_10))) + 15502))));
            var_28 += (((min((arr_28 [i_0] [i_0] [i_0]), (arr_28 [9] [9] [9])))) == ((162 ? 18559 : (arr_28 [i_14] [i_14] [i_14]))));
        }
        var_29 = ((+((min((arr_28 [i_0] [i_0] [i_0]), var_1)))));
        var_30 *= (max((arr_8 [i_0] [i_0] [i_0] [i_0]), ((((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((min(var_0, 545908945))))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_31 -= -120;
            var_32 = (((arr_32 [i_16] [i_16] [i_15] [i_15] [i_15]) + -31254));
            arr_50 [i_15] [i_16] [i_15] = -var_4;
            var_33 = ((11388 > (arr_1 [i_15])));
        }
        var_34 = (arr_43 [i_15]);
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 15;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_19 = 2; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 19;i_21 += 1)
                        {
                            {
                                var_35 -= ((((arr_38 [i_17] [i_18] [i_17]) / var_6)));
                                arr_66 [i_21] [i_20] [i_20] [0] [i_20] [i_17 + 2] [0] &= ((var_5 ? (var_8 || 245) : ((((1 - var_1) > (var_3 | 10946))))));
                            }
                        }
                    }
                }
                var_36 -= (min(((max((arr_22 [22]), (arr_14 [i_17] [i_17 + 3] [i_17 + 4] [i_17 + 1] [i_17 + 1])))), var_6));
                arr_67 [i_18] = (min((((arr_51 [i_17 + 3]) ? var_5 : (arr_51 [i_17 + 1]))), ((min(0, 8)))));
            }
        }
    }
    var_37 = (var_9 && var_10);
    #pragma endscop
}
