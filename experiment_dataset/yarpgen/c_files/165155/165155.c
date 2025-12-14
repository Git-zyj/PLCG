/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((!((!((((arr_9 [i_2]) ? var_10 : 13495487939595958570)))))));
                    var_19 = var_10;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_17 [1] [i_3] = (arr_0 [i_3] [3]);
            arr_18 [i_3] = (arr_12 [i_3] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_20 += var_14;
            var_21 = (arr_9 [i_5]);
            var_22 = var_4;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_23 |= ((var_14 ? (-var_3 < 1367121650) : var_14));
            arr_24 [i_3] [i_3] = var_8;
            var_24 = ((var_15 ? var_8 : (!-5435838755200726329)));

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_29 [i_3] [i_3] = (max(var_15, var_7));
                var_25 = (arr_19 [i_3] [i_3]);
                arr_30 [i_3] [i_3] [i_6] [i_7] = 32767;
                arr_31 [4] [i_6] [i_3] = ((!(((var_0 ? var_15 : var_3)))));
                var_26 = (min(var_26, var_0));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_27 *= var_6;
                            var_28 = var_7;
                        }
                    }
                }
                var_29 *= ((~(12288 > 32747)));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_41 [i_11] [i_6] [i_11] &= var_0;
                var_30 = var_6;
                var_31 = (51322 | 1);
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_32 = (min(var_32, (arr_20 [i_6] [i_3])));
                var_33 = ((-32767 ? -var_3 : (min(var_8, 4294967283))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_52 [i_3] [i_6] [i_13] [i_13] = var_13;
                        arr_53 [i_3] [i_3] [i_13] [i_3] = ((-var_11 ? (((arr_22 [i_13] [i_13]) % 12954847514419439632)) : (var_3 > var_4)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_34 = var_1;
            arr_56 [10] &= (!var_1);
            var_35 = var_5;
        }
        var_36 ^= -78;
        var_37 = -92;
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_61 [i_16] &= var_8;
        var_38 = ((-var_8 ? 1 : var_2));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            {
                                var_39 &= 23937;
                                var_40 *= (max(((32767 ? 41567 : (!var_5))), var_13));
                                var_41 = (min(var_41, ((~(arr_69 [i_16] [i_17] [i_18] [i_19] [i_20])))));
                                arr_72 [i_16] [i_16] [i_18] [i_19] [i_20] = (min(var_6, 1));
                            }
                        }
                    }
                    var_42 = ((((((arr_65 [i_16] [i_16] [i_16]) ? var_10 : 1))) % (((arr_65 [i_16] [i_16] [i_16]) ? var_12 : var_1))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            {
                                var_43 = var_4;
                                var_44 *= (((~-1367121672) | (((!var_0) ? (!var_4) : (var_0 && var_15)))));
                            }
                        }
                    }
                }
            }
        }
        var_45 = (~-var_13);
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 15;i_23 += 1)
    {
        var_46 = (((!var_9) ? 7810 : var_14));
        arr_80 [i_23] = var_5;
    }
    var_47 = ((((max(var_14, (var_8 | var_10)))) ? var_4 : (var_8 && var_9)));
    #pragma endscop
}
