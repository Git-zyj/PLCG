/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((-(var_9 < -2147483647)));
        var_19 = ((-(!var_3)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_20 = (((arr_4 [i_2 + 1] [i_2 + 1]) ? -3 : (arr_3 [i_1] [i_1])));
            arr_7 [i_2] = ((var_0 ? (arr_6 [i_2 + 1] [i_2 + 1] [i_1 - 2]) : var_10));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 = (((var_4 != var_16) < 2147483647));
                            var_22 = ((-(arr_15 [0] [i_3] [0] [i_3])));
                        }
                    }
                }
            }
            var_23 = (((arr_14 [i_1] [i_1] [i_3]) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (arr_2 [i_3])));
            var_24 = (~var_7);
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            arr_24 [i_1] = (min((((((((arr_14 [i_1] [8] [i_7]) ? var_7 : var_7))) <= ((2147483647 ? 10820564027701330459 : var_5))))), (arr_23 [i_1])));
            arr_25 [i_1] [i_1] = ((-2147483647 ? (arr_3 [i_1] [i_7]) : 2251799813685247));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_25 = ((var_8 > ((((((arr_23 [i_10]) || var_3))) - (arr_18 [i_8] [i_9] [i_8])))));
                            var_26 = var_17;
                            var_27 = var_11;
                        }
                    }
                }
            }
            var_28 = ((-9223372036854775802 & (~7360)));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_42 [i_1] [i_1] [i_11] [i_11] [i_1] |= (((max(-7338, -2147483647))) ? (var_17 > var_9) : ((~(min(730294624, -32751)))));
                        var_29 = ((!(arr_19 [i_13 - 2] [i_12] [i_11] [i_1 + 1] [i_1])));
                        var_30 *= ((!((min((((arr_30 [i_1] [i_11] [i_11]) / (arr_38 [8] [i_1]))), 10)))));
                    }
                }
            }
            var_31 = ((((((max(var_12, -9913))) && 7360)) ? 2305841909702066176 : 118841904));

            /* vectorizable */
            for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_32 = 4176125372;
                            var_33 = ((var_9 < (arr_30 [i_11] [i_15] [i_16])));
                            arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_38 [i_1] [i_14 - 1]) / (arr_33 [i_1 + 1] [i_11] [i_14 + 3] [i_15] [i_16] [i_1 + 1] [i_1 + 1])));
                            var_34 -= var_12;
                        }
                    }
                }
                var_35 = (var_2 > -7360);
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_55 [i_14] [i_14] [i_1] [i_1] = ((!(arr_39 [8] [i_11] [i_11])));
                            arr_56 [i_1] [i_1] [i_11] [i_14] [i_11] [i_18] = ((2525040936 ? (arr_14 [i_1] [i_1] [i_1]) : (((var_13 ? var_3 : var_6)))));
                        }
                    }
                }
                var_36 = ((var_4 ? 1 : var_6));
                arr_57 [i_1] [i_11] [i_14] = (arr_16 [i_1] [i_1]);
            }
            /* vectorizable */
            for (int i_19 = 1; i_19 < 8;i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        {
                            arr_65 [6] [i_19] [i_20] = var_4;
                            arr_66 [5] [i_19] [5] [i_20] [i_1] [i_19] [i_1] = (((arr_17 [i_19] [4] [i_19 + 1] [i_19]) == var_16));
                            var_37 = ((var_4 ^ (arr_40 [i_19] [i_19 + 3] [i_20] [i_21])));
                            var_38 = ((((var_17 ? 6205807242873338019 : var_2)) % (arr_51 [i_20] [i_20] [i_20] [i_20])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        {
                            var_39 = (arr_39 [i_23] [i_11] [i_1]);
                            var_40 = ((!((((arr_9 [i_1] [i_11] [i_19]) % 4294967283)))));
                            var_41 = ((-(arr_70 [i_1] [i_19] [i_1] [i_1 - 2] [i_23] [i_11] [i_1 - 2])));
                            var_42 = (arr_54 [i_19] [i_19] [i_1 - 2] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
        var_43 = (((((((var_7 == (arr_4 [i_1] [i_1])))))) ? (var_5 & var_7) : ((max(-730294627, (arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [4]))))));
    }
    var_44 = (var_15 < var_5);
    #pragma endscop
}
