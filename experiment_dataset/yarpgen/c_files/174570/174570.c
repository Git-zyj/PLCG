/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, (((!((((arr_0 [i_0 + 2]) ? var_5 : 185))))))));
        var_12 -= 0;
        var_13 -= ((((min(var_6, 112)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = (((((arr_1 [i_1]) + 2147483647)) >> (var_4 - 238)));

        for (int i_2 = 4; i_2 < 8;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 &= (98 >> 1);
                        var_16 -= ((1 - (((arr_7 [i_1] [i_4] [i_3]) ? var_5 : var_0))));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_17 = (min(var_17, 209));
                var_18 = (min(var_18, (((var_8 / (arr_11 [i_2 + 3] [i_2 + 3] [i_2 - 3]))))));
                var_19 = (((arr_14 [i_2 - 1] [i_2 - 4] [i_5]) * (arr_14 [i_2 - 3] [i_2 + 3] [i_5])));
                arr_17 [8] [6] [i_5] [i_5] = ((-((var_5 ? var_4 : var_7))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = (-(arr_15 [i_1] [i_2] [i_6] [i_1]));
                arr_22 [i_1] |= (((-32767 - 1) <= (arr_8 [i_2] [i_2 + 3] [7])));
                var_21 ^= (0 || 0);
                var_22 = (var_8 <= (arr_15 [i_2 + 2] [i_6] [i_6] [i_6]));
            }
        }
        for (int i_7 = 4; i_7 < 8;i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] = (arr_1 [i_1]);

            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_23 = (((((arr_11 [i_7] [i_7 - 3] [i_8]) && -28)) ? var_6 : (1852722417 > var_5)));
                var_24 = (((arr_18 [i_7 - 3] [i_7 + 2] [i_7 + 1] [1]) + var_5));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_25 = ((var_8 != (arr_12 [i_1] [i_1] [1] [i_1] [i_1] [i_7 + 2])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 7;i_11 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((((((~1) + 2147483647)) >> (127 - 101))))));
                            var_27 = var_9;
                        }
                    }
                }
                var_28 -= (((874868251 ? 21230 : var_4)));
                arr_37 [i_7 + 1] [i_7] = (arr_35 [i_1] [i_1] [i_1] [7] [6] [i_9]);
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
            {
                var_29 = (((arr_32 [i_7] [i_7] [i_1] [i_7 + 1] [i_7 + 3]) << ((((arr_24 [9] [i_7] [i_1]) && var_5)))));
                var_30 = (min(var_30, ((((arr_9 [i_7 - 1] [i_7 + 2] [i_7 - 3] [i_7 - 3]) & ((var_2 ? var_5 : 184)))))));
                var_31 = var_3;
            }
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                arr_42 [i_7] [i_7] = (arr_18 [i_1] [i_7] [i_13] [i_13 + 1]);
                arr_43 [i_7] [1] [i_7] = ((var_7 ? (arr_23 [i_1] [7] [i_1]) : -var_0));
                var_32 = (max(var_32, (arr_29 [i_1] [i_7 - 2] [i_7 - 2])));
            }
            var_33 = (min(var_33, var_0));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    {
                        var_34 = (max(var_34, var_1));

                        for (int i_16 = 2; i_16 < 9;i_16 += 1)
                        {
                            arr_54 [4] [i_7 + 3] [8] [i_15] [i_7] = 3840;
                            arr_55 [i_1] [i_7] [7] [0] [i_1] = ((((var_0 ? var_2 : 4294967295)) >= (((14460 ? -58 : -112)))));
                        }
                        var_35 = (min(var_35, var_5));
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_36 = (max((~76), 2597));
        var_37 |= -17036;
        var_38 = ((((var_3 ? (~var_7) : (((var_1 > (arr_57 [i_17])))))) >= (((0 < 31) ? (var_3 || -69) : (1827343406 + var_9)))));
    }
    /* LoopNest 3 */
    for (int i_18 = 3; i_18 < 15;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    arr_69 [i_18 + 2] [i_19] [4] = ((-var_0 ? (arr_58 [i_18 - 2] [i_18 - 1]) : (max(var_3, var_9))));
                    var_39 = (((((max(var_7, 34428)))) > 9223372036854775807));
                    var_40 = (~90);
                    var_41 &= ((!((((((var_10 ? var_6 : 0))) ? (min(var_3, 876840986)) : (var_4 && var_8))))));
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            {
                                var_42 = -6422;
                                arr_74 [i_21] [i_21] = (arr_59 [i_18 + 1]);
                                var_43 = ((((((((min(var_1, var_4)))) + (arr_62 [i_18 - 2] [i_18])))) ? ((min(var_1, ((-15734 ? (arr_0 [i_20]) : 25602))))) : (arr_62 [i_21] [i_21])));
                                arr_75 [i_21] = (+-844963675);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
