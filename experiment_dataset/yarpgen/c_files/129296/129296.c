/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~((var_0 ? var_16 : (0 < var_5))));
    var_19 = min(var_2, (2147483647 - var_14));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] = (((!-2824033407451437914) ? (arr_5 [7]) : var_7));
                    arr_8 [21] [i_1] [0] = var_5;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_1] [20] = 29;
                        var_20 = (((arr_1 [i_3]) ? (var_11 | 18446744073709551598) : var_10));
                        var_21 &= var_2;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (((arr_4 [i_0 + 2]) || var_14));
                        var_23 = (max(var_23, ((52 ? 8022088067875219893 : (arr_3 [16] [1] [i_2])))));
                        arr_16 [i_0] [i_0] [i_0] [i_0 + 3] [12] = (0 - var_4);
                        var_24 = (max(var_24, (((var_4 < (((65532 << (var_15 - 109)))))))));
                        var_25 = (min(var_25, (((-2732618391895166428 / ((6 * (arr_2 [7] [19] [i_2]))))))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [6] [i_5] [i_1] [i_5] = (var_13 && 21140);
                        var_26 = ((!var_0) % 1);
                    }
                    var_27 = (!16422);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_8] [i_8] = ((var_13 ? ((62899 ? (arr_5 [i_6]) : 19)) : 1));
                        var_28 -= -var_6;
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = (((18446744073709551598 * var_8) + var_3));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_30 *= (((arr_24 [i_0] [i_9]) ? 1 : var_10));
                            var_31 -= ((((!(-2147483647 - 1))) ? var_9 : (!-1341824915)));
                            var_32 += (!-2732618391895166428);
                            arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = (((arr_30 [i_0 + 1] [i_11 + 3]) - 393216));
                            arr_39 [13] [i_9] [i_10] [i_10] [i_11 - 2] [i_12 + 1] = ((((2732618391895166428 ? 1 : var_15)) != 0));
                        }
                    }
                }
            }
        }
        for (int i_13 = 3; i_13 < 21;i_13 += 1)
        {
            var_33 = var_3;
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_48 [i_15] [i_14] [i_13 - 1] [4] = (810509675 / 2147483625);
                        var_34 = (min(var_34, (((65532 ? 15745201318810848875 : -32746)))));
                    }
                }
            }
            var_35 ^= var_5;
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            var_36 = ((18446744073709551598 || (arr_6 [i_16 + 3] [i_16 + 2])));
            var_37 = (max(var_37, 1));
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            arr_61 [i_0 + 3] [i_16] [1] = -var_9;
                            arr_62 [i_16] [i_17] [i_19] = (((var_17 ^ var_4) ? (((((arr_41 [i_0 + 2] [i_16 + 3] [i_17]) != 18)))) : (arr_21 [i_16 + 1] [i_16] [i_0 + 3])));
                        }
                    }
                }
            }
        }
    }
    for (int i_20 = 2; i_20 < 19;i_20 += 1) /* same iter space */
    {
        var_38 = (((((var_5 || (((-2147483647 - 1) != 22))))) % var_2));
        var_39 ^= ((!((min(var_7, var_12)))));
    }
    var_40 += var_9;
    #pragma endscop
}
