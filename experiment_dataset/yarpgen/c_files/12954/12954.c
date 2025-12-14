/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_9 / 576451956210401280), ((((var_3 ? var_0 : var_9))))));
    var_17 = ((((((576451956210401280 - 255) ? 246 : ((7805 ? -2048 : -7797))))) ? (((max(var_5, var_7)))) : var_15));
    var_18 = (((((min(var_13, var_6))) ? var_2 : var_11)));
    var_19 = (max(((((var_7 > var_13) ^ var_7))), (max((min(var_12, var_6)), ((max(var_7, var_14)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 *= ((-23047 ? 13 : -2048));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = (var_12 & var_10);

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_22 = (var_11 ^ (var_2 - var_2));
                            arr_16 [i_0] [i_1] [i_2] [i_1] = var_14;
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_23 *= var_13;
                            var_24 = (min(var_24, var_7));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_25 = (var_10 ? (28947 * 414) : (var_12 > var_13));
                            var_26 = (var_10 ? var_1 : var_9);
                            var_27 = (var_0 / var_2);
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_28 *= var_5;
                            var_29 = ((var_8 | ((var_4 ? var_6 : var_4))));
                            var_30 = (min(var_30, var_9));
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_30 [i_0] = ((120 ? 10 : -28950));
            var_31 -= (var_9 && var_8);
            var_32 = (max(var_32, var_5));
            var_33 = (var_14 != var_14);
            arr_31 [i_8] = var_0;
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_34 ^= (var_11 * var_14);
            var_35 = ((var_0 ? var_9 : var_9));
        }
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_36 = ((var_8 ? var_14 : (var_11 - var_13)));
                            arr_46 [i_0] [i_0] [i_10] [i_11] [i_12] [i_12] [i_11] = (var_14 != var_0);
                        }
                    }
                }
            }

            for (int i_14 = 2; i_14 < 22;i_14 += 1)
            {
                arr_49 [i_10] [i_10 + 1] [i_14] [i_0] = (var_1 && var_8);
                var_37 = ((var_12 ? var_1 : var_10));
            }
        }
        arr_50 [i_0] [i_0] = ((var_10 ? var_15 : var_0));

        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 22;i_18 += 1)
                    {
                        {
                            arr_61 [i_18] = (((106 ? 255 : -448381521)));
                            var_38 = var_1;
                            arr_62 [i_18 - 1] [i_18] [i_17] [i_16] [i_15] [i_18] [i_0] = ((var_9 ^ ((var_3 ? var_5 : var_11))));
                            var_39 = var_2;
                            var_40 = (min(var_40, (var_0 ^ var_5)));
                        }
                    }
                }
            }
            var_41 *= var_10;
        }
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_42 = ((var_14 ? var_14 : var_3));
                var_43 *= ((var_10 ? var_5 : var_10));
                var_44 = var_9;
                var_45 = var_7;
            }
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                var_46 ^= (var_6 ? var_1 : var_9);
                var_47 *= ((var_5 != ((var_11 ? var_6 : var_13))));
                var_48 *= ((2 ? 65105 : -2056665164));
                var_49 = (max(var_49, ((((var_13 != var_3) / var_10)))));
                var_50 = (var_4 && var_12);
            }
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                var_51 = (1 / 166);
                var_52 = (min(var_52, (var_1 ^ var_12)));
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {
                    {
                        arr_79 [i_24] [i_0] [i_19] [i_0] = var_6;
                        var_53 = (var_12 & var_6);
                        var_54 = (var_14 != 125);
                    }
                }
            }
            var_55 = var_10;
        }
    }
    #pragma endscop
}
