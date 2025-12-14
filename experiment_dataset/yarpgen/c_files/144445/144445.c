/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((var_15 >> (((arr_4 [i_0 + 1]) - 1222069440956600790))));
                    var_18 = var_14;
                    var_19 -= 34359738336;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = 5;
                                var_20 = (((((28043 ? -17276 : 18446744073709551592))) ? (arr_6 [i_0 + 1] [i_3 + 4] [i_4]) : (arr_6 [i_4] [i_3] [i_2])));
                                var_21 = ((!(arr_5 [i_0 - 1] [i_3 + 1] [i_2])));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((((arr_4 [i_1]) == var_15)) ? 65535 : (((10968858496127951450 || (arr_5 [i_0] [i_1] [i_2])))))))));
                }
            }
        }
        var_23 ^= (((3379 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : var_16)));
        var_24 = ((((var_10 ? -17276 : (arr_4 [i_0]))) - var_1));
    }
    var_25 = (((((-175835985 ? -175835997 : var_0))) ? ((var_9 ? var_9 : var_10)) : -14244));

    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_26 = (17255 / var_5);

        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_27 ^= 3552168550707495281;
                            arr_25 [i_9] [i_8] [i_6] [i_6] = (((!var_9) - -8545));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_28 = ((-17276 ? var_17 : var_10));
                            var_29 = arr_10 [i_5] [i_5] [i_5] [i_5];
                            var_30 = (arr_17 [i_5 - 3] [i_7 - 2]);
                            var_31 = ((-(arr_1 [i_7 - 2] [i_5 - 1])));
                        }
                        for (int i_11 = 4; i_11 < 7;i_11 += 1)
                        {
                            var_32 -= var_2;
                            var_33 ^= (arr_28 [i_5 - 1] [i_7 + 1] [i_7] [i_7 - 2] [i_11 + 3] [i_7] [i_11 + 4]);
                            var_34 += ((var_13 ? ((((arr_29 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_11 + 1] [i_7]) < 28043))) : ((((arr_23 [i_5] [i_5] [i_7 + 1] [i_7 + 1]) < 3379)))));
                        }
                        var_35 = (arr_15 [i_5]);
                    }
                }
            }
            arr_32 [i_6] = (-17253 || 19918);
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            arr_36 [i_5] = (arr_31 [i_5] [i_5]);
            var_36 ^= (((arr_26 [i_5] [i_5 - 1] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5]) ^ 1));
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_37 += ((~(arr_38 [i_13 - 1])));
        arr_40 [i_13] [i_13] = ((!(arr_38 [i_13 - 1])));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                var_38 = (min(var_38, ((((((arr_50 [i_18] [i_18] [i_17] [i_14] [i_14] [i_14]) || (arr_50 [i_18] [i_17] [i_16] [i_14] [i_15] [i_14]))) ? ((((~var_17) == ((((arr_41 [i_16]) >> (510 - 504))))))) : ((((max(var_12, 1))) >> ((((var_17 ? (arr_51 [i_14] [i_14] [i_14]) : 15)) - 335566428247442635)))))))));
                                arr_52 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = (((arr_42 [i_14]) ? ((min(62, (~186)))) : (min(-1468361153, (min(7477885577581600165, var_11))))));
                                var_39 = (arr_51 [i_14] [i_15] [i_16]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 23;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 23;i_20 += 1)
                        {
                            {
                                var_40 = (min(var_40, (arr_48 [i_14] [i_15] [i_16] [i_14])));
                                var_41 = var_16;
                                var_42 ^= 16713;
                            }
                        }
                    }
                    arr_58 [i_14] = (((arr_48 [i_14] [i_16] [i_14] [i_14]) < -3041));

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        var_43 += (var_14 < var_1);
                        var_44 = (~15008);
                    }
                }
            }
        }
    }
    #pragma endscop
}
