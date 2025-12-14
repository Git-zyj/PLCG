/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max((min(10898, var_15)), var_6));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((var_9 ? var_12 : var_14))) ? var_8 : -var_8))) ? 10898 : (max(((min(var_14, var_11))), var_0))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = ((~((max(var_12, var_16)))));
            arr_6 [i_0] [i_1] = ((((((var_2 >> (var_11 - 175)))) >= (~var_3))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = (!-10898);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_18 = (min(var_18, (!var_2)));
            var_19 = var_16;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_20 = (min(var_20, (var_9 < var_7)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_21 *= var_0;
                            var_22 = (max(var_22, (var_7 == var_11)));
                            var_23 += (-var_6 && var_9);
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_24 = var_6;

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_25 = (min(var_25, var_13));
                            var_26 += (!var_5);
                            arr_38 [i_8] [i_8] = -var_7;
                        }
                    }
                }
                arr_39 [i_8] [i_2] [i_8 + 3] [i_8] = (--10900);
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_27 |= (~var_5);

                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_28 -= var_4;
                    var_29 *= ((var_11 || (!var_1)));

                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_30 |= (!var_11);
                        var_31 = (((var_4 ? var_1 : var_16)));
                        arr_49 [i_8] [i_14] [i_12] [i_13] [i_12] [i_8 + 3] [i_8] = var_10;
                    }
                    for (int i_15 = 3; i_15 < 23;i_15 += 1)
                    {
                        var_32 *= -868527897;
                        var_33 = (max(var_33, (var_12 ^ var_4)));
                    }
                    for (int i_16 = 2; i_16 < 22;i_16 += 1)
                    {
                        var_34 = ((var_0 ? var_0 : (var_1 || var_16)));
                        var_35 = (var_16 <= var_11);
                    }
                }
            }
            var_36 = var_3;
            var_37 = (var_9 && var_0);
            var_38 = ((var_3 || var_7) >> (var_5 + 1174293256));
        }
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    {
                        arr_64 [1] [i_17] |= -var_15;
                        var_39 = (((1 / -177482542) + var_15));
                    }
                }
            }
            var_40 += 1276735388;
            var_41 = (min(var_41, ((((-2147483647 - 1) % 122880)))));
            var_42 = (min(var_42, var_2));
            var_43 = (max(var_43, -var_11));
        }
        var_44 *= ((var_12 ? var_11 : var_2));
    }
    #pragma endscop
}
