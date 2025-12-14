/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (((((-(!var_10)))) ? (arr_12 [i_2] [i_3] [i_4]) : var_11));
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_3] [6] = (4294967295 ? 4948517353315460118 : 13498226720394091493);
                            }
                        }
                    }
                    var_13 -= -var_0;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_14 ^= -var_5;
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [3] [i_6] [i_7] [i_8 + 1] [i_8 + 1] = 902779321;
                                var_15 = ((((((((max(var_10, (arr_18 [i_5] [i_5])))) && var_5)))) > (((max((arr_2 [i_6] [i_5]), 4948517353315460124)) >> (((arr_6 [i_6]) + 134))))));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((4294967295 ? (arr_8 [i_7]) : 114)) != (arr_8 [i_7])))));
                    var_17 = ((3226318914232109593 <= (max(18446744073709551596, 13498226720394091493))));
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_18 = var_5;

            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {
                var_19 = (min(var_19, (arr_9 [i_10] [i_10])));
                var_20 = ((~(arr_12 [i_11 - 3] [i_11] [i_11 - 2])));
            }
            arr_36 [i_5] [i_5] [i_5] = ((((var_6 ? var_2 : 241))) ? (4948517353315460118 ^ var_8) : 0);
            arr_37 [i_5] [i_5] = arr_29 [i_5] [i_5] [i_10] [i_5] [3];

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        {
                            arr_47 [i_5] [i_5] [i_5] [i_5] [9] [2] [i_5] = (!255);
                            var_21 = var_3;
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    arr_51 [i_5] [i_12] [i_10] [i_5] = 1;
                    var_22 = (!59079);
                    arr_52 [2] [i_5] [i_5] = (!-17);
                    arr_53 [i_5] = ((~((8375132415615293385 ? 1 : (arr_30 [i_5] [i_5] [i_5])))));
                    var_23 = var_0;
                }
                arr_54 [i_5] [i_5] [i_5] [i_5] = 0;
                arr_55 [i_5] [i_5] = ((~((-(arr_12 [i_5] [i_5] [i_12])))));
                var_24 += (((arr_42 [i_12] [i_10] [i_10] [i_5]) ? (!1) : var_2));
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
        {
            var_25 ^= (~1);

            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_26 = 6409767745470370948;
                            var_27 = ((+((8845369019362103402 ? (arr_59 [i_5] [i_17]) : (arr_0 [i_5])))));
                            arr_66 [i_5] [i_5] [i_5] [i_5] [i_18] [i_19] = 65535;
                            arr_67 [i_19] [i_5] [i_5] [i_17] [i_5] [8] [i_5] = (((~18446744073709551615) ? (arr_61 [i_5] [i_5]) : 65535));
                        }
                    }
                }
                var_28 = (min(var_28, (arr_50 [4] [i_5] [i_16] [i_16] [i_17])));
                var_29 = var_10;
            }
            var_30 = (max(var_30, -var_4));
            var_31 = (~(arr_64 [i_5] [i_5] [i_16] [i_5] [i_16] [i_16]));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 18;i_20 += 1)
    {
        var_32 = (var_0 ? var_0 : var_2);
        arr_70 [i_20] = -var_6;
        var_33 = (max(var_33, (arr_69 [i_20])));
        var_34 = (arr_68 [i_20]);
        arr_71 [i_20] = ((!(!var_4)));
    }
    var_35 = var_4;
    #pragma endscop
}
