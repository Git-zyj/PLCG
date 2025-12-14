/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = ((+((var_0 ? (var_0 - var_6) : var_15))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_19 = (~var_11);
            var_20 = (var_16 && var_12);
            var_21 = (var_17 || var_2);
            var_22 = (var_4 + var_8);
            arr_6 [i_0] [i_1] = (!var_10);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_23 = ((var_17 / (var_13 + var_1)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_24 = ((!((!(var_13 && var_5)))));
                            var_25 = (((-var_1 / var_13) ? (((((min(var_6, var_2)))) + ((var_11 ? var_16 : var_4)))) : var_5));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            var_26 = ((~var_15) * (var_13 * var_13));
                            arr_23 [i_7] = 4161536;
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_27 ^= ((-var_4 << (((min((~var_10), var_9)) + 9694))));
                            var_28 = var_7;
                            var_29 = (max(var_29, var_3));
                            var_30 = ((-(var_5 % var_17)));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_31 = var_10;
                            arr_29 [i_0] [i_6] [i_7] [i_8] [i_11] = (~var_9);
                            var_32 = (var_2 + var_10);
                        }
                        arr_30 [i_0] [i_0] [i_6] [i_7] [i_6] = ((!(1 || -4161536)));
                        var_33 = ((var_13 >> (((~var_11) + 24566))));
                        var_34 = (min(var_34, ((min((((((var_6 ? var_16 : var_2)) < (var_11 <= var_10)))), (var_7 / var_17))))));
                    }
                }
            }
            var_35 = (min((max((var_17 / var_7), ((var_9 ? var_13 : var_17)))), (var_8 / var_13)));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        var_36 = -21442;
                        var_37 = (((~var_1) << (((max(var_8, var_14)) - 1153236066))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_38 = var_1;
            var_39 &= var_10;
        }
    }
    for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
    {
        arr_41 [i_15] = (((((min(var_2, ((min(var_11, var_1))))) + 2147483647)) << (((-var_0 + 10) - 9))));
        var_40 = max((var_1 && var_13), (min(var_10, var_6)));
        arr_42 [i_15] = (~var_7);
        arr_43 [i_15 + 1] = ((-((0 ? var_13 : (var_2 / var_8)))));
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_41 = (min(var_41, (var_14 % var_4)));
        var_42 = (min(var_42, (!var_13)));
        var_43 *= ((var_12 ? var_12 : var_15));
    }
    for (int i_17 = 2; i_17 < 17;i_17 += 1) /* same iter space */
    {
        arr_50 [i_17] = ((~(var_15 == var_12)));
        var_44 = (((((var_17 ? var_4 : var_11))) ? (var_1 % var_12) : (var_3 | var_17)));
        var_45 += ((-2147483628 ? 14504727790951855490 : 1));
        var_46 = (min(var_46, ((((min((var_16 + var_13), -var_15)) + ((((((var_0 ? var_13 : var_11))) ? var_14 : var_0))))))));
    }

    /* vectorizable */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 17;i_21 += 1)
                {
                    {
                        var_47 = (max(var_47, var_8));
                        var_48 = (var_7 ^ var_17);
                    }
                }
            }
        }
        var_49 = var_4;
    }
    var_50 = (((((min(var_14, (!var_11))))) ^ var_4));
    var_51 = (max(var_51, var_15));
    #pragma endscop
}
