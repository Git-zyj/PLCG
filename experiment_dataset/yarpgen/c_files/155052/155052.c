/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = 9223372036854775807;
        var_13 = (~(!9223372036854775807));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 -= ((~(((((9223372036854775807 ? 1 : (arr_0 [i_1] [i_1])))) ? (arr_1 [i_1]) : var_6))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_4] [i_4] = var_0;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_5 [i_2 + 2]) ? -529864832 : (!var_8))))));
                            arr_15 [i_4] [i_2] [i_4] [i_4] = (arr_0 [i_2 + 2] [i_3 + 1]);
                            var_16 = ((~(arr_3 [i_4] [i_3])));
                            var_17 = (arr_4 [i_2 + 1] [i_3 + 2]);
                            var_18 &= ((~(arr_10 [i_3] [i_3] [i_3] [i_3] [i_2 - 1] [i_1])));
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_19 = (((min((arr_14 [i_6 - 1] [i_1] [i_2 + 2] [i_3 + 3] [i_4]), (arr_14 [i_6 - 4] [i_1] [i_2 + 2] [i_4] [i_4]))) ? ((var_7 - (arr_14 [i_6 - 3] [i_2 + 2] [i_2 - 1] [i_4] [i_4]))) : ((((arr_14 [i_6 - 3] [0] [i_2 + 2] [0] [i_4]) ? -770756530 : (arr_14 [i_6 - 3] [i_6 - 3] [i_2 + 2] [i_4] [i_4]))))));
                            var_20 = (max(var_20, ((((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) || 9223372036854775807)))));
                        }
                        arr_18 [i_1] [i_1] [i_4] [i_1] = var_9;

                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            var_21 ^= ((~((min(14448, (arr_3 [i_3 + 2] [i_2 - 1]))))));
                            var_22 = (max(var_22, var_8));
                        }
                        var_23 ^= ((~(arr_13 [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_24 = (max(var_24, (((((((arr_9 [i_1] [6]) ? (-9223372036854775807 - 1) : var_9))) ? (arr_3 [i_3 + 1] [i_2 - 1]) : var_1)))));
                            var_25 = (!var_2);
                            var_26 = (((((arr_19 [i_3]) ? (arr_1 [i_3]) : var_2)) * var_3));
                        }
                        var_27 = (2128135431365485469 / 2128135431365485469);
                        var_28 = var_1;
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_29 = (14811 && 73);
                            var_30 = min(-9223372036854775790, (var_0 * 1));
                        }
                        arr_35 [i_1] [i_1] [i_3] [i_10] &= (~4294967295);
                    }
                    var_31 = ((~(((arr_22 [i_2 - 1] [i_3 - 1] [i_3 + 1]) ? (((-2783 ? (arr_21 [i_1] [i_1] [i_1] [i_1]) : 0))) : ((2128135431365485469 << (((arr_25 [i_1] [i_1]) - 58385))))))));
                }
            }
        }
        var_32 = ((min(4294967295, 70064875586666263)) / (((2128135431365485469 - var_3) + (arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        arr_38 [i_12] = arr_36 [i_12 + 1];
        var_33 ^= (~9223372036854775807);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                {
                    var_34 = 2128135431365485469;
                    var_35 = (min(var_35, -var_4));
                    var_36 ^= 42;
                    var_37 = ((~(arr_43 [i_13] [i_12] [i_13] [i_13])));
                    var_38 = (((arr_43 [15] [i_12] [i_14] [i_14]) << (arr_44 [i_12 - 1] [i_14 + 3] [i_14])));
                }
            }
        }
        arr_46 [i_12] = var_5;

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_39 ^= ((+(((arr_40 [16]) & (arr_47 [i_12])))));
            arr_51 [i_12] = var_4;
            var_40 = ((917291806 ^ (arr_50 [i_12])));
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            {

                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    var_41 = ((255 >> (-2128135431365485470 + 2128135431365485472)));
                    var_42 = 14991;
                    var_43 = (max(var_43, 2147483647));
                }
                var_44 = (!var_1);
            }
        }
    }
    #pragma endscop
}
