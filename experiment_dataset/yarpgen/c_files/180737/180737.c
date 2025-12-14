/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((min(((var_4 ? var_0 : var_2), -var_7)))))));
    var_12 += (min((((var_5 - 9223372036854775807) / 7006827885814524574)), var_2));
    var_13 += var_6;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = 4294967295;
            var_14 = (!var_3);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 ^= (((((-var_8 ? (((var_3 ? var_7 : (arr_4 [i_0] [4] [4])))) : 1))) ? var_2 : ((((!65529) ? (max(2147483622, 1)) : var_9)))));
            arr_8 [i_0] [i_0] = (~0);
            var_16 = (((((2 ? 65535 : (max((arr_1 [i_0]), var_8))))) ? var_3 : ((max(((min(1, var_1))), ((var_0 ? (arr_3 [i_0] [i_0] [i_2]) : 1159765725)))))));
        }
        var_17 = (-127 | 6);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] = ((!(arr_11 [i_0 - 1] [i_0])));
                        var_18 = (!var_9);
                        var_19 = (min(var_19, ((((arr_11 [i_3 + 1] [i_5]) ? -var_4 : var_6)))));
                        arr_19 [i_3] [i_3 - 1] [i_0] = (65532 ? var_5 : (-2147483647 - 1));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [1] [i_0] [i_3] [i_0] [i_0 - 2] = (!1);

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 7;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_7] = (((arr_0 [i_7 - 2]) <= 65535));
                            var_20 = ((1 ? 1920 : (arr_16 [i_6] [i_3 - 1] [i_0 - 1] [i_6])));
                            var_21 = 2;
                        }
                        arr_27 [i_0] [2] &= ((!((((arr_25 [2] [2]) ? 1 : (arr_25 [4] [4]))))));
                        var_22 *= var_10;
                        arr_28 [i_0] [i_0] [3] = var_9;
                    }
                    var_23 ^= (-((max(var_2, (arr_4 [i_3 + 2] [i_0] [i_0])))));
                    var_24 = (max((((~var_5) ? (!var_9) : (max(0, 536870911)))), ((~((var_2 ? 536870911 : var_6))))));

                    for (int i_8 = 2; i_8 < 6;i_8 += 1)
                    {
                        var_25 &= 51846;
                        var_26 = (max(var_26, ((((max(1, (var_8 <= 2147483647))) ? 0 : 4294967294)))));
                        arr_32 [i_0] [i_0] [i_3] [i_3] [i_4] [i_3] = var_10;
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_4 + 1] [i_9] = 50037;
                        arr_36 [i_4] [i_4] [i_0] [i_4 + 1] [i_4] [1] = (((((((arr_31 [5] [i_0] [i_0 - 1] [i_4 - 1]) ? (arr_2 [i_0]) : var_10)) != var_8)) ? (((arr_22 [i_0] [i_0] [i_0] [i_9 - 2]) >> (max(0, 1)))) : var_0));

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 7;i_10 += 1)
                        {
                            arr_39 [i_0] [i_3] [i_4] [i_0] [i_10] = var_8;
                            var_27 = 4294967289;
                            var_28 = (((((0 ? var_4 : 55352569))) ? (arr_12 [i_0] [i_9 - 1] [i_9 - 2]) : var_2));
                            var_29 = ((-84357423 ? (arr_13 [i_0 - 1] [i_0] [i_9 + 1] [2]) : (arr_13 [i_0] [i_0] [i_9 + 1] [i_9])));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_30 -= (!(arr_37 [i_9 - 2] [i_11]));
                            var_31 = var_7;
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_32 = (~var_10);
                            arr_47 [i_12] [i_0] [4] [i_0] [1] = (~var_4);
                            var_33 *= ((((min(6755399441055744, var_2))) ? ((0 ? (arr_33 [i_0 + 1] [i_12] [i_0 + 1] [i_0 - 3] [0]) : 50037)) : ((0 ? (arr_33 [i_0 + 2] [i_12] [i_3] [i_4] [i_0 + 2]) : var_8))));
                            arr_48 [0] [0] [i_0] [0] = (0 - var_10);
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 7;i_13 += 1)
                        {
                            var_34 = ((arr_1 [i_0]) ? -4706471962955414162 : var_4);
                            arr_52 [i_0] [i_0] [i_4 - 2] [i_0] = (!-2425420325473256086);
                            var_35 = ((var_4 ? var_0 : ((-(arr_33 [i_0] [i_0] [i_0] [i_0] [i_13])))));
                        }
                        arr_53 [i_0] [i_4 - 2] [i_0] [i_0] [i_0 - 3] [i_0] = (((arr_3 [i_0] [i_4 - 1] [i_4 - 1]) ? (max(1, (~0))) : (802273392 >= 3525616505)));
                    }
                }
            }
        }
        var_36 = ((((max((min(var_7, (arr_46 [i_0] [i_0] [i_0]))), (~-84357423)))) ? (arr_34 [1] [i_0] [i_0] [i_0]) : (((arr_7 [i_0 - 4] [i_0]) ? (((~(arr_4 [i_0] [i_0] [i_0])))) : (arr_12 [i_0] [i_0] [i_0])))));
        arr_54 [i_0] = ((((((((arr_40 [i_0] [i_0] [i_0] [i_0 - 4]) ? 1071644672 : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 0 : ((var_4 ? var_5 : var_4)))) >> (((min(922767732, (arr_20 [i_0] [i_0] [2] [i_0]))) + 87338753))));
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_37 = ((var_7 ? var_10 : var_1));
                var_38 = ((var_0 ? (~13704) : ((~((var_1 ? var_8 : var_9))))));
            }
        }
    }
    #pragma endscop
}
