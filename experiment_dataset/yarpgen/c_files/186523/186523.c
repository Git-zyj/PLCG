/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = var_12;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (min((((8 ? ((1 ? (arr_3 [1]) : var_15)) : var_13))), (max(((((arr_4 [i_0] [i_0] [i_0]) || 8388607))), var_0))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 ^= (((~var_4) & ((((arr_10 [i_2] [i_2] [i_2 + 1] [i_2]) | (arr_10 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))))));
                        arr_14 [i_2] [i_0] [i_0] [i_0] [12] [i_3] = (max((max(((((arr_12 [5] [5] [5] [i_2] [1]) || var_19))), -8388635)), (((var_15 || (arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 1]))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_22 += (((arr_3 [i_4]) ? (arr_4 [i_0] [18] [i_4]) : (var_0 || 8323072)));
                var_23 = (var_1 * (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]));
                var_24 = ((var_0 ? (arr_6 [i_0]) : ((65535 ? var_14 : var_8))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = 4294967295;
                var_25 += ((arr_2 [i_0] [i_0]) < (arr_2 [i_0] [i_5]));
                var_26 = 1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_27 |= (arr_11 [i_0] [i_1] [i_5] [i_6 + 1] [i_0]);
                            var_28 = ((var_0 ? ((var_0 ? 23 : -8388613)) : (((-1 ? (arr_19 [i_0] [i_0] [i_7]) : (arr_24 [i_0] [3] [i_7] [i_6]))))));
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_29 = (min((((((18446744073709551615 ? var_17 : 0))) ? 1 : 9223372036854775807)), var_13));
                            var_30 = ((!(((var_15 ? ((min(-1, 1))) : ((~(arr_0 [i_0] [i_0]))))))));
                        }
                    }
                }
                var_31 ^= ((((min((arr_29 [i_1]), var_2))) ? 0 : (max(15, ((18446744073709551613 >> (((arr_15 [i_0] [i_8] [i_1] [4]) - 57520087524657662))))))));
            }
            var_32 = (((((-(arr_1 [i_0])))) & -var_11));
        }
        for (int i_11 = 3; i_11 < 21;i_11 += 1)
        {
            var_33 = (65523 && (!var_1));
            var_34 -= (!0);
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            var_35 -= ((((max(5, var_17))) ? 4294967295 : (arr_9 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 2])));
            arr_40 [i_0] [i_12] = (((((18446744073709551615 ? 4294967291 : (4294967285 << 1)))) ? var_4 : (((0 ? (arr_4 [i_0] [i_12] [i_12 - 1]) : var_2)))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    {
                        var_36 -= (((((((18446744073709551615 ? (arr_34 [i_0] [2] [2]) : (arr_29 [i_0])))) ? var_15 : (((arr_0 [i_13] [i_13]) & 9223372036854775805)))) & var_18));
                        arr_46 [i_12] [i_12] [i_12] [i_12] = (min(var_17, 65535));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_49 [i_0] [7] [i_12] [i_0] [i_0] = (arr_47 [i_0] [i_0] [i_12] [i_13] [i_13] [i_14] [i_15]);
                            arr_50 [i_15] [i_12] [i_14] [i_14] [i_13] [i_12] [i_0] = (arr_20 [i_12] [i_12] [i_14] [i_14]);
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_37 = (min(var_37, (arr_47 [i_0] [i_12 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_38 = (min(var_38, 1));
                            arr_54 [i_0] [i_12] [i_13] = 65535;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            var_39 = (min(var_39, var_16));
                            var_40 -= (110 | 1);
                            arr_58 [i_12] [i_12 + 1] [i_13] [i_0] [i_14] = (var_2 >> var_19);
                        }
                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            var_41 = (max(var_13, (((arr_44 [i_12] [i_12]) ? (((var_10 ? 21 : (arr_30 [12] [i_12])))) : (max(-1, 9223372036854775807))))));
                            arr_61 [i_0] [i_12] [i_12] [i_13] [i_14] [i_18] = (arr_27 [i_0] [i_0] [i_13] [8]);
                        }
                    }
                }
            }
        }
        var_42 = var_14;
    }
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        var_43 = (arr_63 [i_19] [i_19]);
        arr_64 [i_19] = (min(((((min(0, var_15))) ? var_6 : 32767)), ((~(var_10 / var_6)))));
        arr_65 [i_19] [i_19] = ((((max((~1), var_9))) ? 32757 : ((min((var_1 && var_12), (arr_63 [i_19] [i_19]))))));
        var_44 = (max(var_44, ((((((var_19 ? var_11 : (arr_63 [14] [i_19])))) ? (((((4294967282 ? (arr_63 [1] [i_19]) : var_3))) ? var_1 : var_15)) : (max((arr_62 [2]), (arr_62 [10]))))))));
        var_45 = (min(var_45, ((((((var_9 / (~var_17)))) ? (min((((arr_62 [18]) ? var_4 : (arr_62 [10]))), (((!(arr_62 [18])))))) : ((min((-32767 - 1), (arr_62 [12])))))))));
    }
    var_46 -= (((min(var_8, (((var_10 ? 32767 : var_15)))))) ? ((1 ? (((var_18 ? 32753 : 96))) : ((32742 ? 1 : var_0)))) : var_18);
    var_47 = (min(var_47, var_13));
    #pragma endscop
}
