/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((var_17 ? 11 : var_17)), (max(var_14, var_3))))) ? var_12 : (min(var_7, (!var_6)))));
    var_20 = (min(var_20, (~8191)));
    var_21 = (min(var_21, ((((((var_5 ? (var_14 >= var_0) : (1 & var_1)))) ? ((var_3 ? ((var_8 ? var_13 : var_9)) : ((var_0 ? var_4 : 35636)))) : var_9)))));
    var_22 = (((((((min(var_11, var_15))) ? var_12 : var_14))) ? (((((65535 >> (var_4 - 95)))))) : var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (((min((min((arr_1 [i_0]), 8721347579224262371)), ((((arr_2 [i_0]) ? var_18 : var_12))))) <= var_1));
        arr_3 [i_0] = ((((((32767 ^ var_2) * (((arr_1 [i_0]) ? -9934 : var_13))))) ? (((((var_10 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) : ((var_14 ? (((arr_2 [i_0]) ? var_1 : var_14)) : (((max((arr_2 [i_0]), 7087))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 = (((((arr_6 [i_1] [i_1]) + (arr_5 [i_1]))) * (((arr_4 [i_1]) ? 1 : 13952))));

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_25 = (max(var_25, (((!(arr_4 [i_1]))))));
            var_26 = (((arr_9 [i_1] [i_2 + 2]) ? (arr_9 [i_2 + 1] [i_2]) : (var_0 <= 7)));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_27 = (((var_16 ? 52793 : 110)));
                        var_28 = (max(var_28, ((((((115 ? -5305 : 127))) ? ((var_6 >> (((arr_6 [i_1] [i_3]) - 30399)))) : var_9)))));
                        arr_19 [i_1] [i_1] [i_3] [i_4 + 1] [i_1] [i_1] = ((((arr_18 [i_3] [i_1] [i_5]) || var_8)) ? var_18 : (arr_8 [i_1]));
                    }
                }
            }
            var_29 = (max(var_29, (((!(((4294967295 ? var_18 : (arr_12 [i_1] [i_1] [i_1])))))))));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_1] [i_3] [i_6] [1] = (((arr_12 [i_1] [i_3] [i_6]) - (var_5 && var_7)));
                arr_25 [i_1] = var_4;
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_30 = ((arr_13 [i_9] [i_9]) ? var_9 : (arr_13 [i_9] [i_1]));
                        arr_32 [i_1] [i_1] [i_7] [i_7] [i_9] [i_7] [i_7] = (2835175704 * var_11);
                        var_31 ^= (var_8 && ((var_0 <= (arr_23 [i_1] [i_1] [i_7]))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, (((~(arr_30 [i_1]))))));
                        var_33 = var_8;
                        arr_37 [i_1] = ((((!(arr_18 [i_1] [i_1] [i_1]))) || (((arr_33 [i_1] [i_8] [i_7] [i_3] [i_1]) && var_8))));
                    }
                    var_34 = (min(var_34, (((((((arr_20 [i_1] [i_3] [i_7] [i_7]) % 4132626216))) != (arr_8 [i_3]))))));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_35 = ((((arr_27 [i_1] [i_1] [i_1]) ? var_8 : var_11)));
                        arr_41 [i_11] [i_11] [i_8] [i_1] [12] [i_3] [i_1] = ((4294967290 & (arr_11 [i_1])));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_36 = (!var_7);
                        arr_46 [1] [i_3] [i_7] [i_8] [i_1] = var_4;
                        var_37 = (arr_29 [i_7]);
                        arr_47 [i_1] [9] [i_1] [i_7] [i_3] [i_1] = (((arr_9 [13] [i_3]) ? (arr_9 [i_1] [i_3]) : -767507740));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_38 = (max(var_38, (var_11 + var_15)));
                        var_39 ^= (((arr_7 [i_13]) ^ var_1));
                    }
                }
                var_40 = (((arr_30 [10]) > (arr_8 [i_1])));
                arr_50 [i_1] [i_1] = (((arr_14 [i_1] [i_3] [i_3] [i_3]) - (arr_7 [i_1])));
                arr_51 [i_1] [8] [i_3] [i_1] = var_15;
            }
        }
        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            arr_54 [i_1] [i_1] [i_1] = (((arr_17 [i_14 + 2] [i_1] [i_14 + 3] [i_14] [i_14 - 1]) ? (((1 ? 7 : 1))) : (arr_14 [16] [i_1] [i_1] [4])));
            arr_55 [i_1] [i_1] [i_14 + 3] = var_16;
            var_41 = (arr_34 [i_1]);

            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                arr_59 [i_1] = ((((!(arr_53 [i_15]))) ? (arr_23 [i_15] [8] [i_1]) : (arr_13 [i_14 + 4] [i_14 + 4])));
                var_42 = (arr_15 [i_1] [4] [i_14 - 2] [i_1]);
                var_43 = (arr_29 [i_1]);
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_44 = var_9;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_45 = (((arr_21 [i_14 - 1] [i_18 + 2] [i_18 - 3]) & var_11));
                            var_46 = (arr_18 [i_1] [i_1] [i_17]);
                        }
                    }
                }
                arr_68 [i_1] = ((3491023484 ? var_15 : (((var_18 ? 1760313061 : (arr_45 [i_1] [2] [i_14 + 1] [i_14 + 4] [i_16] [i_16] [i_16]))))));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_47 = ((43616 ? var_18 : (arr_8 [i_1])));
                            arr_75 [i_1] [i_19] [0] [i_19 - 1] [i_20] [14] [i_14] &= (((arr_6 [i_19 - 1] [i_14 + 2]) ? var_8 : (arr_14 [i_19 - 2] [i_19] [i_19] [i_14 + 3])));
                        }
                    }
                }
                var_48 ^= var_5;
            }
        }
        arr_76 [i_1] [i_1] = var_9;
    }
    #pragma endscop
}
