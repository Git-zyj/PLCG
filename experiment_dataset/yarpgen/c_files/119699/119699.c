/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((var_15 ? -1372897943 : (min(var_2, (var_1 / -61))))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_1] = (~-1372897943);
                    arr_8 [i_1] = ((((!(((var_11 >> (var_7 - 1326990411)))))) ? (~var_14) : var_5));
                    arr_9 [i_2] [i_1] [i_0] = (((1372897929 + 126) ? (((!(((var_2 ? var_15 : var_0)))))) : ((((-232717836099031402 ? var_3 : var_6))))));
                }
                var_17 = (var_0 - 1498511256);
                arr_10 [i_1] = (((((~(~var_12)))) ? ((~(-1640 | -1643))) : (~0)));
            }
        }
    }
    var_18 = 0;

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3 - 1] [i_3] = (((((994227924 || -1372897930) ? var_10 : var_0))) ? ((-16383 ? (((var_15 ? var_5 : var_12))) : var_8)) : (((~var_14) ? ((var_4 ? var_12 : var_8)) : (((var_9 ? var_1 : 128))))));

        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_22 [i_4] [i_4] [i_5] = ((var_12 ? ((-var_6 ? 65148684 : (((var_0 ? var_7 : var_5))))) : (max(4127474442, 61816))));
                var_19 = ((-((var_7 ? 1639 : var_11))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 ^= -var_6;
                            arr_28 [i_3] [i_3] [18] [16] [i_3] [i_3] [i_3] &= var_6;
                            arr_29 [i_4] [i_4] = var_2;
                            var_21 = (max(var_21, var_14));
                        }
                    }
                }
                arr_30 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4] = ((~((~(max(var_8, 4127474440))))));
                var_22 = (min(-1640, 4127474471));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_34 [i_4] = var_6;
                var_23 ^= ((var_5 ? var_3 : var_0));
                var_24 ^= ((var_11 < (var_2 + var_8)));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_42 [i_3] [i_3] [2] [3] [i_4] [i_11] = (((~var_4) ? var_14 : (((((var_7 << (var_11 - 19)))) ? var_8 : var_10))));
                            var_25 = (min(var_25, (((var_8 ? var_8 : (((((var_12 >= var_1) >= var_12)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((~(var_5 / 548682072064))))));
                            var_27 = var_3;
                        }
                    }
                }
                arr_48 [i_4] [i_4 + 2] [i_9] [i_4] = var_7;
            }

            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                var_28 += var_10;
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 21;i_16 += 1)
                    {
                        {
                            var_29 = (((!1372897949) ? (((var_5 ? (!11873590925692360449) : var_12))) : var_13));
                            var_30 = var_3;
                            var_31 -= var_4;
                            arr_58 [i_4] [i_4] [i_14] [i_15] = max(var_10, ((var_14 ? ((var_9 ? var_2 : var_8)) : -var_13)));
                        }
                    }
                }
            }
            arr_59 [i_4] [i_4] [i_4] = -132;
        }
        for (int i_17 = 1; i_17 < 21;i_17 += 1)
        {
            var_32 *= ((!((((((247 ? 133141814 : 1633))) + (var_8 + var_1))))));

            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                arr_65 [i_18] [i_17] [i_3] = var_9;
                var_33 += ((var_4 >> (((((((11 % (-9223372036854775807 - 1)))) ? var_6 : (255 > 4294967295))) - 16))));
            }
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                var_34 *= (((37297 ? (var_4 + var_4) : ((var_7 ? var_15 : var_10)))) >= (~var_1));
                arr_68 [i_17] = var_10;
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                var_35 = (max((var_0 % var_5), (~-1372897964)));
                var_36 = (min(var_36, (((!(((var_2 ? (((548682072062 ? 1498511268 : 112))) : var_14))))))));
            }
            var_37 = var_0;
        }
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            var_38 ^= (max((!var_10), ((var_2 ? 37297 : 4294967295))));
            arr_75 [i_21] [0] = var_8;

            /* vectorizable */
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                arr_79 [i_21] = (((28233 < 1611484019) + -var_14));
                arr_80 [i_21] = ((8191 ? 1 : -1372897943));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_39 = var_6;
                            var_40 ^= -5424115117315335792;
                        }
                    }
                }
                var_41 += (((var_4 >= 171) ^ (var_7 / var_14)));
            }
        }
    }
    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        var_42 ^= (((((3434573948 ? (var_3 && 1856528169) : (!var_4)))) ? var_5 : var_5));
        arr_89 [i_25] = ((((var_13 ? var_8 : var_10)) * ((max((var_7 == -105), var_12)))));
        /* LoopNest 3 */
        for (int i_26 = 0; i_26 < 17;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 15;i_27 += 1)
            {
                for (int i_28 = 2; i_28 < 16;i_28 += 1)
                {
                    {
                        arr_98 [i_25] [i_25] [7] [i_25] [i_26] = var_15;
                        arr_99 [i_25] [i_25] [i_26] [i_28] = -var_6;
                        arr_100 [i_25] [i_26] [i_26] [i_26] [i_28] = (((((var_3 ? 6560619649921331043 : (!var_11)))) ? ((56207 ? var_5 : ((-1 ? var_9 : 1)))) : 1498511256));
                    }
                }
            }
        }
    }
    for (int i_29 = 1; i_29 < 8;i_29 += 1)
    {
        arr_103 [i_29 + 2] = max(-2472323943836444983, 8173);
        arr_104 [i_29] [i_29 - 1] = ((-15 ? -1498511264 : 2076859528));
    }
    for (int i_30 = 2; i_30 < 21;i_30 += 1)
    {
        var_43 = (!127);
        var_44 = (min(-64, 1176975391));
        var_45 = (!var_0);
        arr_107 [14] [i_30] = (min(var_15, var_7));
    }
    #pragma endscop
}
